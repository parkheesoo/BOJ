#include <iostream>
#include <string>
#include <stack>
#include <vector>

using namespace std;

int main() {
	vector<string> v; 
	string str; 
	vector <int> vec;
	vector <int>sta;

	while (1) {
		getline(cin, str);
		if (str == ".") {
			break;
		}
		v.push_back(str);
	}

	/*for (int i = 0; i < v.size(); i++) {
		for (int j = 0; j < v[i].size(); j++) {
			cout << v[i][j];
		}
		cout << endl;
	}*/

	for (int i = 0; i < v.size(); i++) {
		for (int j = 0; j < v[i].size(); j++) {
			if (v[i][j] == '(') {
				sta.push_back(1);
			}
			else if (v[i][j] == '[') {
				sta.push_back(2);
			}
			else if (v[i][j] == ')') {
				if (sta.size() == 0) {
					sta.push_back(1);
					break;
				}
				else if(sta.back() == 1){
					sta.pop_back();
				}
				else if (sta.back() == 2) {
					break;
				}
			}
			else if (v[i][j] == ']') {
				if (sta.size() == 0) {
					sta.push_back(1);
					break;
				}
				else if(sta.back() == 2){
					sta.pop_back();
				}
				else if (sta.back() == 1) {
					break;
				}
			}
		}
		if (sta.size() == 0) {
			vec.push_back(1);
		}
		else {
			vec.push_back(0);
		}

		while (!sta.empty()) {
			sta.pop_back();
		}
	}

	for (int i = 0; i < vec.size(); i++) {
		if (vec[i] == 1) {
			cout << "yes" << endl;
		}
		else {
			cout << "no" << endl;
		}
	}
	return 0;
}