#include <iostream>
#include <cstring>
using namespace std;

char word[101];
int n;

bool polidrome(int x) {
    if (x == (n/2)) {
        return true;
    } 
    
    if (word[x] == word[n - x - 1]) {
        return polidrome(x+1);
    } else {
        return false;
    }
}

int main() {
    cin >> word;
    n = strlen(word);
    if (polidrome(0)) {
        cout << "YA";
    } else {
        cout << "BUKAN";
    }
    
    cin.get();
    return 0;
}
