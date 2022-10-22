#include <iostream>
#include <math.h>
using namespace std;
// this program gets n from input and outputs the n rows of pascal's triangle

int factorial(int n)
{
	return ( n == 0) ? 1 : n * factorial(n - 1);
}

int main()
{
	int n;
	cin >> n;
	int i = 0;
	while(i < n)
	{
		for (int j = 0; j < i+1; j++)
		{
			cout << (factorial(i) / (factorial(j) * factorial(i - j))) << " ";
		}
		cout << endl;
		i++;
	}

	return 0;
}