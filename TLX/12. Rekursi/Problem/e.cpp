#include <iostream>
using namespace std;

string biner(int n) {
    if(n == 1){
        return "1";
    } else if (n % 2 == 1) {
        return biner(n/2) + "1";
    } else {
        return biner(n/2) + "0";
    }
}

int main() {
    int x;
    cin >> x;
    cout << biner(x);
    cin.get();
    return 0;
}
