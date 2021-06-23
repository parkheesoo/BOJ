#include <iostream>
#include <vector>

using namespace std;

int factorial(int num)
{
    int result = 1;
  
    for (int i = 1; i <= num; ++i)
    {
        result = result * i;
    }
    return result;
}

int main() {
	int N = 0, M = 0;
	cin >> N >> M;

    vector <vector <int>> vec(M, vector <int>(factorial(N)));

    

	return 0;
}