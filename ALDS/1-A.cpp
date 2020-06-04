#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
    int i;
    int A[100];
    int n;
    cin >> n;
    for(int i=1;i<n+1;i++){
        cin >> A[i];
    }
    for(int i=1;i<=n;i++){
        int v = A[i];
        int j = i - 1;
        while(j >= 0 and A[j] > v){
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = v;
        for(int i=1;i<n;i++){
            cout << A[i] << " ";
        }cout << A[n] << endl;
    } return 0;
}
