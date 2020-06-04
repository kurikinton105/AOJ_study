#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n,v[10000];
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> v[i];
        
    }
    sort(v, v+n);
    
    for(int i=0;i<n-1;i++){
        cout << v[i] << " ";
        
    }
    cout << v[n-1] << endl;
    return 0;
}
