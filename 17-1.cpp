#include <iostream>
#include <math.h>
using namespace std;

int calc(int a, int b, int c){
	
	int ans1 = (-b + sqrt(pow(b, 2) - 4 * a * c)) / 2 * a;
	int ans2 = (-b - sqrt(pow(b, 2) - 4 * a * c)) / 2 * a;
	return ans1, ans2;
}

int main(){
	
	int a, b, c;
	cin >> a >> b >> c;
	
	
	return 0;
}
