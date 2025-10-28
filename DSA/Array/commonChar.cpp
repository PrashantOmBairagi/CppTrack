#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> commonChars(vector<string>& words) {
    vector<int> minFreq(26, INT_MAX);

   
    for (string word : words) {
        vector<int> freq(26, 0);
        for (char c : word)
            freq[c - 'a']++;

        
        for (int i = 0; i < 26; i++)
            minFreq[i] = min(minFreq[i], freq[i]);
    }

    vector<string> ans;
    for (int i = 0; i < 26; i++) {
        while (minFreq[i]-- > 0)
            ans.push_back(string(1, i + 'a'));
    }

    return ans;
}

int main() {
    vector<string> words = {"bella", "label", "roller"};
    vector<string> result = commonChars(words);

    cout << "Common characters: ";
    for (string c : result)
        cout << c << " ";
    cout << endl;

    return 0;
}
