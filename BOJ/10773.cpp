#include <iostream>
#include <stack>

using namespace std;

int main() {
	stack <int>st;
	int K = 0;
	int sum = 0;
	cin >> K;
	for (int i = 0; i < K; i++) {
		int temp = 0;
		cin >> temp;
		if (temp != 0) {
			st.push(temp);
			sum += temp;
		}
		else{
			sum -= st.top();
			st.pop();
		}
	}
	cout << sum << endl;
	return 0;
}