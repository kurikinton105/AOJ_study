#include<iostream>
#include<cmath>
#include<stdio.h>
using namespace std;

int main(){
    double x1,y1,x2,y2;
    cin >> x1 >> y1 >> x2 >> y2;
    double c,d,e;
    c = fabs(x1-x2);
    d = fabs(y1-y2);
    e = sqrt(c*c + d*d);
    printf("%lf",e);
    cout << endl;
    return 0;
}
