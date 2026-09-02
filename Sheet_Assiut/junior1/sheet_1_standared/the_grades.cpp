#include <bits/stdc++.h>
using namespace std;

using ll = long long;
struct student {
    string name;
    int ar;
    int math;
    int sci;
    int en;
    int total;
};

bool srt(student x,student y) {
    if (x.total == y.total) {
        return x.name < y.name;
    }

    return x.total > y.total;
}

void solve() {
    int n;
    cin >> n;

    vector<student> students(n);

    for (int i=0; i < n; ++i) {
        student st;
        cin >> st.name >> st.ar >> st.math >> st.sci >> st.en;
        st.total = st.ar + st.math + st.sci + st.en;
        students.push_back(st);
    }

    sort(students.begin(), students.end(), srt);

    for (int i=0; i < n; ++i) {
        cout << students[i].name << " " << students[i].total << " "
        << students[i].ar << " " << students[i].math << " " << students[i].sci
        << " " << students[i].en << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}