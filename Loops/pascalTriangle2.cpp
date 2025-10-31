#include <iostream>
#include <vector>
using namespace std;

vector<int> getRow(int rowIndex) {
    vector<int> row = {1};  
    long long val = 1;      
    
    for (int k = 1; k <= rowIndex; ++k) {
        val = val * (rowIndex - k + 1) / k;
        row.push_back((int)val);
    }
    
    return row;
}

int main() {
    int rowIndex;
    cout << "Enter row index: ";
    cin >> rowIndex;
    
    vector<int> result = getRow(rowIndex);
    
    cout << "Row " << rowIndex << ": [";
    for (int i = 0; i < result.size(); ++i) {
        cout << result[i];
        if (i != result.size() - 1) cout << ", ";
    }
    cout << "]" << endl;
    
    return 0;
}
