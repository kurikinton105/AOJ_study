#include<iostream>
using namespace std;

int main(){
    int a,b,c,x,i=0;
    cin >> a >> b >> c;
    
    for(x=a; x<=b; x++){
        if (c%x==0){
            i++;
        }
    }
    cout << i <<endl;
    return 0;
    
}
