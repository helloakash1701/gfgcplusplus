#include <iostream>
using namespace std;
#include <cstring>
int main()
{
    // cipher text is given as (x+n) %26
    char alphabet[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    string plain_text;
    cout << "Enter the plain text ";
    cin >> plain_text;
    int key;
    cout << "Enter the key ";
    cin >> key;
    int length = plain_text.length();
    cout << "LENGTH IS " << length << endl;
    char myarray[length] = "";
    for (int j = 0; j < length; j++)
    {
        myarray[j] = plain_text.at(j);
    }
    // cout << "MY ARRAY " << myarray << endl;
    char myarray1[length] = "";
    for (int i = 0; i < length; i++)
    {
        for (int k = 0; k <= 25; k++)
        {
            if (myarray[i] == alphabet[k])
            {
                int ct = (key + k) % 26;
                myarray1[i] = alphabet[ct];
                // cout << myarray[i] << endl;
            }
        }
    }
    for (int i = 0; i < length; i++)
    {
        cout << myarray1[i];
    }
}

// #include <iostream>
// using namespace std;
// int main()

// {
//     // Write C++ code here
//     while (true)
//     {
//         char ch;
//         cout << "enter a char " << endl;
//         cin >> ch;
//         int ascii = int(ch);
//         int key = 3;
//         int fkey = (key + ascii);
//         char fch = char(fkey);
//         cout << fch << endl;
//     }
//     return 0;
// }