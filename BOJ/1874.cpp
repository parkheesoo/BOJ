#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

int main() {
	vector <int> a;
	vector <int> b;
	ostringstream oss;
	int NO = 0;
	int N = 0;
	cin >> N;

	for (int i = N; i > 0; i--) {
		b.push_back(i);
	}

	int x = 0;

	for (int i = 0; i < N; i++) {
		cin >> x;
		if (a.size() > 0 && a.back() == x) {
			a.pop_back();
			oss << '-' << endl;
		}
		else if (a.size() > 0 && x < a.back()) {
			NO= 1;
		}
		else {
			do {
				a.push_back(b.back());
				b.pop_back();
				oss << '+' << endl;
			} while (a.back() != x);
			a.pop_back();
			oss << '-' << endl;
		}
		
	}

	if (NO == 1) {
		cout << "NO" << endl;
	}
	else {
		cout << oss.str();
	}

	return 0;
}