#include <iostream>
using namespace std;
int main() {

	float num[26] = { 0 };
	int i = 0;
	for (i; i < cin.peek() != '\n'; i++) {
		cin >> num[i];
		cout << num[i];
	}

	return 0;
}
