
#include <iostream>
using namespace std;

int main(){
	
	char massage[2000] ;
	int Big_times[26] = {0};
	int small_times[26] = {0};
	int i, j = 0;
	cin.get(massage, 2000);
		
	while (massage[i] != 0 ){
		int k = massage[i] - 'A';
		
		if(k < 26){
			Big_times[k] = Big_times[k] + 1;
		}
		if(k >= 32){
			small_times[k-32] = small_times[k-32] + 1;
			j++;
		}			
		i++;
	}
	
	i = 0;
	while (i < 26) {
		if(Big_times[i] != 0){		
			char s = 'A' + i;
			cout << s << Big_times[i] << endl;
		}
		i++;
	}
	i = 0;
	while(i < 26){
		if(small_times[i] != 0){
			char t = 'a' + i;
			cout << t << small_times[i] << endl;
		}		
		i++;
	}


    return 0;
}
