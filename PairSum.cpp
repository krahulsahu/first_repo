// Find unique apperianse of a number.

#include <bits/stdc++.h>
using namespace std;

void PairSum(int arr[], int n, int S)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[i] + arr[j] == S)
            {
                cout << arr[i] << " " << arr[j] << endl;
            }
        }
    }

}

// print function array
void PrintArr(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr1[] = {4,6,8, 3, 9};
    int N1 = sizeof(arr1) / sizeof(int);

    PrintArr(arr1, N1);
    PairSum(arr1, N1, 10);
    // cout << "Unique no. is " << Dublicate(arr1, N1) << endl;
}