#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    short int r_day, r_month, r_year, due_day, due_month, due_year;
    short int fine = 0;
    string line1, line2;
    
    getline(cin, line1);
    istringstream input1(line1);
    input1 >> r_day >> r_month >> r_year;
    
    getline(cin, line2);
    istringstream input2(line2);
    input2 >> due_day >> due_month >> due_year;
    
    if(r_year == due_year) {
        if(r_month == due_month) {
            fine = (r_day - due_day > 0) ? 15 * (r_day - due_day) : 0;
        } else {
            fine = (r_month - due_month > 0) ? 500 * (r_month - due_month) : 0;
        }
    } else {
        fine = (r_year - due_year > 0) ? 10000 : 0;
    }
    cout << fine << '\n';
    return 0;
}
