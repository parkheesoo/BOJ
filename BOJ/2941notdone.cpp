#include <iostream>
#include <queue>
#include <stack>

using namespace std;

int main() {
	queue <char> que;
	char a = '\n';

	while (1) {
		cin >> a;
		if (a == '\n') {
			break;
		}
		que.push(a);
	}

	return 0;
}

int CroatiaLanNumCnt(queue <char> &que) {
	int sum = 0;
	stack <char> st;

	while (que.empty() == 0) {
		if (que.front() == 'c') {
			st.push(que.front());
			que.pop();
			if (que.front() == '='||que.front() == '-') {
				que.pop();
				sum += 1;
				st.pop();
			}
			else if(que.empty() == 0){
				que.pop();
				sum += 2;
				st.pop();
			}
		}
		else if (que.front() == 'd') {
			st.push(que.front());
			que.pop();
			if (que.front() == 'z') {
				que.pop();
				st.push();
				if (que.front() == '=') {
					que.pop();
				}
			}
			else if (que.front() == '-') {

			}
		}
	}

}