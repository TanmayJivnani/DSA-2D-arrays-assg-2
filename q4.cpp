#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "n: ";
    cin >> n;
    int a[n][n];
    //filling a in spiral order
   int minr=0; int minc=0;
   int maxr=n-1;
   int maxc=n-1;
   int count=1;
   int i,j;
   while(minr<=maxr && minc<=maxc){
        //right
        i=minr;
        for(j=minc; j<=maxc && count<=n*n; j++){
                a[i][j]=count;
                count++;
        }
        minr++;
        //down
        j=maxc;
        for(int i=minr; i<=maxr && count<=n*n; i++){
                a[i][j]=count;
                count++;
        }
        maxc--;
        //left
        i=maxr;
        for(j=maxc; j>=minc && count<=n*n; j--){
                a[i][j]=count;
                count++;
        }
        maxr--;
        //up
        j=minc;
        for(int i=maxr; i>=minr && count<=n*n; i--){
                a[i][j]=count;
                count++;
        }
        minc++;
   }
   //printing arr
   cout << endl;
   for(i=0; i<n; i++){
    for(int j=0; j<n; j++){
        cout<<a[i][j]<< " ";
    }
    cout << endl;
   }
    return 0;
}