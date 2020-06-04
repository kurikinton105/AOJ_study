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
    end =
    std::chrono::system_clock::now(); // 計測終了時間
    double elapsed =
    std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count(); // 処理に要した時間をミリ秒に 変換
    
    cout << maxv << endl;
    
    //char ch;
    cout << "実行時間 " << elapsed/1000 << endl;
    //    while (getchar() != 'e');
    
    
    
}

