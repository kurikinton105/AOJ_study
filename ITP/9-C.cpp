#include<iostream>
#include<string>
using namespace std;
int main(){
    int tarosum =0,hanakosum=0;
    string taro,hanako;
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> taro >> hanako;
        if ( taro == hanako ) {
            tarosum = tarosum+1;
            hanakosum=hanakosum+1;
        }
        else if ( hanako < taro ){
            tarosum =tarosum+3;
        }
        else if ( hanako > taro ){
            hanakosum=hanakosum+3;
        }
    }
    cout << tarosum << " " << hanakosum<< endl;
    return 0;
}
