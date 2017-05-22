#include <iostream> 
using namespace std;

	int power(int a, int b){
		int p = 1 * a;
		for(int i = 0; i < b; i++){
			p *= p;
		}
		return p;
	}

int main(){
	
	double num = 0;
	cin >> num;
	int bits[16] = {0};
	int count = 0;
	for(count; num != 0; count++){
		
		bit[count] = (num / power(10, count))% 2;		
	}
	cout << count;
	
	return 0;
}
