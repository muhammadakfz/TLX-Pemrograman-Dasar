#include <iostream>
#include <cstring>
using namespace std;

int main() {
    string s;
    int k;

    cin >> s >> k;

    for(int i = 0; i < s.length(); i++) {
        s[i] = (s[i] - 'a' + k) % 26 + 'a';
        cout << s[i];
    }

    cin.get();
    return 0;
}
