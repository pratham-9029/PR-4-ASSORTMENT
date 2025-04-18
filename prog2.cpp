//Develop a program to find the largest elemnet from given 2D array. 
#include<iostream>
using namespace std;

int main()
{
    int row,col;

    cout<<"Enter Row Size: ";
    cin>>row;

    cout<<"Enter Column Size: ";
    cin>>col;

    int arr[row][col];

    for(int i = 0;  i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            cout << "arr["<<i<<"]["<<j<<"] : ";
            cin >> arr[i][j];
        }
        cout << endl;
    }
    cout<< endl;

    int max = arr[0][0];
    for(int i = 0;  i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            if(arr[i][j] > max)
            {
                max = arr[i][j];
            }
            else
            {
                cout << "  ";
            }
        }
    }
    cout << endl;

    cout << "The Largest from Array is : "<< max;


    return 0;
}