#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector <pair<string, int>> vec;

int kindofclothes() {
	string str;
	string realstr;
	cin >> str >> realstr;
	if (vec.size() == 0) {
		vec.push_back(make_pair(realstr, 0));
	}
	else {
		for (int i = 0; i < vec.size(); i++) {
			if (vec[i].first == realstr) {
				vec[i].second++;
			}
			break;
		}
	}
}

int clothes() {
	int num = 0;
	cin >> num;

	for (int i = 0; i < num; i++) {
		kindofclothes();
	}

	int mul = 1;

	for (int i = 0; i < vec.size(); i++) {
		mul *= vec[i].second;
	}
	cout << num + mul << endl;
}

int main() {
	int T = 0;
	cin >> T;

	for (int i = 0; i < T; i++) {
		clothes();
	}

	return 0;
}