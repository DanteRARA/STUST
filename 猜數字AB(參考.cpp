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
        // �ѹq���H�����ͤ@�ե|�Ӥ��P���Ʀr
        for (i = 0; i < 4; ++i) {
                p = rand() % 10;
                if (p == i) continue;
                tmp = quiz[i];
                quiz[i] = quiz[p];
                quiz[p] = tmp;
//                cout << p << "\t" << quiz[i] << endl; //���� 
        }        
        int guess[4], j, k;
 		//�C���P�_���j�� 
        for(i = 0; i < 7; ++i){
                cout << "�п�J�|�Ӥ����ƪ����ԧB�Ʀr : ";
                cin  >> num;
                // ���J���Ʀr���Ѧ� �d��, �ʦ�, �Q��, �Ӧ�, �ç⵲�G��J�@�Ӱ}�C��
                guess[0] = num / 1000;
                guess[1] = (num / 100) % 10;
                guess[2] = (num / 10) % 10;
                guess[3] = num % 10;
             
                // �P�_��J�Ʀr�P���ת��ŦX�{��
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
                    cout << "���߱z����F!" << endl;
                    break;
                }else{
                    cout << "�p����~ " << i + 1 << " : " << hintA << "A" << hintB << "B" << endl;
                }
        }
        
        if(i == 7){
        	cout << "�A��F��~���T���׬O : ";
            for(j = 0; j < 4; ++j)
                cout << quiz[j];
                cout << endl;
        }
        return 0;
}
/*
�飼�������� ���X
 
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

