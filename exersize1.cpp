#include <iostream>
using namespace std;

void MinMax(int a[3][5], int &imin, int &imax, int &jmin, int &jmax)
{
	imin = jmin = 0;
	imax = jmax = 0;
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 5; j++) {
			if (a[i][j] < a[imin][jmin]) {
				imin = i; jmin = j;
			}
			if (a[i][j] > a[imax][jmax]) {
				imax = i; jmax = j;
			}
		}
}

int main()
{
	int a[3][5], i, j, i_min, i_max, j_min, j_max;
	cout << "Input elements of matrix 3x5:\n";
	for (i = 0; i < 3; i++)
		for (j = 0; j < 5; j++)
			cin >> a[i][j];
	MinMax(a, i_min, i_max, j_min, j_max);
	cout << "Minimal: " << i_min+1 << " row and " << j_min+1 << " column" << endl;
	cout << "Maximal: " << i_max+1 << " row and " << j_max+1 << " column" << endl;
	return 0;
}