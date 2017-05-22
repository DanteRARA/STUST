#include <iostream>
using namespace std;

int main(){
	
	int n;
	cin >> n;
	
	for(int i = 0; i < n; i++){
		int isbn[10] = {0};
		
		for(int j = 0; j < 10; j++){
			
			char num;
			cin >> num;
			if(num - '0' <= 9){
				isbn[j] = num - '0';
			}else if(num - 'x' == 0){
				isbn[j] = 10;
			}
		}			
		int isbnC[10] = {0}, isbnCC[10] = {0};
	
		for(int k = 1; k < 10; k++){
			for(int l = 0; l <= k; l++){
				isbnC[k] += isbn[l];
			}
		}
		for(int k = 1; k < 10; k++){
			for(int l = 0; l <= k; l++){
				isbnCC[k] += isbnC[l];
			}
		}

		if(isbnCC[9] % 11 == 0){
			cout << "YES" << endl;
		}else{
			cout << "NO" << endl;
		}
	}	
	return 0;
}
