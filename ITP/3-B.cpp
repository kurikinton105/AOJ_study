#include<iostream>
using namespace std;

int main(){
    int x;
    int i=1;
    while(true){
        cin >> x;
        if(x==0){
            break;
        }else{
            cout << "Case " << i << ": " << x << endl;
            i ++;
        }
    }
    return 0;
}

