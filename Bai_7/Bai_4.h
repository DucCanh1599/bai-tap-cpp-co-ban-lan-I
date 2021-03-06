
/*
* Xem lại bài tập 4 để hiểu hơn về những hàm bên dưới.
*/

#include <iostream>
using namespace std;

//Hàm tính tổng.
int Summation(int n) {
    int Sum = 0;
    for(int i = 0; i <= n; i++) {
        Sum = Sum + i;
    }
    return Sum;
}

//Hàm tính tích.
int Multiplication(int n) {
    int Mul = 1;
    for(int i = 1; i <= n; i++) {
        Mul = Mul * i;
    }
    return Mul;
}

void luaChon_2(int n){
    cout << "1.Tinh tong.\n2.Tinh tich.\n3.Ca hai.\nBan chon:";
    int lua_chon;
    cin >> lua_chon;
    switch(lua_chon){
    case 1:
        cout << "--> Tong la:" << Summation(n) << endl;
        break;
    case 2:
        cout << "--> Tich la:" << Multiplication(n) << endl;
        break;
    case 3:
        cout << "--> Tong la:" << Summation(n) << endl;
        cout << "--> Tich la:" << Multiplication(n) << endl;
        break;
    }
}
