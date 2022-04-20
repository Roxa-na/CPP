//The code below gets maximum 100 by 100 matrix and finds the number of cells, 
//where the number in the cell is larger than the numbers located in the upper and lower cell,
//and at the same time the number is smaller than the numbers located st the left and right of the cell
// or vice versa
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
