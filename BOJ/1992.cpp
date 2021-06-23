#include <iostream>
#include <vector>
#include <string>

using namespace std;

int cnt = 0;
int vec[64][64] = { 0, };
string str;
void discriminator(int sy, int ey, int sx, int ex,int x) {
	int standard = vec[sy][sx];
	for (int i = sy; i <= ey; i++) {
		for (int j = sx; j <= ex; j++) {
			if (vec[i][j] != standard) {
				str.push_back('(');
				discriminator(sy, (sy + ey) / 2, sx, (sx + ex) / 2, 0);
				discriminator(sy, (sy + ey) / 2, (sx + ex) / 2 + 1, ex, 0);
				discriminator((sy + ey) / 2 + 1, ey, sx, (sx + ex) / 2, 0);
				//cnt++;
				discriminator((sy + ey) / 2 + 1, ey, (sx + ex) / 2 + 1, ex , 1);
				str.push_back(')');
				return;
			}
		}
	}
	str.push_back(standard + 48);
	/*if (x == 1) {
		for (int i = 0; i < cnt; i++) {
			str.push_back(')');
		}
		cnt = 0;
	}*/

	return;
}

int main() {
	int N = 0;

	cin >> N;
	int i = 0;
	while (1) {
		char x[65];
		cin >> x;
		for (int j = 0; j < N; j++) {
			vec[i][j] = x[j] - '0';
		}
		i++;
		if (i == N) {
			break;
		}
	}


	discriminator(0, N - 1, 0, N - 1, 1);

	cout << str;
	return 0;
}