#include <iostream>
#include <vector>

using namespace std;

int main() {
	int N = 0;
	cin >> N;

	vector <pair <int, int>>vec;
	vec.push_back(make_pair(1, 0));
	vec.push_back(make_pair(0, 1));

	for (int i = 2; i < 41; i++) {
		vec.push_back(make_pair(vec[i - 1].first + vec[i - 2].first, 
			vec[i - 1].second + vec[i - 2].second));
	}

	int num = 0;
	for (int i = 0; i < N; i++) {
		cin >> num;
		cout << vec[num].first << " " << vec[num].second << endl;
	}
	return 0;
}