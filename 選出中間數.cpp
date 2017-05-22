#include <iostream> 
#include <iomanip>
using namespace std;

int main(){
	
	int size, tmp;
	float num[10] = {0};
	cin >> size;
	
	for(int h = 0; h < size; h++){
		for(int i = 0; i < 10; i++){
			cin >> num[i];
		}
		for(int j = 0; j < 10; j++){
			for(int k = 1; k < 9; k++){
				if(num[j] < num[j-1]){
					tmp = num[j];
					num[j] = num[j-1];
					num[j-1] = tmp;
				}
			}
		
		}
		for(int l = 0; l < 10; l++){
			cout << num[l] << " ";
		}
	}
	
	
	return 0;
}
