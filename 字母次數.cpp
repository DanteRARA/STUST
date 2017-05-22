
#include <iostream>
using namespace std;

int main(){
	
	char massage[2000] ;
	int times[26] = { 0 };
	int i = 0;
	
	cin.get(massage, 2000);
	
	while (massage[i] != 0 ){
		int k = massage[i] - 'A';
		times[k] = times[k] + 1;
		i++;
	}
	i = 0;
	while (i < 26) {
		if(times[i] != 0){		
		char s = 'A' + i;
		cout << s << times[i] << endl;
		}
		i++;
	}

    return 0;
}
