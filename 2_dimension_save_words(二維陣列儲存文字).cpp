#include <iostream>
#include <cmath>
#include <string.h>
using namespace std;

//Use the two dimension to save the words
//Chang Kai Chun

int main(){
    
    // printf("Enter the sentence.\n");
    
    char ** temp_string;
    temp_string = new char * [10];
    for(int i = 0; i < 10; i++){
        temp_string[i] = new char[10];
        for(int j = 0; j < 20; j++){
            temp_string[i][j] = '\0';
        }
    }
    
    
    for(int i = 0, j = 0; i < 10; i++){
        if(cin.peek() == ' '){
            cin.ignore();
            j++;
            i = -1;
        }else{
            // printf("%d\n", i);
            cin >> temp_string[j][i];
        }
        if(cin.peek() == '\n') break;
        
    }

    printf("%s \n\n", "string OUTPUT");

    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            //if(temp_string[i][j] == '\0') i++;
            //cout << i << ", " << j << temp_string[i][j];
            cout << temp_string[i][j];
        }
        cout << endl;
    }



}
