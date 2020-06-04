#include <iostream>
using namespace std;

int main(){
    int n,m,c;
    cin >> n >> m;
    int A[100][1000] = {};
    int B[1000] = {};
    int i,j,k;
    for(i=0;i<n;i++){//Aに格納
        for(j=0;j<m;j++){
            cin >> A[i][j];
        }
    }
    for(k=0;k<m;k++){//Bに格納
        cin >> B[k];
    }
    int g,h;
    for(g=0;g<n;g++){
        int s = 0;
        for(h=0;h<m;h++){
            c = A[g][h] * B[h];
            //cout << c << endl;
            s = s+c;
            //cout << s << endl;
        }
        //cout << endl;
        cout << s << endl;
    }return 0;
    
}


