#include<iostream>
using namespace std;

int main(){
    int n,x,tmp,total;
    while(true){
        cin >> n >> x;
        if(n==0 and x==0){
            break;
        }else{
            int i,j,k;
            tmp =0;
            for (i=1;i<=n-2;i++){
                for(j=i+1;j<=n-1;j++){
                    for(k=j+1;k<=n;k++){
                        total = 0;
                        total = i+j+k;
                        if (total==x){
                            tmp = tmp+1;
                            //cout << i << " " << j << " " << k << " " << total << endl;
                        }
                    }
                    
                }
            }//cout << tmp << endl;
        }cout << tmp << endl;
        //cout << endl;
    }
    return 0;
}

