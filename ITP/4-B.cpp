#include <iostream>
#include <iomanip>
using namespace std;
int main(void){
    // Your code here!
    
    double x,y;
    cin >> x;
    y = 3.14159265359;
    cout << std::setprecision(50) <<x*x*y << " " << 2*x*y << endl;
    return 0;
    
}

