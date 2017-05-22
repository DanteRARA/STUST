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
	
	//製造亂數為了"rand()" 不會重複 
	srand(time(NULL)); //use stdlib.h and time.h
	
	
	int tmp, p;
	for(i = 0; i < 4; i++){
		p = rand() % 10;
		if(p == i)	continue;
		tmp = quiz[i];
		quiz[i] = quiz[p];
		quiz[p] = tmp;
//		cout << p << "\t" << quiz[i] << endl; //測試 
	}
	
	int guess[4], num, j, k;
	for(i = 0; i < 7; i++){
		cout << "請輸入四個不重複的阿拉伯數字 : ";
		cin >> num;
		//將輸入的數字分成千、百、十、個位並且放進陣列 
		guess[0] = num / 1000;
		guess[1] = (num / 100) % 10;
		guess[2] = (num / 10) % 10;
		guess[3] = num % 10;
		
		//判斷數字與答案的相符程度
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
			cout << "恭喜您答對了!!" << endl;
			 break;
		}else{
			cout << "小提示 " << i+1 << " :" << hintA << "A" << hintB << "B" << endl;
		}		
	}
		
	if(i == 7){
		cout << "你輸了唷~正確答案是 : ";
		for(int o = 0; o < 4; o++){
			cout << quiz[o] ;
		}
	} 
	
	
	
	return 0;
}
