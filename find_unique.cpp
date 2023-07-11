// Find unique apperianse of a number.

#include <bits/stdc++.h>
using namespace std;

int findUnique(int a[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum ^ a[i];
    }
    return sum;
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
    int arr1[] = {1, 2, 3, 4, 5, 2, 4, 5, 3};
    int N1 = sizeof(arr1) / sizeof(int);

    PrintArr(arr1, N1);
    cout << "Unique no. is " << findUnique(arr1, N1) << endl;
}