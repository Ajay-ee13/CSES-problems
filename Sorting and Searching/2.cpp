#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    int desired_sizes[n];
    for (int i = 0; i < n; i++)
    {
        cin >> desired_sizes[i];
    }

    int sizes[m];
    for (int i = 0; i < m; i++)
    {
        cin >> sizes[i];
    }

    sort(sizes, sizes + n);
    sort(desired_sizes, desired_sizes + n);

    int count = 0;
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (sizes[i] > desired_sizes[j] - k || sizes[i] < desired_sizes[j] + k)
        {
            count++;
            j++;
        }
    }

    cout << count;
}