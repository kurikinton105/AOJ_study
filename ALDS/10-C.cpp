#include <iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(void){
    // Your code here!
    int n;
    cin >> n;
    for(int k =0;k<n;k++){
        //変換の式
        int c[1001][1001]={};
        
        
        string str1,str2;
        cin >> str1 >> str2;
        int max=0;
        //比較判定
        for(int i=1;i<=str1.size();i++){
            for(int j=1;j<=str2.size();j++){
                if(str1[i-1]==str2[j-1]){
                    
                    c[i][j] = c[i-1][j-1]+1;
                    //cout << str1[i-1] << "=" << str2[j-1]  << " " <<c[i][j] << " ";
                }else if(c[i][j-1]>c[i-1][j]){
                    c[i][j] = c[i][j-1];
                }else{
                    c[i][j]=c[i-1][j];
                }
            }
        }
        for(int i=1;i<=str1.size();i++){
            for(int j=1;j<=str2.size();j++){
                if(max<c[i][j]){
                    max = c[i][j];
                }
            }
        }
        cout << max << endl;
        
    }
}

