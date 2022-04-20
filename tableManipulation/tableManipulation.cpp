#include <iostream>
using namespace std;
// description: in this program a n*n table is given.
// each cell in the table is either black or white.
//Three different operation can be done on the table:
//1. turning the table clockwise for 90 degree 
//2. mirroring the table with respect to the middle horizontal line
//3. mirroring the table with respect to the middle vertical line

void turnninetydeg(string* cTable, int n) { // consider each iteration in the group of 4(since it is a symmetric table)
	char cTemp;
	int limit = n / 2;//we first do iteration of all teh elemnts in the first row then we go on the inside which means only half of the rows
	//will be gone through, the rest are manipulated through the previous steps.
	for (int i = 0; i < limit; i++)
	{
		for (int j = i; j < n-i-1; j++)//iteration is clock wise
		{
			cTemp = cTable[i][j];
			cTable[i][j] = cTable[n - j - 1][i];
			cTable[n - j - 1][i] = cTable[n - i - 1][n - j - 1];
			cTable[n - i - 1][n - j - 1] = cTable[j][n - i - 1];
			cTable[j][n - i - 1] = cTemp;
		}
	}
	
}
void mirrorHorizontally(string* cTable, int n) {//function that mirrors horizontally
	string sTemp = "";
	int limit = n / 2;
	for (int i = 0; i < limit; i++)
	{
		sTemp = cTable[i];
		cTable[i] = cTable[n - i - 1];
		cTable[n - i - 1] = sTemp;
	}
}
void mirrorVertically(string* cTable, int n) {//function that mirrors vertically
	char cTemp = ' ';
	int limit = n / 2;
	for (int i = 0; i < limit; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cTemp = cTable[j][i];
			cTable[j][i] = cTable[j][n-i-1];
			cTable[j][n - i - 1] = cTemp;
		}
	}
}
int main()
{
	int n = 0;// number of rows and columns
	cin >> n;

	string* cTable = new string[n];
	for (int i = 0; i < n; i++)// inputting the table
	{
		cin >> cTable[i];
	}
	int q = 0;// number of operations that will be done on the table Max = 20;
	cin >> q;

	string cOperation = "";

	for (int i = 0; i < q; i++)
	{
		cin >> cOperation;
		if (cOperation == "90")
		{
			turnninetydeg(cTable,n);
		}
		else if (cOperation == "H")
		{
			mirrorHorizontally(cTable,n);
		}
		else if (cOperation == "V")
		{
			mirrorVertically(cTable,n);
		}
	}

	for (int i = 0; i < n; i++)
	{
		cout << cTable[i] << endl;
	}

	delete[] cTable;
	return 0;
}