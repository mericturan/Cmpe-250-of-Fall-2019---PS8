//CMPE250 - Fall 2019
//PS8 - Depth First Search (DFS)

#include <iostream>

#import "Graph.h"
// Driver program to test BFS
int main() {
    // Create a graph
    Graph graph(7);
    graph.addEdge(1, 2);
    graph.addEdge(1, 3);
    graph.addEdge(1, 4);
    graph.addEdge(2, 6);
    graph.addEdge(2, 3);
    graph.addEdge(2, 1);
    graph.addEdge(3, 1);
    graph.addEdge(3, 2);
    graph.addEdge(3, 6);
    graph.addEdge(3, 5);
    graph.addEdge(3, 4);
    graph.addEdge(4, 1);
    graph.addEdge(4, 3);
    graph.addEdge(4, 5);
    graph.addEdge(5, 3);
    graph.addEdge(5, 4);
    graph.addEdge(6, 2);
    graph.addEdge(6, 3);
    cout << "Following is Depth First Traversal"
            " (starting from vertex 1)" << endl;
    graph.depthFirstSearch(1);

    return 0;
}