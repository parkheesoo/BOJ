#include <iostream>

using namespace std;

int main() {
	int T = 0;
	int x = 0;
	int y = 0;
	int CDistance = 0;
	int ToCDistance = 0;
	int CurrentLocation = 0;
	int cnt = 0;

	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> x >> y;
		CurrentLocation = x;
		while (1) {
			if (cnt == 0) {
				CDistance = 1;
			}
			else {
				if ((ToCDistance + (CDistance + 1) + CurrentLocation) < y) {
					CDistance++;
				}
				else if ((ToCDistance + (CDistance + 1) + CurrentLocation) == y) {
					cnt = (cnt * 2) + 1;
					break;
				}
				else if ((ToCDistance + CurrentLocation) == y) {
					cnt *= 2;
					break;
				}
				else if ((ToCDistance - (CDistance - 1) + CurrentLocation)  == y) {
					cnt = (cnt * 2) - 1;
					break;
				}
			}
			cnt++;
			CurrentLocation += CDistance;
			ToCDistance += CDistance;
			if (CurrentLocation == y) {
				break;
			}
		}
		cout << cnt << endl;
		cnt = 0;
		ToCDistance = 0;
	}

	return 0;
}