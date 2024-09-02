#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
    private:
    vector<int> elements;
  
  	public:
  	int maximumDifference;

	// Add your code here
    Difference(vector<int> &v) {
        for(int i = 0; i < v.size(); i++){
            elements.push_back(v[i]);
        }
    }
    void computeDifference() {
        int max_num = elements[0];
        int min_num = elements[0];
        
        for(int& num: elements) {
            max_num = max(num, max_num);
            min_num = min(num, min_num);
        }
        maximumDifference = max_num - min_num;
    }

}; // End of Difference class

int main() {
    int N;
    cin >> N;
    
    vector<int> a;
    
    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;
        
        a.push_back(e);
    }
    
    Difference d(a);
    
    d.computeDifference();
    
    cout << d.maximumDifference;
    
    return 0;
}