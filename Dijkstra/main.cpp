//CMPE250 - Fall 2019
//PS8 - Dijkstra's Algorithm

#include <iostream>

#import "Graph.h"
// Driver program to test Dijkstra
int main() {

    Graph graph(6);

    //  making above shown graph
    graph.addEdge(0, 1, 2);
    graph.addEdge(0, 2, 4);
    graph.addEdge(1, 2, 81);
    graph.addEdge(1, 3, 4);
    graph.addEdge(1, 4, 2);
    graph.addEdge(2, 4, 3);
    graph.addEdge(3, 5, 2);
    graph.addEdge(4, 3, 3);
    graph.addEdge(4, 5, 2);

    graph.shortestPath(0);

    return 0;
}