#include<iostream>
using namespace std;

int main(){
    int h,w,i,j,m,n;
    
    while(true){
        cin >> h >>w;
        if (h==0){
            if (w==0){
                break;
            }
        }else{
            // 縦
            for(j=1;j<=h;j++){
                if (j%2==1){
                    for(i=1;i<=w;i++){
                        if(i%2==1){
                            cout << '#';
                        }else{
                            cout << '.';
                        }
                    }cout << endl;
                }else{
                    for(i=1;i<=w;i++){
                        if(i%2==1){
                            cout << '.';
                        }else{
                            cout << '#';
                        }
                    }cout << endl;
                }
            }
        }cout << endl;
    }return 0;
    
}
