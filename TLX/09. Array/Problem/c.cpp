#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n;

    int arr[1001];
   
    for(int i = 1; i < 1001; i++)  arr[i] = 0;

    for(int i = 0; i < n; i++) {
        cin >> m;
        arr[m]++;
    }

    int mode = 0, mx = 0;
    for(int i = 1; i < 1001; i++) {
        if(arr[i] >= mx) {
            mx = arr[i];
            mode = i;
        }
    }

    cout << mode << endl;
    cin.get(); 
    return 0;
}
