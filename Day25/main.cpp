#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int testCases;
    cin >> testCases;
    
    for(int i = 0; i < testCases; i++) {
        int numToTest;
        cin >> numToTest;
        if(numToTest == 1) {
          cout << "Not prime" << '\n';  
        }
        else if(numToTest == 2) {
         cout << "Prime" << '\n';   
        }
        else {
            for(int j = 2; j <= sqrt(numToTest); j++) {
                if(numToTest % j == 0) {
                    cout << "Not prime" << '\n';
                    break;
                }
                if(j + 1 > sqrt(numToTest)) {
                   cout << "Prime" << '\n'; 
                }
            }
        }
    }
    return 0;
}
