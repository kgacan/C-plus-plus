#include <iostream>
using namespace std;
void Unos(int niz[][20]) {
	for (int i = 0; i < 20; i++)
	{
		for (int j = 0; j < 20; j++)
		{
			cin >> niz[i][j];
		}
	}
}
void Sort(int niz[][20]) {
	int kolona=3;
	int privremena = 0;
	bool izmjena = false;
	do {
		for (int i = 0; i < 20; i++)
		{
			if (niz[i][kolona] > niz[i + 1][kolona])
			{
				ZamjeniRed(niz, i, i + 1);
				izmjena = true;
			}
		}
	} while (izmjena == true);
}
void ZamjeniRed(int niz[][20],int a,int b) {
	int temp;
	for (int i = 0; i < 20; i++)
	{
		temp = niz[a][i];
		niz[a][i] = niz[b][i];
		niz[b][i] = temp;
	}
}
void main()
{
	int niz[20][20];

}
