#include <iostream>

using namespace std;

int main(){
    long long a,n,min,max,sum;
    
    cin >> n;
    cin >> a;
    min = a;
    max = a;
    sum = a;
    for (int i =1;i<n;++i){
        cin >> a;
        //合計
        sum = sum + a;
        //最小値
        if (a<min){
            min =a;
            //最大値
        }else if (a>max){
            max =a;
        }
    }
    cout << min << " " << max << " " << sum << endl;
    return 0;
}

