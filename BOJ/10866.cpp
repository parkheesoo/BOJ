#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
	vector <int> vec;
	string str;
	int N = 0;
	int data = 0;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> str;
		if (str == "push_back") {
			cin >> data;
			vec.push_back(data);
		}
		else if (str == "push_front"){
			cin >> data;
			vec.insert(vec.begin(), data);
		}
		else if (str == "pop_front") {
			if (vec.size() == 0) {
				cout << -1 << '\n';
			}
			else {
				cout << vec.front() << '\n';
				vec.erase(vec.begin(), vec.begin() + 1);
			}
		}
		else if (str == "pop_back") {
			if (vec.size() == 0) {
				cout << -1 << '\n';
			}
			else {
				cout << vec.back() << '\n';
				vec.pop_back();
			}
		}
		else if (str == "size") {
			cout << vec.size() << '\n';
		}
		else if (str == "empty") {
			cout << vec.empty() << '\n';
		}
		else if (str == "front") {
			if (vec.size() == 0) {
				cout << -1 << '\n';
			}
			else {
				cout << vec.front() << '\n';
			}
		}
		else if (str == "back") {
			if (vec.size() == 0) {
				cout << -1 << '\n';
			}
			else {
				cout << vec.back() << '\n';
			}
		}

	}
	return 0;
}