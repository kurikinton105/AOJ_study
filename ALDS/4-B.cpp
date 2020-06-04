#include<iostream>
#include<stdio.h>
using namespace std;

int n,s[100001];

int binarySearch(int key){
    int left = 0;
    int right = n;
    int mid;
    while(left < right){
        mid = (left + right) / 2;
        if(key == s[mid]){
            return 1;
            break;
        }else if (key > s[mid]){
            left = mid + 1;
        }else if(key <s[mid]){
            right = mid;
        }
    }
    return 0;
}

int main(){
    int q,i,t[100000];
    int answer=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){ //格納
        cin >> s[i];
    }
    scanf("%d",&q);
    for(int m=0;m<q;m++){ //格納
        cin >> t[m];
    }
    
    
    for(int m=0;m<q;m++){
        if(binarySearch(t[m])==1){
            answer +=1;
        }
    }
    printf("%d\n",answer);
    return 0;
}

