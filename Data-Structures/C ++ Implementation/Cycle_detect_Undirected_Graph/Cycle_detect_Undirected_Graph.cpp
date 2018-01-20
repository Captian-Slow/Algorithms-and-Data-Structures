#include<iostream>

using namespace std;

struct Edge
{
    int src;
    int dest;
};

struct Graph
{
    Edge *edge;
    int V, E;
};

Graph* createGraph(int V, int E)
{
    Graph *graph = new Graph;
    Edge *edge = new Edge[E];
    graph ->E = E;
    graph ->V = V;
    return graph;
}

bool isCycle(Graph *graph)
{
    int *parent = new int[graph->V];
    //Initialize all parent values to -1
    for(int i = 0; i < 3; i++)
        parent[i] = -1;

    for(i = 0; i < graph->E; i++)
    {
        graph->edge[i].src
    }

}

int main()
{
    int V = 3, E = 3;
    Graph *graph = createGraph(V, E);

    //add edge 0-1
    graph->edge[0].src = 0;
    graph->edge[0].dest = 1;

    // add edge 1-2
    graph->edge[1].src = 1;
    graph->edge[1].dest = 2;

    // add edge 0-2
    graph->edge[2].src = 0;
    graph->edge[2].dest = 2;

    if (isCycle(graph))
        printf( "graph contains cycle" );
    else
        printf( "graph doesn't contain cycle" );

    return 0;
}
