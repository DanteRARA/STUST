#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

void calc(int a, int b, int c){
	
	float ans1 = (-b + sqrt(pow(b, 2) - 4 * a * c)) / 2 * a;
	float ans2 = (-b - sqrt(pow(b, 2) - 4 * a * c)) / 2 * a;
	if((pow(b, 2) - 4 * a * c) < 0){
		cout << "µL¸Ñ" << endl;
	}else{
		cout << setprecision(6) << fixed << ans1 << '\n' << ans2 << endl;
	}
}

int main(){
	
	int a, b, c;
	char com = 'T';
	while(true){
		
		cin >> a >> b >> c;
		calc(a, b, c);
		cin >> com;
		if(com - 'T' == 0){
			continue;
		}else{
			break;
		}
	}
	
	
	
	return 0;
}
