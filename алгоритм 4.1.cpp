
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int k,n ;
	double S;
	cout << "n = "; cin >> n;
	cout << "k = "; cin >> k;
	
	S = 0;
	k = n;
	while (k <= 25)
	{
		S *= sqrt(1+(n /1.*k));
		k++;

	}
	cout << S << endl;
	//jjjjjjjjjjjjjjjjjjjjjjjjj
		S = 0;
		k = n;
	do {
		S *= sqrt(1 + (n / 1. * k));
		k++;
	} while (k <= 25);
	cout << S << endl;
	//ddddddddddddddddddddddddo
	S = 0;
	for (k = n; k <= 25;k++)
	{
		S *= sqrt(1 + (n / 1. * k));
	}
	cout << S << endl;
	//iiiiiiiiiiiiiiiiiiiiiiiii
	S = 0;
	for (k = n; k >= 25; k--)
	{
		S *= sqrt(1 + (n / 1. * k));
	}
	cout << S << endl;
	return 0;
}
