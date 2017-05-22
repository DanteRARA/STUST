#include <iostream>
using namespace std;

int main(){
	
	int n;
	cin >> n;
	if(n > 9){
		cout << "¿é¤J¿ù»~" << endl; 
	}else{
	
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= i; j++){
				cout << i;
			}
			cout << endl;
		}
	}	
	return 0;
}
