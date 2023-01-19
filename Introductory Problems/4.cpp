#include <iostream>
using namespace std;

// int main()
// {

//     int n;
//     cin >> n;
//     long long arr[n];
//     long long ans = 0;

//     for (int i = 0; i < n; i++)
//         cin >> arr[i];

//     for (int i = 1; i < n; i++)
//     {
//         if (arr[i - 1] > arr[i])
//         {
//             ans += arr[i - 1] - arr[i];
//             arr[i] = arr[i - 1];
//         }
//     }

//     cout << ans;
// }

int main()
{

    int n;
    cin >> n;
    long long prev, curr;
    cin >> prev;
    long long ans = 0;

    for (int i = 1; i < n; i++)
    {
        cin >> curr;
        if (prev > curr)
            ans += prev - curr;

        else
            prev = curr;
    }

    cout << ans;
}