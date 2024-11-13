#include <iostream>
using namespace std;

int main() {
    int month;
    cout << "請輸入月份 (1-12): ";
    cin >> month;
    if (month < 1 || month > 12) {
        cout << "錯誤：請輸入1到12之間的數字！" << endl;
        return 1;
    }
    if (month >= 3 && month <= 5) {
        cout << month << "月是春季" << endl;
    }
    else if (month >= 6 && month <= 8) {
        cout << month << "月是夏季" << endl;
    }
    else if (month >= 9 && month <= 11) {
        cout << month << "月是秋季" << endl;
    }
    else {  // month == 12 || month == 1 || month == 2
        cout << month << "月是冬季" << endl;
    }
    return 0;
}