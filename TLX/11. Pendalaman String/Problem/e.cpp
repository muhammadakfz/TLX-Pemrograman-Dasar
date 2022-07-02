#include <iostream>
#include <cstring>
using namespace std;

int main() {
    string s;

    cin >> s;

    for(int i = 0; i < s.length(); i++) {
        if(s[i] > 96) s[i] = s[i] - 32;
        else s[i] = s[i] + 32;
        cout << s[i];
    }

    cin.get();
    return 0;
}
