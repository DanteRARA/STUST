// Adv_cipher_homework_01.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
// 進階密碼學(碩)homework

#include "pch.h"
#include <iostream>
#include <cmath>
using namespace std;


// void init(int text_len){
//     plaintext = new char[text_len];
//     return 0;
// }
// A-Z = 65~90; a-z = 97~122
class Adv_cipher_homework {
private:
	char *plaintext;
	char *ciphertext;
	int plaintext_len, ciphertext_len, bias;
	char *key;
	int key_len;
	char **key_table;
public:
	Adv_cipher_homework() {
	}
	void init_table(int bias = 0) { // bias can make different key-table
		// 初始化一個 A~Z 的 Array
		this->bias = bias;
		int alphabet_AtoZ[26] = { '\0' };
		for (int i = 0, j = 65; i < 26; i++, j++) {
			alphabet_AtoZ[i] = j;
			// cout << alphabet_AtoZ[i] << "\t";
		}
		// Initial a row and column is A to Z
		int wordLink = 0;
		key_table = new char*[26];
		for (int i = 0; i < 26; i++) {
			key_table[i] = new char[26];
			for (int j = 0; j < 26; j++) {
				key_table[i][j] = '\0';
				wordLink = (i + j + bias);
				if (wordLink > 25) {
					wordLink %= 26;
				}
				key_table[i][j] = alphabet_AtoZ[wordLink];
				//cout << key_table[i][j] << ' ';
				wordLink = 0;
			}
			//cout << endl;
		}
	}
	void table_print() {
		for (int i = 0; i < 26; i++) {
			for (int j = 0; j < 26; j++) {
				cout << key_table[i][j] << ' ';
			}
			cout << endl;
		}
	}
	void setPlainLength(int len) {
		plaintext_len = len;
	}
	void setCipherLength(int len) {
		ciphertext_len = len;
	}
	void init(int len) {
		plaintext_len = ciphertext_len = len;
		plaintext = new char[plaintext_len];
		ciphertext = new char[plaintext_len];
		for (int i = 0; i < plaintext_len; i++) {
			ciphertext[i] = plaintext[i] = '\0';
		}
	}
	void setKey(char *_key, int len) {
		key_len = len;
		key = _key;
	}
	void plaintext_input(char* text) {
		plaintext = text;
	}
	void ciphertext_input(char* text) {
		ciphertext = text;
	}

	void complex_OneToOne_Encrpytion(){
		int rowOftable = -1;
		int columnOftable = -1;
		for (int i = 0, j = 0; i < plaintext_len; i++, j++) {
			// 取得table row and column
			rowOftable = plaintext[i] % 65;
			int tmpj = j % key_len;
			columnOftable = key[tmpj] % 65;
			// 查詢 table			
			//printf_s("r : %d, c : %d", rowOftable, columnOftable);
			ciphertext[i] = key_table[rowOftable][columnOftable];
			
			//cout << ciphertext[i] << endl;
		}
	}

	/*	table[row][ciphertext] = 對到的column，再(column - bias) mod 26
		if answer = index + bias > 26 then answer = (index - bias) + 26 
		count the index is from ZERO
	*/
	void complex_OneToOne_Decrpytion() {
		int rowOftable = -1;
		int columnOftable = -1;
		for (int i = 0; i < ciphertext_len; i++) {
			int c = 0;
			for (int r = 0; r < 26; r++) {
				int key_i = i % 3;
				if (key[key_i] == key_table[r][c]) {
					for (c; c < 26; c++) {
						if (ciphertext[i] == key_table[r][c]) {
							int tmp = c - bias;
							if (tmp < 0) tmp += 26;
							plaintext[i] = tmp;
						}
					}
				}
			}
			plaintext[i] += 65;
		}
	}

	void test_output() {
		cout << "plain : ";
		for (int i = 0; i < plaintext_len; i++) {
			cout << plaintext[i] << ',';
		}
		cout << endl;
		printf_s("key : %c\n", key);
		printf_s("plain_len : %d\n", plaintext_len);
		printf_s("key_len : %d\n", key_len);
		for (int i = 0; i < ciphertext_len; i++) {
			cout << ciphertext[i] << ' ';
		}
	}
	void plain_output() {
		for (int i = 0; i < plaintext_len; i++) {
			cout << plaintext[i] << ' ';
		}
	}
	void cipher_output() {
		for (int i = 0; i < ciphertext_len; i++) {
			cout << ciphertext[i] << ' ';
		}
	}

};


int main() {
	char* text;
	char* key;
	int text_len = 0; //temp = 50;
	int key_len = 0;
	text = new char[text_len];
	key = new char[text_len];
	for (int i = 0; i < text_len; i++) {    // initial array
		key[i] = text[i] = '\0';
	}
	/*printf("input the plaintext langth : ");
	cin >> plaintext_len;
	printf("input the plaintext : ");
	cin >> plaintext;
	printf("enter the one-to-one key : ");
	cin >> key;*/
	
	cout << "Enter Plaintext : ";
	for (int i = 0; i < 50; i++) {
		if (cin.peek() != '\n') {
			cin >> text[i];
			text_len += 1;
		}
	}	
	cin.get(); //為了讀取 '\n'換行符號
	


	cout << "Enter Key : ";	
	for (int i = 0; i < 20; i++) {
		if (cin.peek() != '\n') {
			cin >> key[i];
			if (key[i] > 90) {
				key[i] -= 32;
			}
			key_len += 1;
		}
	}
	cin.get();
	
	
	//cout << endl << counter << endl; // 計算密碼有幾碼

	Adv_cipher_homework ac_hw;
	ac_hw.init(text_len);
	// Encrption block 
	//ac_hw.init_table(20); // key table bias plus value 
	//ac_hw.table_print();
	//ac_hw.plaintext_input(text);
	//ac_hw.setKey(key, key_len);
	//ac_hw.complex_OneToOne_Encrpytion();
	//cout << "加密過的明文 : ";
	//ac_hw.cipher_output();

	//Decrption blcok
	ac_hw.init(text_len);
	ac_hw.init_table(20); // key table bias plus value 
	ac_hw.ciphertext_input(text);
	ac_hw.setKey(key, key_len);
	ac_hw.complex_OneToOne_Decrpytion();
	cout << "解密後的密文 : ";
	ac_hw.plain_output();

	//ac_hw.test_output();

	cout << endl << endl;
	return 0;
	system("PAUSE");
}








// 執行程式: Ctrl + F5 或 [偵錯] > [啟動但不偵錯] 功能表
// 偵錯程式: F5 或 [偵錯] > [啟動偵錯] 功能表

// 開始使用的秘訣: 
//   1. 使用 [方案總管] 視窗，新增/管理檔案
//   2. 使用 [Team Explorer] 視窗，連線到原始檔控制
//   3. 使用 [輸出] 視窗，參閱組建輸出與其他訊息
//   4. 使用 [錯誤清單] 視窗，檢視錯誤
//   5. 前往 [專案] > [新增項目]，建立新的程式碼檔案，或是前往 [專案] > [新增現有項目]，將現有程式碼檔案新增至專案
//   6. 之後要再次開啟此專案時，請前往 [檔案] > [開啟] > [專案]，然後選取 .sln 檔案
