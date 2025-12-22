#include <iostream>
using namespace std;

void f(int i, int n) {
    if (i > n) return;

    f(i + 1, n);          // go deep first
    cout << "Riya" << endl;  // print while returning
}

int main() {
    int n;
    cin >> n;
    f(1, n);
    return 0;
}
