#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n,A[200000];
    
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> A[i];
    }
    int maxv =-2000000000;
    int minv=A[0];
    for(int i=1;i<n;i++){
        maxv = max(maxv,A[i]-minv);
        minv = min(minv,A[i]);
    }
    
    cout << maxv << endl;
    return 0;
}
