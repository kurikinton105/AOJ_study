#include<iostream>
#include<stdio.h>
#include<cmath>
using namespace std;

int main(){
    int x,a[1001],b[1001],sum[1001],i;
    cin >> x;
    double max=0;
    for(int i=0;i<x;i++){
        cin >> a[i];
    }
    for(i=0;i<x;i++){
        cin >> b[i];
        sum[i] = fabs(a[i] - b[i]);
        //cout << sum[i] << " ";
        if(max <sum[i]){
            max = sum[i];
        }
    }//cout << endl;
    
    
    double sum1=0;
    
    for(int n=1;n<=3;n++){
        //cout << n << endl;
        
        for(i=0;i<x;i++){
            sum1 = sum1 + abs(pow(sum[i],(double)n));
            
        }//cout << sum1 << "合計　";
        sum1 = pow(sum1,(double)1/n);
        printf("%lf\n",sum1);
        sum1=0;
    }
    
    
    printf("%lf\n",max);
    return 0;
    
    
}
