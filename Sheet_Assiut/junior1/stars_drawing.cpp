#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int rows, cols;
    cin >> rows >> cols;
    vector<vector<int>> matrix(rows, vector<int>(cols, 0));
    vector<vector<bool>> covered(rows, vector<bool>(cols, 0));
    for (int i =0; i < rows; ++i) {
        string x;
        cin >> x;
        for (int j =0; j < cols; ++j) {
            if (x[j] == '*') {
                matrix[i][j] = 1;
            }
        }
    }

    struct star {
        int x;
        int y;
        int size;
    };

    vector<star> stars;

    for (int i =0; i < rows; ++i) {
        for (int j =0; j < cols; ++j) {
            int star_size = 0;
            int star_row, star_col;

        if (i - 1 >= 0 && j - 1 >= 0 && i + 1 < rows && j + 1 < cols) {
                if (matrix[i][j]&&
                    (matrix[i - 1][j] ==1)&&
                    (matrix[i+ 1][j] ==1)&&
                    (matrix[i][j + 1] ==1)&&
                (matrix[i][j - 1] ==1)) {
                star_size++;
                star_row = i;
                star_col = j;
                for (int boundry = 2; boundry <= 50; ++boundry) {
                    if (i - boundry < 0 || j - boundry < 0 || 
                            i + boundry >= rows || j + boundry >= cols) {
                    break;
                    }
                    if (matrix[i][j]&&
                        (matrix[i - boundry][j]== 1)&&
                        (matrix[i+ boundry] [j]== 1)&&
                        (matrix[i][j + boundry]== 1)&&
                        (matrix[i][j - boundry]== 1)) {
                            star_size++;
                        } else {
                            break;
                        }
                    }
                    covered[star_row][star_col] = 1; 
                    for (int d = 1; d <= star_size; ++d) {
                        covered[star_row - d][star_col] = 1;
                        covered[star_row + d][star_col] = 1;
                        covered[star_row][star_col - d] = 1;
                        covered[star_row][star_col + d] = 1;
                    }
                    star str = {star_row, star_col, star_size};
                    stars.push_back(str);
                }
            }
        }
    }

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (matrix[i][j] == 1 && covered[i][j] == 0) {
                cout << -1 << "\n";
                return;
            }
        }
    }

    int stars_size = stars.size();
    cout << stars_size << "\n";
    for (int i =0; i < stars_size; ++i) {
        cout << stars[i].x + 1 << " "
         << stars[i].y + 1<< " " 
         << stars[i].size << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}