#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main(){
	
	int i, quiz[10];
	for(i = 0; i < 10; i++){
		quiz[i] = i;
//		cout << quiz[i] << endl;
	}
	
	//�s�y�üƬ��F"rand()" ���|���� 
	srand(time(NULL)); //use stdlib.h and time.h
	
	
	int tmp, p;
	for(i = 0; i < 4; i++){
		p = rand() % 10;
		if(p == i)	continue;
		tmp = quiz[i];
		quiz[i] = quiz[p];
		quiz[p] = tmp;
//		cout << p << "\t" << quiz[i] << endl; //���� 
	}
	
	int guess[4], num, j, k;
	for(i = 0; i < 7; i++){
		cout << "�п�J�|�Ӥ����ƪ����ԧB�Ʀr : ";
		cin >> num;
		//�N��J���Ʀr�����d�B�ʡB�Q�B�Ӧ�åB��i�}�C 
		guess[0] = num / 1000;
		guess[1] = (num / 100) % 10;
		guess[2] = (num / 10) % 10;
		guess[3] = num % 10;
		
		//�P�_�Ʀr�P���ת��۲ŵ{��
		int hintA = 0, hintB = 0;
		for(j = 0; j < 4; j++) {
			for(k = 0; k < 4; k++){
				if(quiz[j] == guess[k]){
					if(j == k){
						hintA++;
					}else{
						hintB++;
					}
				}
			}
		}
		if(hintA == 4){
			cout << "���߱z����F!!" << endl;
			 break;
		}else{
			cout << "�p���� " << i+1 << " :" << hintA << "A" << hintB << "B" << endl;
		}		
	}
		
	if(i == 7){
		cout << "�A��F��~���T���׬O : ";
		for(int o = 0; o < 4; o++){
			cout << quiz[o] ;
		}
	} 
	
	
	
	return 0;
}
