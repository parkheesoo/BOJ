#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
	int N = 0;
	double sum = 0;
	int tempnum = 0;

	vector <int> vec;
	int arr[8001] = { 0, };

	int smallestnum = 0;
	int biggestnum = 0;

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> tempnum;
		if (i == 0) {
			smallestnum = biggestnum = tempnum;
		}
		else {
			if (tempnum < smallestnum) {
				smallestnum = tempnum;
			}
			
			if (tempnum > biggestnum) {
				biggestnum = tempnum;
			}
		}
		vec.push_back(tempnum);
		arr[tempnum + 4000]++;
		sum += tempnum;
	}

	//1
	cout << round(sum / N) << endl;

	//2
	sort(vec.begin(), vec.end());
	int centernum = 0;
	if (N % 2 == 0) {
		centernum = (vec[N / 2] + vec[N / 2 - 1]) / 2;
	}
	else {
		centernum = vec[((N + 1) / 2) - 1];
	}
	cout << centernum << endl;
	
	//3
	int amountbignum = arr[0];
	int amountbignumnum = 0;
	int count = 0;
	for (int i = 0; i < 8001; i++) {
		if (arr[i] > amountbignum) {
			amountbignum = arr[i];
			amountbignumnum = i;
			count = 0;
		}


		if (arr[i] == amountbignum) {
			count++;
			if (count == 2) {
				count++;
				amountbignumnum = i;
			}
		}
	}
	cout << amountbignumnum - 4000 << endl;

	//4
	cout << biggestnum - smallestnum << endl;

	return 0;
}