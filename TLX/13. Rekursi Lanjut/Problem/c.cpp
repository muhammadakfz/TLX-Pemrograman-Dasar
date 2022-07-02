#include <iostream>
using namespace std;

int n;
int tulis[1001];
bool pernah[1001];

void func(int kedalaman) {
    if (kedalaman >= n) {
        bool zigzag = true;
        for (int i = 0; i < n-2; i++) {
            if (!((tulis[i+1] > tulis[i] && tulis[i+1] > tulis[i+2])||(tulis[i+1] < tulis[i] && tulis[i+1] < tulis[i+2]))) {
                zigzag = false;
            }            
        }
        if (zigzag) {
            for (int i = 0; i < n; i++) {
                cout << tulis[i];
            }
            cout << endl; 
        }
    } else {
        for (int i = 1; i <= n; i++) {
            if (!pernah[i]) {
                pernah[i] = true;
                tulis[kedalaman] = i;
                func(kedalaman + 1);
                pernah[i] = false;
            }   
        } 
    }
}

int main() {
    cin >> n;
    func(0);
    cin.get();
    return 0;
}
