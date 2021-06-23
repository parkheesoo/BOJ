#include <iostream>
#include <string>
#include <vector>

using namespace std;

int N1UA(const string &st){
	vector <int> vec(26);

	int max = 0;
	int x = 0;
	char a = '\n';
	int N = 0;
	int maxsize = 0;

	for (int i = 0; i < st.size(); i++) {
		a = st[i];
		x = a;
		if (x >= 97) {
			vec[x - 97]++;
		}
		else {
			vec[x - 65]++;
		}
	}

	max = 0;
	maxsize = vec[0];

	for (int i = 0; i < vec.size(); i++) {
		if (vec[i] == maxsize) {
			if (i != 0) {
				N++;
			}
		}
		else if (vec[i] > maxsize) {
			maxsize = vec[i];
			max = i;
			N = 0;
		}
	}

	if (N == 0) {
		char a = max + 65;
		cout << a << endl;
	}
	else{
		cout << '?' << endl;
	}

	return 0;
}

int main() {
	string str;

	cin >> str;

	N1UA(str);

	return 0;
}