#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    for (int row = 0; row < n; row++)
    {
        for (int colum = 0; colum < row; colum++)
        {
            cout << " # ";
        }
        cout << endl;
    }
    return 0;
}