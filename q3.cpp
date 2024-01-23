// Write a program to print the matrix in wave form.

#include<iostream>
using namespace std;

int main()
{
    int m,n;
    cout << " m: ";
    cin >> m;
    cout << " n: ";
    cin >> n;
    int a[m][n];

    //intializing arr
    cout << "\nEnter Elements of Square Mtrx: \n";
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>> a[i][j];
        }
    }
    cout << endl;
    
    // print wave form
    for(int j=0; j<n; j++){
        if(j%2==0){
        for(int i=m-1; i>=0; i--){
            cout << a[i][j]<<" ";
        }
        }
        else{
            for(int i=0; i<m; i++){
                cout << a[i][j]<<" ";
            }
        }
    }
    return 0;
}