#include<iostream>
using namespace std;

int main(){
    int h,w,i,j,m;
    
    while(true){
        cin >> h >> w;
        if (h==0){
            if (w==0){
                break;
            }
        }else{
            for(i=1;i<=w;i++){
                cout << '#';
            }cout << endl;
            for(j=1;j<=h-2;j++){
                cout << '#';
                for(m=1;m<=w-2;m++){
                    cout << '.';
                }
                cout << '#'<< endl;
            }
            for(i=1;i<=w;i++){
                cout << '#';
            }
            cout << endl;
        }cout << endl;
    }return 0;
    
}
