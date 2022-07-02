#include <iostream>
using namespace std;

int n, q;
int a[2][1001];

void fungsi(int x) {
    for(int i = 0; i < x; i++) {
        char bff[5], bff2[5];
        int p1, q1;
        
        cin >> bff >> p1 >> bff2 >> q1;

        int v = bff[0] - 'A';
        int w = bff2[0] - 'A';

        p1--; q1--;

        swap(a[v][p1], a[w][q1]);
    } 
}

int main() {
    cin >> n;
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    cin >> q;
    fungsi(q);

    for (int i = 0; i < 2; i++) {
    	for (int j = 0; j < n; j++) {
    		cout << a[i][j];
    		if (j+1 < n) {
    			cout << " ";
    		}
    	} cout << endl;
    }

    cin.get();
    return 0;
}
