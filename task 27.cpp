#include <bits/stdc++.h>
using namespace std;

int shortestPath(int V, vector<pair<int,int>> &edges, int start, int end) {

    vector<vector<int>> adj(V);
    for(auto &e : edges) {
        adj[e.first].push_back(e.second);
        adj[e.second].push_back(e.first); 
    }

    vector<int> dist(V, -1); 
    queue<int> q;
    
    dist[start] = 0;
    q.push(start);

    while(!q.empty()) {
        int node = q.front();
        q.pop();

        if(node == end) return dist[node]; 

        for(int nei : adj[node]) {
            if(dist[nei] == -1) { 
                dist[nei] = dist[node] + 1;
                q.push(nei);
            }
        }
    }
    return -1; 
}

int main() {
    int V = 6;
    vector<pair<int,int>> edges = {
        {0, 1}, {0, 2}, {1, 3}, {2, 3}, {3, 4}, {4, 5}
    };
    int start = 0, end = 5;

    cout << shortestPath(V, edges, start, end) << endl; 
    return 0;
}
