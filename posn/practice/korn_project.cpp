#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int width, length, answer;

    cout<<"Input Width : "; cin>>width; 
    // เช็คว่าถ้าความกว้างน้อยกว่าหรือเท่ากับ 0 หรือไม่ ถ้าใช่ ก็แสดงผล error
    if (width <= 0) {
        cout<<"Error! | The width must be greater than 0.";
        return 0;
    }

    cout<<"Input Length : "; cin>>length; 
    // เช็คว่าถ้าความยาวน้อยกว่าหรือเท่ากับ 0 หรือไม่ ถ้าใช่ ก็แสดงผล error
    if (length <= 0) {
        cout<<"Error! | The width must be greater than 0.";
        return 0;
    }

    if (width > length) { 
        // เช็คว่าความกว้างมากกว่าความยาวหรือไม่ ถ้าใช่ ก็แสดงผล error
        cout<<"Error! | The width must be lower than or equal to length.";
        return 0;
    }
    
    // สูตรคำนวณจำนวนรูป
    answer = (width * (2 * length - width) * (width * width - 1)) / 12;

    // แสดงผลจำนวนรูป
    // ถ้า answer = 1 เเล้ว picture ไม่เติม s
    // ถ้า answer > 1 หรือ answer = 0 แล้ว picture เติม s
    if (answer==1) cout<<'\n'<<answer<<" picture";
    else cout<<'\n'<<answer<<" pictures";
    return 0;
}