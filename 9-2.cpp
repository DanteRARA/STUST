#include <iostream>
using namespace std;

int fe(int n){
	if(n <= 2) return 1;
	return fe(n - 1) + fe(n - 2);
}

int main(){
	
	int n;
	cin >> n;
	cout << fe(n);
	
	return 0;
}
