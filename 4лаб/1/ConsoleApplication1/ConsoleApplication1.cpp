#include<iostream>
using namespace std;
int main()
{
	double sum;
	int a, n, i;
	sum = 1;
	n = 3;
	for (a = 1;a < 8;a++)
	{
		for (i = 1;i < a - 1;i++)
		{
			n = n * 3;
			sum = sum + 1 / n;
			n = 3;
		}
	}
		cout << sum<<"\n";
	
}