#include <iostream> 
using namespace std;

int main(){
	
	int y, m, initDay, monthDay[12] = {31,28,31,30,31,30,31,31,30,31,30,31};	//每月份的天數 
	cout << "請輸入年、月份" << endl;
	cin >> y >> m;
	
	if(y % 4 == 0){		//判斷是否閏年 
		monthDay[1]++;	//是閏年則在2月++ 
		initDay = (((y - 1900) / 4) * 366 + ((y - 1900) - ((y - 1900) / 4)) * 365) % 7; //計算該年的初始星期 
	}else{
		initDay = (((y - 1900) / 4) * 366 + ((y - 1900) - ((y - 1900) / 4)) * 365 + 1) % 7;
	}
	
	cout << "日\t一\t二\t三\t四\t五\t六\n";
	for(int i = 0; i < m - 1; i++)	initDay += monthDay[i];		//月份日數的累加 
	for(int i = 0; i < (initDay %= 7); i++)	cout << "\t";		//計算往後移幾日 
	for(int i = 1; i <= monthDay[m - 1]; i++){					//開始寫入日期 
		cout << i << "\t";
		initDay++;
		if(initDay >= 7){		//每七天換行 
			cout << endl;
			initDay = 0;
		}
	}
	
	return 0;
}
