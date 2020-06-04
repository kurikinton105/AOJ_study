#include<string>
#include<stdio.h>
#include<iostream>
#include<cctype>
using namespace std;

int main(){
    string a;
    string moji;
    cin >> a;
    int sum = 0;
    while(true){
        cin >> moji;
        //cout << moji.size()<< endl;
        if(moji == "END_OF_TEXT"){
            break;
        }else{
            for(int i=0;i<moji.size();i++){
                if(isupper(moji[i])){
                    moji[i] = tolower(moji[i]);
                }
            }
            if(a == moji){
                sum = sum+1;
            }
        }
    }
    cout << sum << endl;
    return 0;
}
