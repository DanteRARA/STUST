#include <iostream>
using namespace std;

int main(){
	
	float height, weight;
	float BMI;
	cin >> height >> weight;
	height *= 0.01;
	BMI = weight / (height * height);
	
	if(height > 300 || weight < 3 || weight > 500){
		cout << "�Ф��n�H�K��J�Ʀr�A�|�P�z!" << endl;
	}else{
		BMI *= 10;

	switch((int)BMI){
		case 1 ... 185:
			cout << "�魫�L��!!�P�ǬP�z�ݭn�A�h�Y�@��!";
			break;
		case 186 ...240:
			cout << "���`�d��!!���P�z�A�ݩ󥿱`�H";
			break;
		case 241 ... 270:
			cout << "�L��!!��..�IĲ��F�P�z���y��!";
			break;
		case 271 ... 300:
			cout << "���תέD!!�P�Ǥp�ߤ@�I�A�P�z�b����A!";
			break;
		case 301 ... 350:
			cout << "���תέD!!�P�ǧA�֥i�H�P�z�F!";
			break;
		case 351 ... 999:
			cout << "���תέD!!�A�{�b�P�z�Ȥw�g�z���F";
			break;
	}
	}
	
	
	return 0;
}
