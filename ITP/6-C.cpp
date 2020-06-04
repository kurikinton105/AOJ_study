#include <iostream>
using namespace std;

int main(){
    int n,i,j,k,m;
    int heya[4][3][10] = {};
    cin >> n;
    
    for(i=0;i<n;i++){//件数分の実行 配列に格納
        int b,f,r,v;
        cin >> b >> f >> r >> v;
        heya[b-1][f-1][r-1] += v;
        if (heya[b-1][f-1][r-1] <= 0){
            heya[b-1][f-1][r-1] = 0;
        }
    }
    
    for(j=0;j<4;j++){//号棟の書き出し
        for(k=0;k<3;k++){//階数の書き出し
            for(m=0;m<10;m++){//heya
                cout << ' ' << heya[j][k][m] ;
            }
            cout << endl;
            
        }
        if(j<3){
            cout << "####################" << endl;
        }
    }
    return 0;
    
}

