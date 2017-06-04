#include <iostream>
using namespace std;

int main(){
	
	int y, m, d, dOweek,
	monthD[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	cin >> y >> m >> d;
	
	for(int i = y; i < 2100; i++){
		
		if(i == 1900) monthD[1] = 28;
		if(i % 4 == 0 && i % 100 != 0 || i % 400 == 0){			
			monthD[1] = 29;
			dOweek = (((y - 1900) / 4) * 366 + ((y - 1900) - ((y - 1900) / 4)) * 365) % 7;
		}else{
			monthD[1] = 28;
			dOweek = (((y - 1900) / 4) * 366 + ((y - 1900) - ((y - 1900) / 4)) * 365 + 1) % 7;
		}
		
		if(i >= 1900){
			for(int j = 0; j < 12; j++){
				dOweek += monthD[j];
				if(j == (m - 1)){
					dOweek %= 7;
					for(int k = 1; k <= monthD[m - 1]; k++){
						dOweek++;
						if(dOweek == 7) dOweek = 0;
						if(dOweek == 0 && k == d)
							cout << i << " " << m << " " << d << " is Sunday" << endl;
					}
				}
			}
		}else if(i < 1900){
			for(int j = 11; j >= 0; j--){
				dOweek += monthD[j];
				if(j == (m + 1)){
					dOweek %= 7;
					for(int k = monthD[m - 1]; k >= 1; k--){
						dOweek--;
						if(dOweek == 0) dOweek = 7;
						if(dOweek == 0 && k == d)
							cout << i << " " << m << " " << d << " is Sunday" << endl;
					}
				}
			}
		}
		
	}
	
	
	
	
	
	
	
	
	
	return 0;
}
