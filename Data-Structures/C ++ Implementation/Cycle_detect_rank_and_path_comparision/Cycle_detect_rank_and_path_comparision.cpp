#include<iostream>

using namespace std;

//If two elements not in same set, perform Union(), else a cycle is found.

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

struct subset
{
    int parent;
    int _rank;
};

Graph* createGraph(int V, int E)
{
    Graph *graph = new Graph;
    graph->edge = new Edge[E];
    graph ->E = E;
    graph ->V = V;
    return graph;
}

// A utility function to find set of an element i
// (uses path compression technique)
int Find(subset subsets[], int i)
{
    if(subsets[i].parent != i)
        subsets[i].parent = Find(subsets, subsets[i].parent);

    return subsets[i].parent;
}

void Union(subset subsets[], int x, int y)
{
    int xRoot = Find(subsets, x);
    int yRoot = Find(subsets, y);

    /*
    THis bit is useless since rank of root is always 0.
    if (xRoot < yRoot)
    {
        subsets[xRoot]->parent = yRoot;
        subsets[yRoot]->_rank++;
    }
    else if (xRoot > yRoot)
    {
        subsets[yRoot]->parent = y\xRoot;
        subsets[xRoot]->_rank++;
    }
    */

    subsets[yRoot].parent = xRoot;
    subsets[xRoot]._rank++;
}

bool isCycle(Graph *graph)
{
    int V = graph->V;
    //In this method, every vertex of the graph is assigned a new subset.
    subset * subsets = new subset[V];
    //Initialize all subset values such that their parent is themselves(none) and their rank is 0.
    for(int i = 0; i < V; i++)
    {
        subsets[i].parent = i;
        subsets[i]._rank = 0;
    }
    //For every single edge in the graph, find the sets that the source and destination belong to.
    for(int i = 0; i < graph->E; i++)
    {
        //cout<<i<<endl;
        int x = Find(subsets, graph->edge[i].src);
        //cout<<x<<endl;
        int y = Find(subsets, graph->edge[i].dest);

        //cout<<x<<" "<<y<<endl;

        if(x != y)
            Union(subsets, x, y);
        else
            return true;
    }
    return false;
}

int main()
{
    int V = 4, E = 3;
    Graph *graph = createGraph(V, E);

    //add edge 0-1
    graph->edge[0].src = 0;
    graph->edge[0].dest = 1;

    // add edge 1-2
    graph->edge[1].src = 1;
    graph->edge[1].dest = 2;

    // add edge 0-2
    graph->edge[2].src = 2;
    graph->edge[2].dest = 3;

    if (isCycle(graph))
        cout<< "graph contains cycle";
    else
        cout<<"graph does not contain a cycle";

    return 0;
}

