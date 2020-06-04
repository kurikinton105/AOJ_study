//
//  ALDS1_5_C.cpp
//  
//
//  Created by 山田健太 on 2019/10/02.
//

#include "ALDS1_5_C.hpp"

#include<iostream>
#include<math.h>
#include<stdio.h>
using namespace std;

void kock(int n,double p1[2],double p2[2]){
    double s[2],t[2],u[2];
    if(n == 0){
        return;
    }
    // p1, p2 から s, t, u を計算
    double rad = M_PI / 3.0;
    s[0] = (2 * p1[0] + p2[0]) / 3.0;
    s[1] = (2 * p1[1] + p2[1]) / 3.0;
    t[0] = (p1[0] + 2 * p2[0]) / 3.0;
    t[1] = (p1[1] + 2 * p2[1]) / 3.0;
    u[0] = (t[0] - s[0]) * cos(rad) - (t[1] - s[1]) * sin(rad) + s[0];
    u[1] = (t[0] - s[0]) * sin(rad) + (t[1] - s[1]) * cos(rad) + s[1];
    //s[0]=(2*p1[0]+1*p2[0])/3;
    //s[1]=(2*p1[1]+1*p2[1])/3;
    //t[0]=(1*p1[0]+2*p2[0])/3;
    //t[1]=(1*p1[1]+2*p2[1])/3;
    //u[0] = (t[0]-s[0])*cos(M_PI/3)-(t[1]-s[1])*sin(M_PI/3)+s[0];
    //u[1] = (t[0]-s[0])*sin(M_PI/3)-(t[1]-s[1])*cos(M_PI/3)+s[1];
    //printf("%lf %lf¥n",s[0],x[1]);
    
    kock(n-1, p1, s);
    printf("%.8f %.8f\n",s[0],s[1]);
    kock(n-1, s, u);
    printf("%.8f %.8f\n",u[0],u[1]);
    kock(n-1, u, t);
    printf("%.8f %.8f\n",t[0],t[1]);
    kock(n-1, t, p2);
    
}
int main(){
    int i;
    cin >> i;
    printf("%.8f %.8f\n",0.0,0.0);
    
    double start[2] = {0};
    double last[2] = {100,0};
    
    kock(i,start,last);
    printf("%.8f %.8f\n",100.0,0.0);
    return 0;
}

