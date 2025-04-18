//Develop a program that finds all the negative elements from a given 1D array.

#include<iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter Array size : ";
    cin >> n;

    int arr[n];

    for(int i=0; i<n; i++)
    {
        cout << "arr["<<i<<"] : ";
        cin >> arr[i];
    }
    cout << endl;

    cout<<"Negative Values : ";
    for(int i=0; i<n; i++)
    {
        if(arr[i]<0)
        {
            cout << arr[i]<<" ";
        }
        else
        {
            cout << " ";
        }
    }
    return 0;
}