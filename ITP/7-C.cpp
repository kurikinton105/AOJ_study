#include<iostream>
using namespace std;

int main(){
    int r,c,a[101][101] ={};
    cin >> r >>c;
    int i,j,sum,t;
    for(i=0;i<r;i++){//横列書い入れて、表示して頑張る。
        sum =0;
        for(j=0;j<c;j++){
            cin >> t;
            a[i][j] = t;
            sum = t + sum;
            cout << t << ' ';
            
        }a[i][c] = sum;
        cout << sum << endl;
    }//一番下
    
    int k,m,sum1;
    for(k=0;k<c;k++){//k=横m=縦
        sum1=0;
        for(m=0;m<r;m++){
            sum1 = sum1 + a[m][k];
        }
        cout << sum1 << ' ';
        sum1 =0;
    }//合計の合計だけやる！！
    int n;
    for(n=0;n<r;n++){
        sum1 = sum1 + a[n][c];
        //cout << sum1;
    }cout << sum1 << endl;
}

