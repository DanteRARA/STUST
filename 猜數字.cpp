#include <iostream>
#include <stdlib.h> 
#include <time.h>
using namespace std;

int main(){
	
	srand(time(NULL));
	//���F�϶üƤ��|���ƥX�{�P�@�Ʀr 
	int answer = (rand() % 100) + 1;
	//�إ�1~100���ü� 

	int guess;//�ϥΪ̿�J���Ʀr 
	
	//�q�Q�����j�� 
	for(int times = 0; times < 10; times++){
		cin >> guess;
		if(guess == answer){
			cout << "���߱z����F!!" ;
			break;
		}else if(guess > answer){
			cout << "�A�p�@�I" << endl;
			continue;
		}else{
			cout << "�A�j�@�I" << endl; 
			continue;
		}
	}
	
	return 0;
}

