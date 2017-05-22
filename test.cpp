#include <iostream> 
#include <math.h> 
#include <iomanip>
using namespace std;

int main(){
	
	int n;
	cin >> n;
	
	double *num;
	num = new double[n];
	
	for(int i = 1; i <= n; i++){
		double deltaX = (double)i / n;		
		double expT = exp(deltaX * deltaX);
		num[i - 1] = 1.0 / expT;
	}
//	for(int i = 0; i < n; i++) cout << setprecision(7) << fixed << num[i] << " " << endl;
	double trapezoidal, simpson, tmpt, tmps, delta = 1.0 / n;
	for(int i = 0; i < n - 1; i++){
		tmpt += 2.0 * num[i];
		if(i % 2 == 0){
			tmps += 4.0 * num[i];
		}else{
			tmps += 2.0 * num[i];
		}		
	}
	cout << endl << tmpt << " " << tmps  << endl;
	trapezoidal = (1.0 / 2.0) * delta * (exp(0) + tmpt + num[n - 1]);
	simpson = (1.0 / 3.0) * delta * (exp(0) + tmps + num[n - 1]);
	cout << "trapezoidal is " << trapezoidal << endl;
	cout << "simpson is " << simpson << endl;
	
	
	return 0;
}
