#include <iostream>
#include <iomanip>
using namespace std;

float Max(int times, float num){
	float max = -1001;
	if(num > max) max = num;
	return Max(times -1, max);
}
float Min(int times, float num){
	float min = 1000;
	if(num < min) min = num; 
	return Min(times - 1, min);
}

int main(){
	
	int times;
	float num;
	cin >> times;
	cin >> num;
	
	cout << "maximum:" << setprecision(2) << fixed << Max(times, num) << endl;
	cout << "minimum:" << setprecision(2) << fixed << Min(times, num) << endl;
	
	return 0;
}
