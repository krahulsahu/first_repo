#include <iostream>
using namespace std;

int main()
{
    int n = 10;
    int first = 0;
    int second = 1;
    int newNumber;
    cout << first << " " << second << " ";
    for (int i = 1; i <= n; i++)
    {
        newNumber = first + second;
        cout << newNumber << " ";
        first = second;
        second = newNumber;
    }
    return 0;
}