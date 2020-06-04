#include <iostream>
#include <vector>

using namespace std;

void BubbleSort(int N,vector<string> &v){
    int len = (int)v.size();
    
    for(int i = 0 ; i < len-1 ; i++){
        for(int j = N-1 ; j > i ; j--){
            if(v[j][1] < v[j-1][1]) swap(v[j],v[j-1]);
        }
    }
    
    for(int i = 0 ; i < len ; i++){
        if(i == len-1) cout << v[i] << endl;
        else cout << v[i] << " ";
    }
    cout << "Stable" << endl;
}

void SelectionSort(int N,vector<string> v,vector<string> B){
    int len = (int)v.size();
    
    for(int i = 0 ; i < len ; i++){
        int mini = i;
        for(int j = i ; j < len ; j++){
            if(v[j][1] < v[mini][1]) mini = j;
        }
        swap(v[i],v[mini]);
    }
    
    for(int i = 0 ; i < len ; i++){
        if(i == len-1) cout << v[i] << endl;
        else cout << v[i] << " ";
    }
    if(v == B) cout << "Stable" << endl;
    else cout << "Not stable" << endl;
}

int main(){
    int n;
    
    cin >> n;
    vector<string> A(n),B(n),S(n);
    
    for(int i = 0 ; i < n ; i++){
        cin >> A[i];
    }
    
    B = A;
    BubbleSort(n,B);
    
    S = A;
    SelectionSort(n,S,B);
    
    return 0;
}
//
//  2-C.cpp
//  
//
//  Created by 山田健太 on 2019/10/02.
//

#include <stdio.h>
