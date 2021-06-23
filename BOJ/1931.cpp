#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector <pair<int, int>> vv;

bool comp(pair<int, double> a, pair<int, double> b) {
	if (a.second == b.second) {
		return a.first < b.first;
	} 
	else {
		return a.second < b.second;
	}
}

int main() {
	int cnt = 1;
	int N = 0;
	cin >> N;

	if (N == 1) {
		cout << 1 << endl;
		return 0;
	}
	
	for (int i = 0; i < N; i++) {
		int x1 = 0, x2 = 0;
		cin >> x1 >> x2;
		vv.push_back(make_pair(x1, x2));
	}


	sort(vv.begin(), vv.end(), comp);
	int st = vv[0].first;
	int et = vv[0].second;

	for (int i = 1; i < vv.size(); i++) {
		if (vv[i].first >= et) {
			cnt++;
			st = vv[i].first;
			et = vv[i].second;
		}
	}
	cout << cnt << endl;
	return 0;
}