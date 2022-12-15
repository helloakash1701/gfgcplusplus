#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4};

    for (int i = 1; i <= 3; i++)
    {
        arr[i] = arr[i + 1];
    }

    for (int j = 0; j <= 2; j++)
    {
        cout << arr[j];
    }
    return 0;
}