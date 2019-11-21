//CMPE250 - Fall 2019
//PS8 - Depth First Search (DFS)

#include "Graph.h"

Graph::Graph(int numberOfVertices)
{
    this->numberOfVertices = numberOfVertices;
    adjacencyList = new list<int>[numberOfVertices];
}

Graph::~Graph() {
    delete[] adjacencyList;
}

void Graph::addEdge(int v, int w)
{
    adjacencyList[v].push_back(w); // Add w to v's list.
}


void Graph::dfsUtil(int v, bool visited[])
{
    // Mark the current node as visited and
    // print it
    visited[v] = true;
    cout << v << " ";

    // Recur for all the vertices adjacent
    // to this vertex
    list<int>::iterator i;
    for (i = adjacencyList[v].begin(); i != adjacencyList[v].end(); ++i)
        if (!visited[*i])
            dfsUtil(*i, visited);
}

// DFS traversal of the vertices reachable from v.
// It uses recursive DFSUtil()
void Graph::depthFirstSearch(int v)
{
    // Mark all the vertices as not visited
    bool visited[numberOfVertices];
    for (int i = 0; i < numberOfVertices; i++)
        visited[i] = false;

    // Call the recursive helper function
    // to print DFS traversal
    dfsUtil(v, visited);
}
