//Write a program to rotate the matrix by 90 degrees anti-clockwise.

#include<iostream>
using namespace std;
// Transpose -> Reverse Coln
int main()
{
    int m,n;
    cout << " m: ";
    cin >> m;
    cout << " n: ";
    cin >> n;
    int a[m][n];
    int b[n][m];  //reverse order
    //intializing a
    cout << "\nEnter Elements of Square Mtrx: \n";
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>> a[i][j];
        }
    }
    cout << endl;
    //1. Transpose of Mtrx
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            b[i][j]=a[j][i];
        }
    }
    // 2. Reverse Column
    for(int j=0; j<n; j++){
        int p=0;
        int q=m-1;
        while(p<q){
            int temp=b[p][j];
            b[p][j]=b[q][j];
            b[q][j]=temp;
            p++;
            q--;
        }
    }
    // print b
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << b[i][j]<< " ";
        }
        cout << endl;
    }
    return 0;
}