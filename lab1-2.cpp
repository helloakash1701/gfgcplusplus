// #include <iostream>
// using namespace std;

// int main()
// {
//     int arr[4] = {1, 2, 3, 4};
//     int len = end(arr) - begin(arr);
//     for (int i = 0; i < len; i++)
//     {
//         cout << arr[i]j << endl;
//     }
//     return 0;
// }

#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cout << " enter values of m and n ";
    cin >> m;
    cin >> n;
    int arr1[m][n], arr2[m][n];
    int s[m][n];
    cout << "Element daaal salee ";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {

            cin >> arr1[i][j];
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {

            cin >> arr2[i][j];
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {

            s[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    cout << "the sum of the arrays is :\n ";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {

            cout << s[i][j] << " ";
        }
        cout << endl;
    }
}
