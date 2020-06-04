#include<iostream>
#include<cmath>
#include<stdio.h>
using namespace std;

int main(){
    int x,s[1000];
    while(1){
        cin >>x;
        if(x==0) break;
        int i;
        double sum = 0,ave;
        for(i=0;i<x;i++){
            cin >> s[i];
            sum = sum + s[i];
            //cout << sum << " ";
        }ave = sum/x;
        //cout << ave << " ";
        double a=0,a1,j;
        for(i=0;i<x;i++){
            a = a + (s[i]-ave)*(s[i]-ave);
            //cout << a << " ";
        }j=a/x;
        //cout << j << " ";
        a1 = sqrt(j);
        printf("%lf\n",a1);
        
    }return 0;
}
