#include <iostream>
using namespace std;

void ColSums(double a[5][3], double vec[3])
{
	int i, j;
	for (j = 0; j < 3; j++)
		vec[j] = 0;
	for (j = 0; j < 3; j++) {
		for (i = 0; i < 3; i++)
			vec[j] += a[i][j];
	}
}
int main()
{
	double a[5][3], v[3]; int i, j;
	cout << "Input elements of matrix 5x3:\n";
	for (i = 0; i < 5; i++)
		for (j = 0; j < 3; j++)
			cin >> a[i][j];
	ColSums(a, v);
	cout << "Sums of the first elements of each columns:\n";
	for (j = 0; j < 3; j++)
		cout << "Column " << j + 1 << ": " << v[j] << endl;
	return 0;
}