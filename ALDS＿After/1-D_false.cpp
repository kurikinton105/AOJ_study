#include<iostream>
#include<algorithm>
#include<chrono>
using namespace std;

int main() {
    int n, A[200000];
    
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    int maxv = -2000000000;
    //int minv = A[0];
    
    std::chrono::system_clock::time_point start, end;
    start = std::chrono::system_clock::now(); //計測開始
    for (int i = 1; i < n; i++) {
        for (int j = i; j < n; j++) {
            if (maxv < A[j] - A[i]) {
                maxv = A[j] - A[i];
                
            }
        }
    }

    end = chrono::system_clock::now(); //計測終了
    double time = static_cast<double>(chrono::duration_cast<chrono::microseconds>(end - start).count() / 1000.0);
    
    cout << maxv << endl;
    
    //char ch;
     printf("time %lf[ms]\n", time); //結果を表示
    //    while (getchar() != 'e');
    
    
    
}

