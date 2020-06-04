#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
    
    int A[101];
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> A[i];
    }
    int sum =0;
    int flag = 1; // 逆の隣接要素が存在する
    while(flag){
        flag = 0;
        for(int j=n-1;j>0;j--){//int j が N-1 から 1 まで
            if(A[j] < A[j-1]){
                int c = A[j];
                A[j]=A[j-1];
                A[j-1]=c;
                flag = 1;
                sum +=1;
            }
        }
    }
    for(int k=0;k<n-1;k++){
        cout << A[k] << " ";
    }cout << A[n-1] << endl;
    cout << sum << endl;
    return 0;
}

