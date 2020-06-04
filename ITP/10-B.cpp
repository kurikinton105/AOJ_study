#include<iostream>
#include<cmath>
#include<stdio.h>
using namespace std;

int main(){
    int a,b;
    double c;
    cin >> a>>b>> c;
    double s,l,h,pi;
    pi =acos(-1);
    //printf("%lf\n",pi);
    //cout << a*a << endl;
    //cout << b*b << endl;
    //cout << 2*a*b*cos(c/180 *pi) << endl;
    s = (a* b*sin(c/180 *pi))/2;
    l = sqrt(a*a + b*b - 2*a*b*cos(c/180 *pi)) + a +b;
    //2*4*3*0
    h = 2*s/a;
    printf("%lf\n",s);
    printf("%lf\n",l);
    printf("%lf\n",h);
    return 0;
}
