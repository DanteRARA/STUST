#include <iostream>
#include <time.h>
#include <stdlib.h> 
using namespace std;

int main(){
        int i, num;
        int quiz[10];        
        
        for (i = 0; i < 10; i++){
        	quiz[i] = i;
        	
		} 
                                
        srand(time(NULL)); //use time.h and stdlib.h
        
        int tmp, p;
        // 由電腦隨機產生一組四個不同的數字
        for (i = 0; i < 4; ++i) {
                p = rand() % 10;
                if (p == i) continue;
                tmp = quiz[i];
                quiz[i] = quiz[p];
                quiz[p] = tmp;
//                cout << p << "\t" << quiz[i] << endl; //測試 
        }        
        int guess[4], j, k;
 		//七次判斷的迴圈 
        for(i = 0; i < 7; ++i){
                cout << "請輸入四個不重複的阿拉伯數字 : ";
                cin  >> num;
                // 把輸入的數字分解成 千位, 百位, 十位, 個位, 並把結果放入一個陣列中
                guess[0] = num / 1000;
                guess[1] = (num / 100) % 10;
                guess[2] = (num / 10) % 10;
                guess[3] = num % 10;
             
                // 判斷輸入數字與答案的符合程度
                int hintA = 0, hintB = 0;
                for(j = 0; j < 4; ++j){
                		for(k = 0; k < 4; ++k){
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
                    cout << "恭喜您答對了!" << endl;
                    break;
                }else{
                    cout << "小提示~ " << i + 1 << " : " << hintA << "A" << hintB << "B" << endl;
                }
        }
        
        if(i == 7){
        	cout << "你輸了唷~正確答案是 : ";
            for(j = 0; j < 4; ++j)
                cout << quiz[j];
                cout << endl;
        }
        return 0;
}
/*
輸ˉˉˉˉˉ ˉ出
 
Please enter your guess number : 1234
Hint 1 : 0A3B
Please enter your guess number : 3256
Hint 2 : 0A2B
Please enter your guess number : 3651
Hint 3 : 0A2B
Please enter your guess number : 3256
Hint 4 : 0A2B
Please enter your guess number : 9576
Hint 5 : 0A1B
Please enter your guess number : 6482
Hint 6 : 2A1B
Please enter your guess number : 3156
Hint 7 : 1A1B
You lose the game ! The correct answer is : 6142
 
*/

