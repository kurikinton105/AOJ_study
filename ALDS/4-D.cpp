#include<iostream>
#include<stdio.h>
using namespace std;


int main(){
    int A[1001],n,k,answer,sum[10001]={0},ave=0;
    scanf("%d %d",&n,&k);
    for(int i=0;i<n;i++){
        scanf("%d",&A[i]);
        ave+=A[i];
    }
    if(k==1){
        answer = ave;
    }else{
        answer = ave/k +1;
    }
    
    int o=0;
    for(int j=0;j<n;j++){
        if(sum[o]>=answer){
            o+= 1;
            //cout << sum[o] << endl;
        }
        else{
            sum[o]+=A[j];
        }
    }
    int Max = sum[0];
    for(o=0;o<n;o++){
        if(Max >=sum[o]){
            Max = sum[o];
        }
    }
    cout << Max<< endl;
    return 0;
}
//
//  4-D.cpp
//  
//
//  Created by 山田健太 on 2019/10/02.
//

#include <stdio.h>
