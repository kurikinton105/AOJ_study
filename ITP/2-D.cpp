#include<iostream>
using namespace std;

int main(){
    int W,H,x,y,r;
    cin >> W >> H >> x >> y >> r;
    if((x<=W-r)&&(x>=r)&&(y<=H-r)&&(y>=r)){
        cout << "Yes" << endl;
        
    }else {
        cout <<"No" <<endl;
    }
    return 0;
}
