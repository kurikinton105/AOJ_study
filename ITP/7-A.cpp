#include <iostream>
using namespace std;

int main(){
    int Middle,Last,Re,total;
    while(true){
        cin >> Middle >> Last >> Re;
        total = Middle + Last;
        if (Middle==-1 and Last==-1 and Re==-1){
            break;
        }else{
            if(Middle==-1 or Last==-1){//中間試験、期末試験のいずれかを欠席した場合成績は F
                cout << 'F' << endl;
            }else if (total >= 80){
                cout << "A" << endl;
            }else if(total >=65){
                cout << "B" << endl;
            }else if (total >=50){
                cout << "C" << endl;
            }else if (total >=30){
                if(Re >=50){
                    cout << "C" << endl;
                }else{
                    cout << "D" << endl;
                }
            }else{
                cout << "F" <<endl;
            }
        }
    }
}

