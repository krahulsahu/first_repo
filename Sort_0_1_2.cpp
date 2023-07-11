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
    int count0 = 0;
    int count1 = 1;
    int count2 = 2;
    for(int i = 0;i < n;i++){
        if(arr[i]==count0){
            cout << arr[i]<<" ";
        }
    }
}

int main()
{
    int arr1[] = {1, 1, 0, 0, 0, 0, 1, 0};
    int N1 = sizeof(arr1) / sizeof(int);

    PrintArr(arr1, N1);

    Sorted(arr1, N1);

    // PrintArr(arr1, N1);
}
 