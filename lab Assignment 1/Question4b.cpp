#include <iostream>
using namespace std;

int main(){
    int a[10][10], b[10][10], c[10][10];
    int r1,c1,r2,c2;
    cout<<"Enter rows and cols of 1st matrix: ";
    cin>>r1>>c1;
    cout<<"Enter elements:\n";
    for(int i=0;i<r1;i++) for(int j=0;j<c1;j++) cin>>a[i][j];

    cout<<"Enter rows and cols of 2nd matrix: ";
    cin>>r2>>c2;
    cout<<"Enter elements:\n";
    for(int i=0;i<r2;i++) for(int j=0;j<c2;j++) cin>>b[i][j];

    if(c1!=r2){
        cout<<"Multiplication not possible\n";
        return 0;
    }

    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            int sum=0;
            for(int k=0;k<c1;k++) sum+=a[i][k]*b[k][j];
            c[i][j]=sum;
        }
    }

    cout<<"Result matrix:\n";
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++) cout<<c[i][j]<<" ";
        cout<<"\n";
    }
    return 0;
}
