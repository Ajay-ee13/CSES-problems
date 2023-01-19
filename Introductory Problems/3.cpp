#include <iostream>
using namespace std;

// int main()
// {
//     string s;
//     cin >> s;
//     int count = 1;
//     int maxCount = 1;
//     for (int i = 0; i < s.size() - 1; i++)
//     {
//         if (s[i] == s[i + 1])
//             count++;

//         else
//             count = 1;

//         maxCount = max(count, maxCount);
//     }

//     cout << maxCount;
// }

int main()
{
    string s;
    cin >> s;
    int count = 0;
    int maxCount = 0;
    for (int i = 0; i < s.length(); i++)
    {
        char curr = s[i];
        while (s[i] == curr)
        {
            i++;
            count++;
        }
        maxCount = max(count, maxCount);
        count = 0;
        i--;
    }

    cout << maxCount;
}