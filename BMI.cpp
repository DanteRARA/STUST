#include <iostream>
using namespace std;

int main(){
	
	float height, weight;
	float BMI;
	cin >> height >> weight;
	height *= 0.01;
	BMI = weight / (height * height);
	
	if(height > 300 || weight < 3 || weight > 500){
		cout << "請不要隨便輸入數字，會星爆!" << endl;
	}else{
		BMI *= 10;

	switch((int)BMI){
		case 1 ... 185:
			cout << "體重過輕!!同學星爆需要你多吃一些!";
			break;
		case 186 ...240:
			cout << "正常範圍!!未星爆，屬於正常人";
			break;
		case 241 ... 270:
			cout << "過重!!唔..碰觸到了星爆的軌跡!";
			break;
		case 271 ... 300:
			cout << "輕度肥胖!!同學小心一點，星爆在接近你!";
			break;
		case 301 ... 350:
			cout << "中度肥胖!!同學你快可以星爆了!";
			break;
		case 351 ... 999:
			cout << "重度肥胖!!你現在星爆值已經爆滿了";
			break;
	}
	}
	
	
	return 0;
}
