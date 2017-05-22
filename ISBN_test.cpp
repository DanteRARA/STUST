#include <iostream>
using namespace std;

int* isbnCer(int isbn[]){
	int isbnC[10] = {0};
	
	for(int i = 1; i < 10; i++){
		for(int j = 0; j <= i; j++){
			isbnC[i] += isbn[j];
		}
	}
	for(int i = 0; i < 10; i++) cout << isbnC[i] << " ";
	return isbnC;
}

int main(){
	
	int n, isbn[10] = {0};
	cin >> n;
	
	for(int i = 0; i < n; i++){
		for(int j = 0; i < 10; i++){
			cin >> isbn[i];
		}
	}	
	
	
	for(int i = 0; i < 10; i++) cout << isbnC[i] << " ";
	return 0;
}
