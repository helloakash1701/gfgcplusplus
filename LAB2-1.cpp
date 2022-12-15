#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {1, 2, 3, 4};
    int pos = 2;
    int size = 4;
    int value = 5;
    // inserting
    for (int i = 3; i >= 1; i--)
    {
        arr[i + 1] = arr[i];
        // cout << "arr is " << arr[i + 1];
    }

    arr[pos - 1] = value;

    for (int j = 0; j <= 4; j++)
    {
        cout << arr[j];
    }
    return 0;
}