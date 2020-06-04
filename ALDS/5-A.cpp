//
//  5-A.cpp
//  
//
//  Created by 山田健太 on 2019/10/02.
//

#include "5-A.hpp"

#include<iostream>
#include<stdio.h>
using namespace std;


int A[2001], n;
int solve(int i, int m){
    if(m == 0){
        return 1;
    }else if (i >= n){
        return 0;
    }
    int res = solve(i + 1, m) || solve(i + 1, m - A[i]);
    return res;
}

int main(){
    int q,m[201],i;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> A[i];
    }
    cin >> q;
    for(i=0;i<q;i++){
        cin >> m[i];
        
        if(solve(0,m[i]) == 1){
            cout << "yes" << endl;
        }else{
            cout <<"no" << endl;
        }
    }
    return 0;
}
