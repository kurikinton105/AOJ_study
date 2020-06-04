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
    int minj;
    for(int i=0;i<n;i++){
        minj = i;
        for(int j=i;j<n;j++){
            if(A[j] < A[minj]){
                minj = j;
            }
        }
        if(i!=minj){
            int c = A[i];
            A[i] = A[minj];
            sum +=1;
            A[minj]=c;
        }
    }
    
    
    for(int k=0;k<n-1;k++){
        cout << A[k] << " ";
    }cout << A[n-1] << endl;
    cout << sum << endl;
    return 0;
}

//
//  2-B.cpp
//  
//
//  Created by 山田健太 on 2019/10/02.
//

//#include <stdio.h>
