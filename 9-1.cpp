#include <iostream>
#include <string>
using namespace std;

int koddo(char oto){
	if(oto == 'C') return 0;
	if(oto == 'D') return 2;
	if(oto == 'E') return 4;
	if(oto == 'F') return 5;
	if(oto == 'G') return 7;
	if(oto == 'A') return 9;
	if(oto == 'B') return 11;
}

int main(){
	int n;
	cin >> n;
	
	string oto[24] = {"C", "C#", "D", "D#", "E", "F", "F#", "G", "G#", "A", "A#", "B",
	"C", "C#", "D", "D#", "E", "F", "F#", "G", "G#", "A", "A#", "B"};
	for(int i = 0; i < n; i++){
		char q[2];
		cin >> q;
		if(q[1] == 'm'){
			cout << oto[koddo(q[0])] << " " <<
			oto[koddo(q[0]) + 3] << " " <<
			oto[koddo(q[0]) + 3 + 4] << endl;
		}else{
			cout << oto[koddo(q[0])] << " " <<
			oto[koddo(q[0]) + 4] << " " <<
			oto[koddo(q[0]) + 4 + 3] << endl;
		}
	}
		
	return 0;
}
