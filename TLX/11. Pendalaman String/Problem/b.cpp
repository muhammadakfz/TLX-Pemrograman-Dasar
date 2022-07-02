#include <iostream>
#include <cstring>
using namespace std;

int main() {
    string s;
    char t[101];
    cin >> s >> t;

    while(s.find(t) < 101) {
        s.erase(s.find(t), strlen(t));
    }

    cout << s << endl;

    cin.get();
    return 0;
}
