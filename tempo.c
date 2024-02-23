/*
This was my submission for LeettCode problem on bipartite graphs
https://leetcode.com/problems/is-graph-bipartite/
*/
#include<stdboool.h>

// idea: a graph is bipartite if and only if it has no cycles of odd lenght. (can be proved via contradiction)
// I wrote a a modified depth first search to check for any odd lenght loops.


// Result: only 68/81 test cases passed
// Drawback: This solution exceeded the given time limit.
//          I guess I'll have to craft an iterative soluttion now huh.
bool nooddcycle(int** G, int graphSize, int* graphColSize, int u, int parent, int org, short flag){
    for(int i=0;i<graphColSize[u] && G[u][i] != parent;i++){
        if(G[u][i]==org){
            if(flag) return 0;
            else continue;
        }else if(!nooddcycle(G,graphSize,graphColSize,G[u][i],u,org,! flag)) return 0;
    }
    return 1;
}
bool isBipartite(int** graph, int graphSize, int* graphColSize) {
    for(int i=0;i<graphSize;i++)
        if(!nooddcycle(graph,graphSize,graphColSize,i,i,i,1)) return 0;
    return 1;
}