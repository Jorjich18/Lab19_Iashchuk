#include <iostream>
using namespace std;

void zamena(double a[4][4])
{
	double max = a[0][0];
	int i, j, imax, jmax;
	for (i = 0; i < 4; i++)
		for (j = 0; j < 4; j++)
			if (a[i][j] > max) {
				max = a[i][j];
				imax = i; jmax = j;
			}
	bool stop = false;
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			if (i == imax && j == jmax) {
				stop = true;
				break;
			}
			a[i][j] = 0;
		}
	}
}

int main()
{
	double a[4][4]; int i, j;
	cout << "Input elements of matrix 4x4:\n";
	for (i = 0; i < 4; i++)
		for (j = 0; j < 4; j++)
			cin >> a[i][j];
	zamena(a);
	cout << "Changed matrix:" << endl;
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++)
			cout << a[i][j] << "\t";
		cout << endl;
	}
	return 0;
}