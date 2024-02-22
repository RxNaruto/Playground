#include<iostream>
#include<string>

using namespace std;

void duplicates(string s) {
    int len = s.length();
    bool found[256] = {false}; // Assuming ASCII characters
    
    cout << "Duplicate characters: ";
    for(int i = 0; i < len - 1; i++) {
        if(!found[s[i]]) {
            for(int j = i + 1; j < len; j++) {
                if(s[i] == s[j]) {
                    cout << s[i] << " ";
                    found[s[i]] = true;
                    break; // Break out of inner loop after finding the first occurrence
                }
            }
        }
    }
    cout << endl;
}

int main() {
    string s = "aarmaan";
    duplicates(s);
    return 0;
}
