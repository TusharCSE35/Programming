#include<bits/stdc++.h>
using namespace std;

int a[105];
vector<int>g[105];
string codeward[105];

void dfs(int s, string code) {
    if (s < 26) {
        codeward[s] = code;
        return;
    }
    dfs(g[s][0], code + "0");
    dfs(g[s][1], code + "1");
}


int main() {
    int i, n, x, y, j;
    string s;
    cin >> s;

    n = s.size();
    for (i = 0; i < n; i++) {
        a[s[i] - 'A']++;
    }

    priority_queue<pair<int, int>>q;
    for (i = 0; i < 26; i++) {
        if (a[i])q.push({ -a[i], i});
    }

    pair<int, int>p1, p2;
    int node = 26;
    while (q.size() > 1) {
        p1 = q.top();
        q.pop();
        p2 = q.top();
        q.pop();
        int sum = p1.first + p2.first;
        g[node].push_back(p1.second);
        g[node].push_back(p2.second);
        q.push({sum, node});
        node++;
    }

    node--;
    dfs(node, "");
    for (i = 0; i < 26; i++) {
        if (a[i])
            cout << char(i + 'A') << " " << codeward[i] << endl;
    }

    for (i = 0; i < n; i++) {
        cout << codeward[s[i] - 'A'];
    }
    cout << endl;


    return 0;
}
