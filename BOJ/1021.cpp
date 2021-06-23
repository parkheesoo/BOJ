#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector <int> vec;
	int N = 0;
	int M = 0;

	cin >> N >> M;
	for (int i = 1; i <= N; i++) {
		vec.push_back(i);
	}

	int num = 0;
	int left = 0;
	int right = 0;
	int direction = 0;
	int cnt = 0;
	for (int i = 0; i < M; i++) {
		cin >> num;
		left = 0;
		right = vec.size() - 1;
		while (1) {
			if (vec[left] == num) {
				direction = 0;
				break;
			}
			else if (vec[right] == num) {
				direction = 1;
				break;
			}
			left++;
			right--;
		}
		if (direction == 0) {
			while (vec.front() != num) {
				vec.push_back(vec.front());
				vec.erase(vec.begin(), vec.begin() + 1);
				cnt++;
			}
		}
		else {
			while (vec.front() != num) {
				vec.insert(vec.begin(), vec.back());
				vec.pop_back();
				cnt++;
			}
		}
		vec.erase(vec.begin(), vec.begin() + 1);
	}

	cout << cnt << endl;
	return 0;
}