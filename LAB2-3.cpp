#include <iostream>
using namespace std;
int main()
{

    int size;
    cout << "Enter the size of an array " << endl;
    cin >> size;
    int arr[size] = {0};
    for (int i = 0; i < size; i++)
    {
        int n;
        cout << "Enter the element of an array ";
        cin >> n;
        arr[i] = n;
    }
    int pos;
    cout << "Enter the element to be deleted ";
    cin >> pos;
    for (int i = pos - 1; i <= size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    for (int j = 0; j < size - 1; j++)
    {
        cout << arr[j] << " ";
    }

    return 0;
}