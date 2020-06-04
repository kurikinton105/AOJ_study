#include<iostream>
using namespace std;

int main(){
    int a,b;
    cin >> a;
    b =3;
    while(true){
        if (b>a){
            break;
        }else{
            //3の倍数
            if(b%3==0){
                cout << ' ' << b;
                //3が入っている
            }else if(b%10==3){
                cout << ' ' << b;
            }else if(b%100==3){
                cout << ' ' << b;
            }
            b = b+1;
        }
    }return 0;
}
