#include<iostream>
#include<stdio.h>
using namespace std;

int search(int A[],int n,int key){
    int i=0;
    A[n]=key;
    while(A[i]!=key) i++;
    return i != n;
}

int main(){
    int answer =0;
    int n,A[100000],q,key,same[100000],i;
    cin >> n;
    for(i=0;i<n;i++){ //格納
        cin >> A[i];
    }
    cin >> q;
    for(i=0;i<q;i++){
        cin >> key;
        if(search(A,n,key)) answer++;
    }
    printf("%d\n",answer);
    return 0;
}
