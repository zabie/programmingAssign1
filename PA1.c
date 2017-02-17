// Caroline Teicher and Zabie Elmgren
// CS124 Programming Assignment 1
// February 27,2017


// We will be considering complete, undirected graphs. A graph with n vertices is complete if all possible
// edges are present in the graph.

// Consider the following types of graphs:
// • Complete graphs on n vertices, where the weight of each edge is a real number chosen uniformly at
// random on [0, 1].

// • Complete graphs on n vertices, where the vertices are points chosen uniformly at random inside the
// unit square. (That is, the points are (x, y), with x and y each a real number chosen uniformly at
// random from [0, 1].) The weight of an edge is just the Euclidean distance between its endpoints.
// • Complete graphs on n vertices, where the vertices are points chosen uniformly at random inside the
// unit cube (3 dimensions) and hypercube (4 dimensions). As with the unit square case above, the
// weight of an edge is just the Euclidean distance between its endpoints.

// Your first goal is to determine in each case how the expected (average) weight of the minimum
// spanning tree (not an edge, the whole MST) grows as a function of n. This will require implementing an
// MST algorithm, as well as procedures that generate the appropriate random graphs. (You should check
// to see what sorts of random number generators are available on your system, and determine how to seed
// them, say with a value from the machine’s clock.) You may implement any MST algorithm (or algorithms!)
// you wish; however, I suggest you choose carefully

#include <time.h>
#include <stdlib.h>

int RAND_MAX = 1;

int MSTaverage(int graph[v][v]){
    bool visited[v];
    int unvisited[v];
    int vertStart;
    int verEnd;

    // intialize every vertex visited to false;
    for (int i =0; i <vertices.length(); i++){
        visited[i] = false;
    }

    while i < vertices{
        if veritices have not been visited 
            mark as visited
            extract minimum edge and put on prioqirty que 

            if min edge leads to unviisted edge
                add to MST 
                continue traversing 

    }
    int average = weight / graph.length();

}

int graphAvg(int MST weight){
    print grahphs for many b
}

struct edge{
    int start;
    int end;
    int weight;
}

int calEdgeWeight(){

// given a random value generate random weight edge 
    srand(time(NULL));
    int r = rand(); 
}
