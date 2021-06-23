#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void partition(vector <int>& arr, int left, int right, int& i, int& j)
{
	i = left - 1, j = right;
	int p = left - 1, q = right;
	int v = arr[right];

	while (true)
	{
		while (arr[++i] < v);
		while (v < arr[--j])
		{
			if (j == left)
				break;
		}
		if (i >= j)
			break;
		swap(arr[i], arr[j]);
		if (arr[i] == v)
			swap(arr[++p], arr[i]);
		if (arr[j] == v)
			swap(arr[j], arr[--q]);
	}

	swap(arr[i], arr[right]);
	j = i - 1;

	for (int k = left; k < p; k++, j--)
		swap(arr[k], arr[j]);
	i = i + 1;
	for (int k = right - 1; k > q; k--, i++)
		swap(arr[i], arr[k]);
}

void quicksort(vector <int> &arr, int left, int right)
{
	if (right <= left)
		return;
	int i = 0, j = 0;

	partition(arr, left, right, i, j);
	quicksort(arr, left, j);
	quicksort(arr, i, right);
}

int main()
{
	int n;
	cout << "Enter the size::" << endl;
	cin >> n;

	vector <int> arr(n);
	cout << "Enter the elements::" << endl;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	cout << endl << "The stored values::" << endl;

	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;
	quicksort(arr, 0, n - 1);
	cout << endl << "The sorted values::" << endl;

	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;
	return 0;
}