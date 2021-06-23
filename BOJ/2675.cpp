#include <iostream>
#include <string>

using namespace std;

void IteratorString(const string &str, int R) {
	for (int i = 0; i < str.size(); i++) {
		for (int j = 0; j < R; j++) {
			cout << str[i];
		}
	}
	cout << endl;
	cin.clear();
}
int main() {
	int T = 0;
	int R = 0;
	string st;

	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> R >> st;
		   IteratorString(st, R);
	}
}