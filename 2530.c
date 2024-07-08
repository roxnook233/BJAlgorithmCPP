#include <iostream>
using namespace std;

int main() {
    int h, m, s;
    int t;
    cin >> h >> m >> s >> t;

    s += t%60;
    m += (t/60) % 60;
    h += t/3600;

    if(s >= 60) {
        s -= 60;
        m++;
    }
    if(m >= 60) {
        m -= 60;
        h++;
    }
    h %= 24;

    printf("%d %d %d\n", h, m, s);

    return 0;
}
