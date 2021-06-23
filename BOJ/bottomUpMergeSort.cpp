#include <iostream>

using namespace std;

#define N 8
int arr[N] = { 0, };
int sortedarr[N] = { 0, };

void merge(int left,int mid, int right) {
	int i = left;
	int j = mid + 1;
	int k = left;

	//작은 순서대로 정렬된배열에 삽입
	while (i <= mid && j <= right) {
		if (arr[i] < arr[j]) {
			sortedarr[k++] = arr[i++];
		}
		else {
			sortedarr[k++] = arr[j++];
		}
	}

	//남은 데이터도 삽입
	//i가 먼저 끝났을경우 다른 부분의 배열남은 부분을 삽입
	if (i > mid) {
		for (int t = j; t <= right; t++) {
			sortedarr[k++] = arr[t];
		}
	}
	// j가 먼저 끝났을경우 다른 부분의 배열 남은 부분을 삽입
	else {
		for (int t = i; t <= right; t++) {
			sortedarr[k++] = arr[t];
		}
	}

	//정렬된 부분을 새롭게 다시 넣어주는 부분
	for (int i = left; i <= right; i++) {
		arr[i] = sortedarr[i];
	}
}

int main() {
	for (int i = 0; i < N; i++) {
		int x = 0;
		cin >> x;
		arr[i] = x;
	}

	int left = 0;
	int right = 1;
	int x = 2;
	int mid = 0;
	//한개씩 쪼개서 넣어주기
	//그다음 정렬된 두개씩 넣어주기
	//그다음 정렬된 네개씩 넣어주기 
	//재귀적 방법 말고 반복문 while사용
	while (x < N * 2) {
		merge(left, mid, right);
		left = left + x;
		right = right + x;
		
		if (right > N - 1) {
			left = 0;
			right = x * 2 -1;
			x *= 2;
		}
		mid = (left + right) / 2;
	}

	for (int i = 0; i < N; i++) {
		cout << sortedarr[i] << " ";
	}

	return 0;
}