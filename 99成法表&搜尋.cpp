#include<iostream> 
using namespace std;

int search(int x){
	bool array[100] = {false};
 
	for(int b = 1; b <= 9; b++){
  		for(int a = 2; a <= 9; a++){
   			int ans = a * b;
   			if((ans % 10) == x){
    			array[ans] = true;
   			}
   			if((ans / 10) == x && ans >= 10){
    			array[ans] = true;
   			}
  		}
 	}	
	for(int i = 0; i < 81; i++){
  		if(array[i] == true){
   			cout << i << "\t";
  		}
 	}
 	return 0;
}


int main(){
 	int find = 0;
 	cin >> find;
 	search(find);
 
 	return 0;
}
