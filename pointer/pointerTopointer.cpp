#include <iostream>
using namespace std;

// Function prototype
void printArray(int **arr, int row, int col);
void sumRow(int **arr , int row , int col);
void sumCol(int **arr, int row , int col);
void max(int **arr, int row, int col);

int main() {
    int row, col;
    cout << "Enter the number of rows and columns: ";
    cin >> row >> col;

    // Dynamically allocate memory for 2D array
    int **arr = new int*[row];
    for (int i = 0; i < row; i++) {
        arr[i] = new int[col];
    }

    // Input elements into the 2D array
    cout << "Enter elements of the array:" << endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin >> arr[i][j];
        }
    }

    // Call function to print the array
    printArray(arr, row, col);
    sumRow(arr, row, col);
    sumCol(arr, row, col);
    max(arr, row, col);

    // Free dynamically allocated memory
    for (int i = 0; i < row; i++) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}

// Function definition to print the 2D array
void printArray(int **arr, int row, int col) {
    cout << "The array is:" << endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
void sumRow(int **arr, int row , int col)
{
    int *sums = new int[row];
    int i,j;

    cout<<"the sum of row is : ";
  
    for (i=0 ;i<row ; i++)
    {
    sums[i] = 0;
    
        for(j=0;j<col ; j++)
        {
            sums[i]+= arr[i][j];
        }
        cout<<sums[i]<<" ";
    }
    cout<<endl;
    delete[] sums;
}
void sumCol(int **arr, int row, int col)
{
    int *adds = new int[row];
    int i,j;
    cout<<"the sum of each column is : ";
    for(j=0;j<col;j++)
    {
        adds[j] =0;
        for(i=0;i<row;i++)
        {
            adds[j]+=arr[i][j];
        }
        cout<<adds[j]<<" ";
    }
    cout<<endl;
    delete[] adds;
}
void max(int **arr, int row , int col)
{
    int *max = new int;
    int i,j,**index;
    *max = arr[0][0];
    for (i=0; i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(*max <arr[i][j])
            {
                *max = arr[i][j];
                *index = arr[i][j];
            }
        }
    }
    cout<<*index;
    cout<<"The maximum element is : "<<*max <<endl;
    delete[] max;
}
    