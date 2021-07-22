#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cout<<"Enter the number of rows and columns"<<endl;
    cin>>n;
    cin>>m;
    int i, j;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= m; j++)
        {
            if (i == 1 || i == n ||
                j == 1 || j == m)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}
