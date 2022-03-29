#include <iostream>

using namespace std;
int main()
{
    int t, j, i;
    cin >> t;
    int a[1010], n;
    for(j=1;j<=t;j++)
    {
        cin >> n;
        for (i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        int count = 0;
        int start = 0, end = n;
        for (i = 1; i <= n; i++)
        {
            if (a[i] == 0)
            {
                count++;
                start = i;
                break;
            }
        }
         for (i = n; i >= 1; i--)
        {
            if (a[i] == 0)
            {
                count++;
                end = i;
                break;
            }
        }
        if(count ==0)
        {
            cout << "0" << endl;

        }
        else
            cout << end - start + 2 << endl;
    }

    return 0;
}