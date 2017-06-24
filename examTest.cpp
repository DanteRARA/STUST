#include<iostream>
using namespace std;

int sepNumber(int num, int i){
	int sepNum[4] = {0}, sum = 0, digit = 1000;
	
	for(int j = 0; j < 4; j ++){
		sepNum[j] = (num / digit) % 10;
		digit /= 10;
		// test
//		cout << sepNum[j] << '\t';
		sum += sepNum[j];
	}
	cout << endl;
	return sum;
}

int main(){
	
	int times, *num, sum[4] = {0};
	cin >> times;
	num = new int [times];
	
	for(int i = 0; i < times; i++){
		cin >> num[i];
	}
	
	for(int i = 0; i < times; i++){
		int tmp = num[i];
		sum[i] = sepNumber(tmp, i);
	}
	
	for(int i = 0 ; i < times; i++){
		for(int j = i + 1; j < times; j++){
			if(sum[i] > sum[j]){
				int tmp = num[j];
				num[j] = num[i];
				num[i] = tmp;
			}else if(sum[i] == sum[j] && num[i] > num[j]){
				int tmp = num[j];
				num[j] = num[i];
				num[i] = tmp;
			}
		}
	}
	for(int i = 0; i < times; i++) cout << num[i] << " ";	
	
	
	return 0;
}
