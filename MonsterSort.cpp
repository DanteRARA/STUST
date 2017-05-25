#include <iostream>
using namespace std;

class Monster{
	public:
		char name[50];
		int id;
		float attack, defense;
		void set(){
			cin >> name >> id >> attack >> defense;
		}
		void output(){
			cout << name << " ";
		}
		bool bigger(Monster o){
			if(attack > o.attack){
				return true;
			}else if(attack == o.attack && defense > o.defense){
				return true;
			}else if(attack == o.attack && defense == o.defense && id > o.id){
				return true;
			}else{
				return false;
			}
		}
};



int main(){
	int n;
	cin >> n;
	Monster *monster;
	monster = new Monster[n];
	for(int i = 0; i < n; i++){
		monster[i].set();
	}
	for(int i = 0; i < n; i++){
		for(int j = i + 1; j < n; j++){
			if(monster[j].bigger(monster[i])){
				Monster tmp = monster[i];
				monster[i] = monster[j];
				monster[j] = tmp;
			}
		}
	}
	for(int i = 0; i < n; i++) monster[i].output();
	return 0;
}
