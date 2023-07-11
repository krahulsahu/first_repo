// Find unique apperianse of a number.

#include <bits/stdc++.h>
using namespace std;
// print function array
void PrintArr(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

void Sorted(int arr[], int n)
{
    int left = 0, right = n - 1;
    while (left < right)
    {
        while (arr[left] == 0)
        {
            left++;
        }
        while (arr[right] == 1)
        {
            right--;
        }
        if (arr[left] == 1 && arr[right] == 0 && left < right)
            swap(arr[left], arr[right]);
        left++;
        right--;
    }
}

int main()
{
    int arr1[] = {1, 1, 0, 0, 0, 0, 1, 0};
    int N1 = sizeof(arr1) / sizeof(int);

    PrintArr(arr1, N1);

    Sorted(arr1, N1);

    PrintArr(arr1, N1);
}
