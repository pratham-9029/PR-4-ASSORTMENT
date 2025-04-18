//Develop a program to find the transpose of a matrix of a given 2D array.

#include<iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter Row & Column Size : ";
    cin >> n;

    int arr[n][n];

    for(int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "arr["<<i<<"]["<<j<<"] : ";
            cin >> arr[i][j];
        }
        cout << endl;
    }
    cout << endl;

    cout << "Main Matrix :"<< endl;

    for(int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    cout << "Transpose of Matrix :"<< endl;

    for(int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }


    return 0;
}