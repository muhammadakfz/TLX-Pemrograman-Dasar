#include <iostream>
#include <string>
using namespace std;

int a[128][128], ans;
string str[128*128];

void quadtree(int p, int q, int r, string s) {
    if(s == "") {
        for(int i = p; i < p+r; i++) {
            for(int j = q; j < q+r; j++) {
                a[i][j] = 1;
            }
        }
    } else {
        if(s[0] == '0') quadtree(p, q, r/2, s.substr(1, s.length()-1));
        else {
            if(s[0] == '1') quadtree(p, q+r/2, r/2, s.substr(1, s.length()-1));
            else {
                if (s[0] == '2') quadtree(p+r/2, q, r/2, s.substr(1, s.length()-1));
                else {
                    if (s[0] == '3') quadtree(p+r/2, q+r/2, r/2, s.substr(1, s.length()-1));
                }               
            }
        }
    }
}

int main() {
    int r, c;

    cin >> ans;
    for (int i = 0; i < ans; i++) cin >> str[i];
    
    cin >> r >> c;

    int mx = max(r, c);
    int pw = 1;

    while(pw < mx) {
        pw *= 2;
    }

    for(int i = 0; i < pw; i++) {
        for(int j = 0; j < pw; j++) {
            a[i][j] = 0;
        }
    }

    for (int i = 0; i < ans; i++) quadtree(0, 0, pw, str[i].substr(1, str[i].length()-1));

    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cout << a[i][j] << " ";
        } cout << endl;
    }

    cin.get();
    return 0;
}
