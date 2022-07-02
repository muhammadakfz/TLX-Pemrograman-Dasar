#include <iostream>
#include <cstring>
using namespace std;

int x, y, z, ans = 0;
int a[25][25];
bool b[25][25];

bool dalam(int a, int b) {
    if(a >= 0 and a < x and b >= 0 and b < y) return 1;
    return 0;
}

void jawbreaker(int p, int q) {
    if(dalam(p, q) and b[p][q] == 0 and a[p][q] == z) {
        b[p][q] = 1;
        ans++;
        jawbreaker(p+1, q); jawbreaker(p-1, q);
        jawbreaker(p, q+1); jawbreaker(p, q-1);
    } else return;
}

int main() {
    int p, q;
    memset(b, 0, sizeof(b));
    cin >> x >> y;
    for(int i = 0; i < x; i++) {
        for(int j = 0; j < y; j++) {
            cin >> a[i][j];
        }
    }

    cin >> p >> q;
    z = a[p][q];
    jawbreaker(p, q);
    cout << ans * (ans - 1) << endl;

    cin.get();
    return 0;
}
