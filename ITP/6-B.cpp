#include<iostream>
using namespace std;

int main(){
    int card[4][13] = {};
    int n,i,x;
    int j=0;
    int k=0;
    char ch;
    cin >> n;
    
    for(i = 1; i <= n; i++){
        cin >> ch >> x; // cin は空白改行を読み飛ばします
        switch (ch){// あるばしょを１で格納
            case 'S':
                card[0][x-1] =1 ;
                break;
            case 'H':
                card[1][x-1] =1 ;
                break;
            case 'C':
                card[2][x-1] =1 ;
                break;
            case 'D':
                card[3][x-1] =1 ;
                break;
        }
    }for(j=0;j<4;j++){
        
        for(k=0;k<13;k++){
            if(card[j][k]==0){
                switch(j){
                    case 0:
                        cout <<'S'<< ' ' << k+1 << endl;
                        break;
                    case 1:
                        cout <<'H'<< ' ' <<  k+1 << endl;
                        break;
                    case 2:
                        cout <<'C'<< ' ' <<  k+1 << endl;
                        break;
                    case 3:
                        cout <<'D'<< ' ' <<  k+1 << endl;
                        break;
                }
            }
        }
    }return 0;
}


