#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	
	int size;
	cin >> size;
	for(int i = 0; i < size; i++){
		float tmp, max, min;
		for(int j = 0; j < 10; j++){
			cin >> tmp;
			if(j == 0) max = min = tmp;
			if(tmp > max) max = tmp;
			if(tmp < min) min = tmp;		
		}
		cout << "maximum:" << setprecision(2) << fixed << max << endl;
		cout << "minimum:" << setprecision(2) << fixed << min << endl;
	}
	
	return 0;
}
