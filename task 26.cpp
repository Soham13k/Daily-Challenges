#include <iostream>
#include <vector>
using namespace std;

bool dfs(int node, int parent, vector<bool>& visited, vector<vector<int>>& adj) {
    visited[node] = true;

    for (int neighbor : adj[node]) {
        if (!visited[neighbor]) {
            if (dfs(neighbor, node, visited, adj)) 
                return true;
        }
        else if (neighbor != parent) {
 
            return true;
        }
    }
    return false;
}

bool hasCycle(int V, vector<pair<int,int>>& edges) {
    vector<vector<int>> adj(V);

    for (auto edge : edges) {
        adj[edge.first].push_back(edge.second);
        adj[edge.second].push_back(edge.first);
    }

    vector<bool> visited(V, false);

    for (int i = 0; i < V; i++) {
        if (!visited[i]) {
            if (dfs(i, -1, visited, adj)) 
                return true;
        }
    }
    return false;
}

int main() {
    int V = 5;
    vector<pair<int,int>> edges = {{0,1},{1,2},{2,3},{3,4},{4,1}}; 

    if (hasCycle(V, edges)) 
        cout << "true\n";
    else 
        cout << "false\n";

    return 0;
}
