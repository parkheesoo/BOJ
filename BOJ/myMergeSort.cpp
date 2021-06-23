#include <iostream>

using namespace std;

int N = 8;
//함수에서 접근이 쉽도록 전역변수로 선언해주었다.
int sortedarr[8];

void merge(int arr[], int left, int mid, int right) {
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

void partition(int arr[], int left, int right) {
	//크기가 1이면 정렬된 것으로 보기 때문에 크기가 1보다
	//큰경우에만 분할해준다.
	if (left < right) {
		int mid = (left + right) / 2;
		//중앙을 기준으로 왼쪽으로 분할
		partition(arr, left, mid); 
		//중앙을 기준으로 오른쪽으로 분할
		partition(arr, mid + 1, right); 
		//정렬된 두개의 배열을 병합
		merge(arr, left, mid, right); 
	}
}

int main() {
	int arr[8] = { 0, };
	int x = 0;
	for (int i = 0; i < N; i++) {
		cin >> x;
		arr[i] = x;
	}

	partition(arr, 0, N - 1);
	//정렬된 배열 출력
	for (int i = 0; i < N; i++) { 
		cout << sortedarr[i] << " ";
	}
}