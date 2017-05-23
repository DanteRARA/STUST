#include <iostream>
#include <math.h>
using namespace std;

double trapezoidal(double *data){
	double tmp;
	for(int i = 1; i < 26; i++) tmp += 2.0 * data[i];
	double trapezoidal = ((1.0 / 2.0) * 1.0 * (data[0] + tmp + data[26])) * pow((40.0 / 3.0), 2);
	return trapezoidal;
}
double simpson(double *data){
	double tmp;
	for(int i = 1; i < 26; i++){
		if( i % 2 != 0){
			tmp += 4 * data[i];
		}else{
			tmp += 2 * data[i];
		}
	}
	double simpson = ((1.0 / 3.0) * 1.0 * (data[0] + tmp + data[26])) * pow((40.0 / 3.0), 2);
	return simpson;
}

int main(){
	// n = 27;  delta X = 1;  x is cm, 1.5cm = 20km ~ 1 : 40/3
	double data1[] = {3.2, 2.0, 0.0, 0.8, 1.3, 1.2, 0.8, 1.5, 1.7, 2.4, 2.6, 2.8, 3.1, 3.3, 3.6, 3.8, 4.1, 4.3, 4.8, 
	5.3, 5.9, 7.1, 7.5, 7.9, 8.1, 8.1, 8.2, 8.5};
	double data2[] = {3.2, 4.5, 7.1, 7.5, 7.9, 9.0, 9.5, 10.2, 10.5, 11.2, 11.9, 12.4, 13.1, 13.5, 13.6, 13.6, 13.9,
	14.2, 14.0, 13.5, 13.1, 12.9, 12.4, 10.9, 10.0, 9.6, 9.7, 8.5};
	double dataF[27] = {0.0};
	for(int i = 0; i < 27; i++){
		dataF[i] = data2[i] - data1[i];
	}
	cout << trapezoidal(dataF) << endl;
	cout << simpson(dataF);
	
	
	
		
	return 0;
} 
