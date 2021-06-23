#include <iostream>
#include <vector>

using namespace std;

int *vec;

void dong(int num, int rest, int elementnum) {
	if (rest / vec[elementnum] != 0) {
		num += rest / vec[elementnum];
		rest = rest % vec[elementnum];
		if (rest == 0) {
			cout << num << endl;
			return;
		}
		elementnum--;
		dong(num, rest, elementnum);
	}
	else {
		elementnum--;
		dong(num, rest, elementnum);
	}
}
int main() {
	int N = 0, money = 0;
	cin >> N >> money;
	vec = new int[N];
	for (int i = 0; i < N; i++) {
		int temp = 0;
		cin >> temp;
		vec[i] = temp;
	}
	dong(0, money, N - 1);
	return 0;
}