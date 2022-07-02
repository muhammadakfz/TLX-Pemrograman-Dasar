#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n, cek = 1;
        cin >> n;

        for(int i = 2; i*i <= n; i++) {
            if(n % i == 0) cek = 0;
        }

        if(cek and n != 1)cout << "YA" << endl;
        else cout << "BUKAN" << endl;
    }

    cin.get();
    return 0;
}
