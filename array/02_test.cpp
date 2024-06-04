#include<iostream>
using namespace std;
int array(int a[10][10],int b[10][10], int m, int n);
int main()
{
    int m , n, a[10][10], b[10][10], s[10][10], sum,i,j;
    cout<<"Enter order of matrix: ";
    cin >>m>>n>>endl;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++)
        {
            cout<<"enter elements of matrix A: ";
            cin>>a[i][j];
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++)
        {
            cout<<"enter elements of matrix B: ";
            cin>>b[i][j];
        }
    }

    sum = array(a, b,m,n);
    cout<<"the sum of matrix is: "<< sum;
    return 0;
}
int array(int a[10][10],int b[10][10], int m, int n )
{
    int i,j,sum[10][10];
    for(i=0;i<m;i++)
    {
      for(j=0;j<n;j++)
      {
        sum[i][j] = a[i][j]+b[i][j];
      }
    }
    return sum;
}