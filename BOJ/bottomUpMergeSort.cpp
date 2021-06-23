#include <iostream>

using namespace std;

#define N 8
int arr[N] = { 0, };
int sortedarr[N] = { 0, };

void merge(int left,int mid, int right) {
	int i = left;
	int j = mid + 1;
	int k = left;

	//���� ������� ���ĵȹ迭�� ����
	while (i <= mid && j <= right) {
		if (arr[i] < arr[j]) {
			sortedarr[k++] = arr[i++];
		}
		else {
			sortedarr[k++] = arr[j++];
		}
	}

	//���� �����͵� ����
	//i�� ���� ��������� �ٸ� �κ��� �迭���� �κ��� ����
	if (i > mid) {
		for (int t = j; t <= right; t++) {
			sortedarr[k++] = arr[t];
		}
	}
	// j�� ���� ��������� �ٸ� �κ��� �迭 ���� �κ��� ����
	else {
		for (int t = i; t <= right; t++) {
			sortedarr[k++] = arr[t];
		}
	}

	//���ĵ� �κ��� ���Ӱ� �ٽ� �־��ִ� �κ�
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
	//�Ѱ��� �ɰ��� �־��ֱ�
	//�״��� ���ĵ� �ΰ��� �־��ֱ�
	//�״��� ���ĵ� �װ��� �־��ֱ� 
	//����� ��� ���� �ݺ��� while���
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