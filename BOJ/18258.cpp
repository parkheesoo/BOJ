#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main() {
    cin.tie(0);
    cin.sync_with_stdio(0);
	int N = 0;
	int x = 0;
	string str;
	queue <int> vec;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> str;
		if (str == "push") {
			cin >> x;
			vec.push(x);
		}
		else if (str == "pop") {
			if (vec.empty() == 1) {
				cout << -1 << endl;
			}
			else {
				cout << vec.front() << endl;
				vec.pop();
			}
		}
		else if (str == "size") {
			cout << vec.size() << endl;
		}
		else if (str == "empty") {
			cout << vec.empty() << endl;
		}
		else if (str == "front") {
			if(vec.empty() != 1){
				cout << vec.front() << endl;
			}
			else {
				cout << -1 << endl;
			}
		}
		else if (str == "back") {
			if (vec.empty() != 1) {
				cout << vec.back() << endl;
			}
			else {
				cout << -1 << endl;
			}
		}
	}

	return 0;
}