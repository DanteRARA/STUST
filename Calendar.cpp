#include <iostream> 
using namespace std;

int main(){
	
	int y, m, initDay, monthDay[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
	cout << "�п�J�~�B���" << endl;
	cin >> y >> m;
	if(y % 4 == 0){
		monthDay[1]++;
		initDay = (((y - 1900) / 4) * 366 + ((y - 1900) - ((y - 1900) / 4)) * 365) % 7;
	}else{
		initDay = (((y - 1900) / 4) * 366 + ((y - 1900) - ((y - 1900) / 4)) * 365 - 1) % 7;
	}
	
	cout << "��\t�@\t�G\t�T\t�|\t��\t��\n";
	for(int i = 0; i < m; i++)	initDay += monthDay[i];			
	for(int i = 0; i < (initDay %= 7); i++)	cout << "\t";
	for(int i = 1; i <= monthDay[m - 1]; i++){
		cout << i << "\t";
		initDay++;
		if(initDay >= 7){
			cout << endl;
			initDay = 0;
		}
	}
	
	
	return 0;
}
