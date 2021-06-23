#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

void queue_print_file(int fN, int wanttoknowfN) {
	queue <int> q;
	vector <int> vec;
	int num = 0;

	for (int i = 0; i < fN; i++) {
		cin >> num;
		if (i == wanttoknowfN) {
			q.push(num);
			q.push(0);
		} 
		else {
			q.push(num);
		}
		
		vec.push_back(num);
	}
	
	int max = 0;
	int cnt = 0;
	while (1) {
		max = *max_element(vec.begin(), vec.end());
		while (q.front() != max) {
			q.push(q.front());
			q.pop();
		}
		cnt++;
		vec.erase(max_element(vec.begin(), vec.end()));
		q.pop();
		if (q.front() == 0) {
			break;
		}
	}
	cout << cnt << endl;
	return;
}
int main() {
	int TCN = 0;
	int fN = 0;
	int wanttoknowfN = 0;
	
	cin >> TCN;
	for (int i = 0; i < TCN; i++) {
		cin >> fN >> wanttoknowfN;
		queue_print_file(fN, wanttoknowfN);
	}
	
	return 0;
}