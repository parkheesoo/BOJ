#include <iostream>
#include <vector>
#include <string>

using namespace std;

int R(int direction) {
	if (direction == 0) {
		return 1;
	}
	else {
		return 0;
	}
}

int main() {
	int T = 0;
	string RorD;
	string num;
	int n = 0;
	int temp = 0;
	int arrnum = 0;
	int direction = 0;
	int k = 0;
	vector <int> vec;
	cin >> T;
	int bre = 0;
	for (int i = 0; i < T; i++) {
		cin.ignore();
		getline(cin, RorD);
		cin.ignore();
		cin >> arrnum;
		cin.clear();
		getline(cin, num);
		while (num[k] != ']') {
			if (num[k] != ',' && num[k] != '[') {
				if (num[k - 1] != ',' && num[k - 1] != '[') {
					temp
					vec[vec.size() - 1] = 
				}
				temp = num[k] - '0';
				vec.push_back(temp);
			}
			k++;
		}
		k = 0;
		for (int j = 0;j < RorD.size(); j++) {
			if (RorD[j] == 'R') {
				direction = R(direction);
			}
			else {
				if (vec.size() == 0) {
					cout << "error" << endl;
					bre = 1;
					break;
				}

				if (direction == 0) {
					vec.erase(vec.begin(), vec.begin() + 1);
				}
				else {
					vec.pop_back();
				}
			}
		}
		
		if (bre != 1) {
			cout << '[';
			if (direction == 0) {
				for (int j = 0; j < vec.size() - 1; j++) {
					cout << vec[j] << ",";
				}
				cout << vec.back() << ']' << endl;
			}
			else {
				for (int j = vec.size() - 1; j > 0; j--) {
					cout << vec[j] << ",";
				}
				cout << vec.front() << ']' << endl;
			}
		}
		bre = 0;
		direction = 0;
		vec.clear();
	}
	
	return 0;
}