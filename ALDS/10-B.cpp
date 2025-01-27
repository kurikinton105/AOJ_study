#include<iostream>
using namespace std;
#define N 100
#define INF 1<<25
int n,p[N+1],m[N+1][N+1];


int main(){
    cin>>n;
    for(int i=0;i<n;i++) {
        cin>>p[i]>>p[i+1];
    }
    
    for(int i=1;i<=n;i++) m[i][i]=0;
    for(int l=2;l<=n;l++){
        for(int i=1;i<=n-l+1;i++){
            int j=i+l-1;
            m[i][j]=INF;
            for(int k=i;k<=j-1;k++){
                m[i][j]=min(m[i][j],m[i][k]+m[k+1][j]+p[i-1]*p[k]*p[j]);
            }
        }
    }
    cout <<  m[1][n] << endl;;
}

