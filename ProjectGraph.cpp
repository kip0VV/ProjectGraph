#include <iostream>
#include <vector>

using namespace std; 

int main(){
    vector<vector<int>>graph(4);
    vector<int>rebra;
    graph[0].push_back(1);
    graph[0].push_back(3);
    graph[1].push_back(2);
    graph[2].push_back(3);
    for(int i = 0; i < graph.size(); i++){
        for(const auto& n : graph[i]){
            cout << i << "->" << n << '\n';
        }
    }
}