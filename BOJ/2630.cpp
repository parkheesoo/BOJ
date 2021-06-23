#include <iostream>
#include <vector>

using namespace std;
 
vector <vector <int>> vec;
int bluepart = 0;
int whitepart = 0;

int divide(int ys, int ye, int xs, int xe) {
	int discriminator = vec[ys][xs];

	if (discriminator == 2 || discriminator == 3) {
		return 0;
	}

	int len = (ye - ys + 1) / 2;

	for (int i = ys; i <= ye; i++) {
		for (int j = xs; j <= xe; j++) {
			if (vec[i][j] != discriminator) {
				divide(ys, ys + len - 1, xs, xs + len - 1);
				divide(ys, ys + len - 1, xs + len, xe);
				divide(ys + len, ye, xs, xs + len - 1);
				divide(ys + len, ye, xs + len, xe);
				return 0;
			}
		}
	}
	
	if (discriminator == 0) {
		whitepart++;
	}
	else {
		bluepart++;
	}

	for (int i = ys; i <= ye; i++) {
		for (int j = xs; j <= xe; j++) {
			if (discriminator == 0) {
				vec[i][j] = 2;
			}
			else {
				vec[i][j] = 3;
			}
		}
	}
	return 0;
}

int main() {
	int N = 0;
	cin >> N;
	int num = 0;
	
	vector <int> tempvec;

	//맨 첫번째줄 0으로 넣어주기
	for (int i = 0; i < 9; i++) {
		tempvec.push_back(0);
	}
	vec.push_back(tempvec);
	tempvec.clear();

	int cnt = 0;
	for (int i = 0; i < N; i++) {
		tempvec.push_back(0);
		for (int j = 0; j < N; j++) {
			cin >> num;
			tempvec.push_back(num);
		}
		vec.push_back(tempvec);
		tempvec.clear();
	}

	divide(1, N, 1, N);

	cout << whitepart << endl;
	cout << bluepart << endl;

	return 0;
}