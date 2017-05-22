#include <iostream>
#include <stdlib.h> 
#include <time.h>
using namespace std;

int main(){
	
	srand(time(NULL));
	//為了使亂數不會重複出現同一數字 
	int answer = (rand() % 100) + 1;
	//建立1~100的亂數 

	int guess;//使用者輸入的數字 
	
	//猜十次的迴圈 
	for(int times = 0; times < 10; times++){
		cin >> guess;
		if(guess == answer){
			cout << "恭喜您答對了!!" ;
			break;
		}else if(guess > answer){
			cout << "再小一點" << endl;
			continue;
		}else{
			cout << "再大一點" << endl; 
			continue;
		}
	}
	
	return 0;
}

