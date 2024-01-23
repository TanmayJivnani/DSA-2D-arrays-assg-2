//Write a program to print the elements of both the diagonals in a square matrix

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << " n: ";
    cin >> n;
    int a[n][n];
    //intializing a
    cout << "\nEnter Elements of Square Mtrx: \n";
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>> a[i][j];
        }
    }
    cout << endl;
    //printing diagonals
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==j || i+j==n-1) cout << a[i][j] << " ";
            else cout << "  " ;       
        }
        cout<< endl;
    }
    return 0;
}