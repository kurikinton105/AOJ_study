#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    char str[10],com[13];
    map<string, bool>T;
    
    cin>>n;
    for(int i=0;i<n;i++){
        scanf("%s%s",com,str);
        if(com[0]=='i')
            T[string(str)]=true;
        else
        {
            if(T[string(str)])
                printf("yes\n");
            else
                printf("no\n");
        }
    }
    return 0;
}

