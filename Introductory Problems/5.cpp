#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n == 2 || n == 3)
    {
        cout << "NO SOLUTION";
    }

    else
    {
        if (n & 1)
        {
            for (int i = n - 1; i >= 2; i = i - 2)
                cout << i << " ";

            for (int i = n; i >= 1; i = i - 2)
                cout << i << " ";
        }

        else
        {
            for (int i = n - 1; i >= 1; i = i - 2)
                cout << i << " ";
            for (int i = n; i >= 2; i = i - 2)
                cout << i << " ";
        }
    }
}