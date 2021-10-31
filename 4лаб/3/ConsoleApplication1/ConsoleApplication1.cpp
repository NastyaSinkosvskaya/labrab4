#include <iostream>
using namespace std;
int main()
{
    double res,start = -1,end = 3,i,x,h = 0.1;
    for (i = start;i < end;i += h)
    {
        x = i;
            if (x <= 0)res = pow(tan(5 - pow(x,3)), 2);
            else if (0 < x && x <= 2)res = pow(x, 2) * (1 + 3 * x);
            else if (x > 2) res = sin(pow(x,7));

        cout << res << "\n";
    }
}