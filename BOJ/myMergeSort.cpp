#include <iostream>

using namespace std;

int N = 8;
//�Լ����� ������ ������ ���������� �������־���.
int sortedarr[8];

void merge(int arr[], int left, int mid, int right) {
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

void partition(int arr[], int left, int right) {
	//ũ�Ⱑ 1�̸� ���ĵ� ������ ���� ������ ũ�Ⱑ 1����
	//ū��쿡�� �������ش�.
	if (left < right) {
		int mid = (left + right) / 2;
		//�߾��� �������� �������� ����
		partition(arr, left, mid); 
		//�߾��� �������� ���������� ����
		partition(arr, mid + 1, right); 
		//���ĵ� �ΰ��� �迭�� ����
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
	//���ĵ� �迭 ���
	for (int i = 0; i < N; i++) { 
		cout << sortedarr[i] << " ";
	}
}