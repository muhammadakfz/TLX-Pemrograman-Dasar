#include <iostream>
#include <string>
using namespace std;

int a[128][128], ans;
string str[128*128];

bool homogen(int p, int q, int r) {
    int res = a[p][q];
    for(int i = p; i < p+r; i++) {
        for(int j = q; j < q+r; j++) {
            if(a[i][j] != res) return false;
        }
    } return true;
}

void quadtree(int p, int q, int r, string s) {
    if(homogen(p, q, r)) {
        if(a[p][q] == 1) {
            str[ans] = "1"+s;
            ans++;
        }
    } else {
        quadtree(p, q, r/2, s+"0");
        quadtree(p, q+(r/2), r/2, s+"1");
        quadtree(p+(r/2), q, r/2, s+"2");
        quadtree(p+(r/2), q+(r/2), r/2, s+"3");
    }
}

int main() {
    int r, c;
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

    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cin >> a[i][j];
        }
    }

    ans = 0;
    quadtree(0, 0, pw, "");
    cout << ans << endl;
    for(int i = 0; i < ans; i++) {
        cout << str[i].c_str() << endl;
    }

    cin.get();
    return 0;
}
