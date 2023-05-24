// Yêu cầu:
// in ra index
// và in ra mã ASCII tương ứng

#include <iostream>
using namespace std;

int main(){
    for(int i = 0; i <= 255; i++){
        char kyTu = (char)i;
        cout << i << "\t" << kyTu << endl;
    }
    return 0;
}