#include <iostream>
using namespace std;

// int main()
// {
//     int n;
//     cout << "Enter the number  " << endl;
//     cin >> n;
//     bool isprime = 1;
//     for (int i = 2; i < n; i++)
//     {
//         if (n % i == 0)
//         {
//             isprime = 0;
//             break;
//         }
//     }
//     if (isprime == 0)
//     {
//         cout << "Not Prime" << endl;
//     }
//     else
//         cout << "prime" << endl;
//     return 0;
// }

int main()
{
    int n;
    int k = 0;
    cout << "Enter the Number " << endl;
    cin >> n;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << "NOT a prime No." << endl;
            ++k;
            break;
        }
    }
    if (k == 0)
    {
        cout << "Prime No. ";
    }
    return 0;
}
