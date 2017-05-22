#include <iostream> 
using namespace std;
	
int main(){
	int num;
	cin >> num;
	int bits[16] = {0};
	int count = 0;
	
	if(num > 32767 || num < -36768){
		cout << "¿é¤J¿ù»~";
	}else if(num >= 0){
		for(int i = 0; num > 0; i++){
			int bin = num % 2;
			bits[i] = bin;
			num /= 2;		
		}
		for(int i = 15; i >= 0; i--){
			cout << bits[i];
		}
	}else if(num < 0){
		num *= -1;
		for(int i = 0; num > 0; i++){
			int bin = num % 2;
			bits[i] = bin;
			num /= 2;
		}
		bits[15] = 1;
		for(int i = 15; i >= 0; i--){
			cout << bits[i];
		}
	}

	
	return 0;
}
