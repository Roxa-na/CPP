#include <iostream>
using namespace std;

const int nSize = 101;

int main()
{

	int nArray[nSize][nSize];
	int nNum1 = 0;
	int nNum2 = 0;
	cin >> nNum1 >> nNum2;
	for (int i = 0; i < nNum1; i++)
	{
		for (int j = 0; j < nNum2; j++)
		{
			cin >> nArray[i][j];
		}
	}
	int nSum = 0;
	for (int i = 1; i < nNum1-1; i++)
	{
		for (int j = 1; j < nNum2-1; j++)
		{
			if ( ((nArray[i][j] > nArray[i-1][j])&&(nArray[i][j] > nArray[i+1][j])&&(nArray[i][j] < nArray[i][j-1])&&(nArray[i][j] < nArray[i][j+1])) || ((nArray[i][j] < nArray[i+1][j]) && (nArray[i][j] < nArray[i-1][j]) && (nArray[i][j] > nArray[i][j+1]) && (nArray[i][j] > nArray[i][j-1])) )
			{
				nSum++;
			}
		}
	}
	cout << nSum;
	return 0;
}