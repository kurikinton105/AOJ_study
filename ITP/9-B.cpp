#include <iostream>
using namespace std;

int main() {
    string str;
    int m, h;
    
    while(1){
        cin >> str;
        if(str == "-") break;
        cin >> m;
        for (int i = 0; i < m; ++i) {
            cin >> h;
            str.append(str.substr(0, h)).erase(0, h);
        }
        cout << str << endl;
    }
    
    return 0;
}


