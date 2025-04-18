#include<iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter Row & Column Size : ";
    cin >> n;

    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "arr["<<i<<"]["<<j<<"] : ";
            cin >> arr[i][j];
        }
        cout << endl;
    }
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "-------------------------";
    cout << endl;

    int index,sum=0;
    cout << "Enter Row Number : ";
    cin >> index;

    cout << "Elements of row : ";
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(i == index)
            {
                cout << arr[i][j] << " ";
                sum += arr[i][j];
            }
        }
    }
    cout << endl;
    cout << "Sum of Row : "<< sum;
    cout << endl;


    cout << "--------------------------";
    cout << endl;
    

    cout << "Enter Column Number : ";
    cin >> index;
    
    sum = 0;

    cout << "Elements of row : ";
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(j == index)
            {
                cout << arr[i][j] << " ";
                sum += arr[i][j];
            }
        }
    }
    cout << endl;
    cout << "Sum of Column : "<< sum;
    
   return 0; 
}