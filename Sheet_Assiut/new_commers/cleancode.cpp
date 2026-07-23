#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    string line;

    bool comment_block_is_opened = false;
    while (getline(cin, line)) {
        if (!line.empty() && line.back() == '\r') {
            line.pop_back();
        }
        string cleaned_line;

        for (int i =0; i < line.size(); ++i) {
             if (comment_block_is_opened) {
                if (i + 1 < line.size() &&
                    line[i] == '*' &&
                    line[i + 1] == '/') {
                    comment_block_is_opened = false;
                    i++;
                }
                continue;
            }

            if (i + 1 < line.size() &&
                line[i] == '/' &&
                line[i + 1] == '*') {
                comment_block_is_opened = true;
                i++; 
                continue;
            }

            if (i + 1 < line.size() &&
                line[i] == '/' &&
                line[i + 1] == '/') {
                break;
            }

            cleaned_line += line[i];
        }
        bool blank = true;

        for (char c : cleaned_line) {
            if (!isspace((unsigned char)c)) {
                blank = false;
                break;
            }
        }

        if (!blank)
            cout << cleaned_line << '\n';
        
    }

    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}