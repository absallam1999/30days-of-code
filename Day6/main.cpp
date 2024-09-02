#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    string s;
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> s;
        for(int even = 0; even < s.size(); even += 2) {
            cout << s[even];
        }
        cout << " ";
        for(int odd = 1; odd < s.size(); odd += 2) {
            cout << s[odd];
        }
        cout << '\n';
    }
    return 0;
}
