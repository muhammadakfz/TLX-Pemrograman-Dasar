#include <iostream>
using namespace std;

int main() {
    int n, m, p;
    int a[101][101], b[101][101], c[101][101];

    cin >> n >> m >> p;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < p; j++) {
            cin >> b[i][j];
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < p; j++) { 
            c[i][j] = 0;
            for(int k = 0; k < m; k++) {
                c[i][j] += a[i][k] * b[k][j];
            } cout << c[i][j] << " ";
        } cout << endl;
    }

    cin.get();
    return 0;
}
