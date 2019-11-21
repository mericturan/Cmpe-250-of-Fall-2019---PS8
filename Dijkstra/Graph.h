//CMPE250 - Fall 2019
//PS8 - Dijkstra's Algorithm

#ifndef BFS_GRAPH_H
#define BFS_GRAPH_H

#include<set>
#include<list>
#include<vector>
#include<iostream>
#include<limits>

using namespace std;
const int INF = numeric_limits<int>::max();

class Graph {

private:
    int numberOfVertices;    // No. of vertices
    // Pointer to an array containing adjacency lists
    list< pair<int, int> > *adjacencyList;

public:
    Graph(int numberOfVertices);  // Constructor
    ~Graph();  // Destructor
    // Copy constructor is not implemented for sake of simplicity
    // function to add an edge to graph
    void addEdge(int u, int v, int w);

    // prints shortest path from s
    void shortestPath(int s);};


#endif //BFS_GRAPH_H
