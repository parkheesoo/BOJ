#include <iostream>
#include <vector>

using namespace std;

int firstr = 0;
int arr[1001] = { 0, };
vector <pair<int, int>> vec;
void primenumbermaker() {
	for (int i = 2; i <= 500; i++) {
		if (arr[i] != 1) {
			for (int j = i * 2; j <= 1000; j += i) {
				arr[j] = 1;
			}
		}
	}
	return;
}

void number(int r) {
	int temp1 = firstr;
	int temp2 = r;
	int smallnum = firstr < r ? firstr : r;
	int i = 0;
	while (1) {
		for (i = 2; i <= smallnum; i++) {
			if (arr[i] == 0 && temp1 % i == 0 && temp2 % i == 0) {
				temp1 /= i;
				temp2 /= i;
				break;
			}
		}
		if (i == smallnum + 1) {
			vec.push_back(make_pair(temp1, temp2));
			break;
		}
	}
	return;
}

int main() {
	int N = 0;//링의 개수
	int r = 0;
	cin >> N;
	cin >> r;
	firstr = r;
	primenumbermaker();
	for (int i = 1; i < N; i++) {
		cin >> r;
		number(r);
	}

	for (int i = 0; i < vec.size(); i++) {
		cout << vec[i].first << '/' << vec[i].second << endl;
	}
	return 0;
}