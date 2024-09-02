#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    string S;
    getline(cin, S);

    try {n = stoi(S);}
    catch(invalid_argument &e) {
        cout << "Bad String\n";
        return -1;
    }
    cout << n << '\n';

    return 0;
}
