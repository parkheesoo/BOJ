#include <iostream>
#include <queue>

using namespace std;

int main() {
	queue <int> q;
	int N = 0;
	int k = 0;
	cin >> N >> k;

	for (int i = 1; i <= N; i++) {
		q.push(i);
	}

	cout << "<";
	while (q.size() != 1) {
		for (int i = 0; i < (k - 1);i++) {
			q.push(q.front());
			q.pop();
		}
		cout << q.front() << ", ";
		q.pop();
	}
	cout << q.front() << ">";

	return 0;
}