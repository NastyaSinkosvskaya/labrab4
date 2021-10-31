#include <iostream>
using namespace std;
int main()
{
	int n[10],res[10];
	int x, y, i = 0;
	while (i < 10)
	{
		cin >> x >> y;
		if (x >= y)res[i] = x;else res[i] = y;
		i++;
	}
	for (i = 0;i < 10;i++)
	{
		cout << res[i] << "\n";
	}
	
}

