

#include <iostream>
using namespace std;
int main(void){
    int n,max=0,A[10000],B[10000],C[10000];
    cin >> n;
    for(int i=0;i<n;i++){
        C[i]=0,B[i]=0;//初期化
        cin >> A[i];
        //cout << A[i] << " ";
        if(max<A[i]){//Bの要素数を確定させる
            max = A[i];
        }
    }
    
    //cout << "max" <<max << endl;
    
    for(int j=0;j<n;j++){//同じ文字が出てくる回数を数えている
        C[A[j]]++;
        //cout << A[j] << " : " <<C[A[j]] << endl;
    }
    
    //確認
    //for(int i=0;i<max+1;i++){
    //cout << C[i]<< " ";
    //}cout << endl;
    
    for(int i=1;i<max+1;i++){
        C[i]= C[i] + C[i-1];
    }
    //確認
    //for(int i=0;i<max+1;i++){
    //    cout << C[i]<< " ";
    //}
    //cout << endl;
    
    for(int j=n-1;j>=0;j--){
        B[C[A[j]]] = A[j];
        C[A[j]]--;
        //cout <<
        //cout << j << " "<< "A"<<A[j] << " "<< "B"<<C[A[j]] << " : " << A[j] << endl;
    }
    
    for(int i=1;i<n;i++){
        cout << B[i]<< " ";
    }
    cout << B[n] << endl;
    
    
}

