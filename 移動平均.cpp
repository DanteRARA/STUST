#include <iostream>
#include <iomanip> 
using namespace std;

int main(){
	
	float words[1000];		
	int i;
	for(i = 0;cin.peek() != '\n' ;i++){
		cin >> words[i];
		char c = cin.peek();
		if(c == ',' || c == ';' || c == '$'){
			cin.ignore();
		}
	}
	
	for(int j = 2; j < i; j++){
		float avg = (words[j-2] + words[j-1] + words[j]) / 3.0;
		cout << setprecision(2) << fixed << avg << " ";
	}	
	
	return 0;
}
