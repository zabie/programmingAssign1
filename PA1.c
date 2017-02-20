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
int n; // number of total vertices in the graph

// input pointer to two-dimensional array 
int primAlgo(int pointer){
    int visited[v];
    int distance[v];
    int min = 999;
    int nodeco1;
    int nodeco2;
    int total;
    int s = 0; // random value within appropriate range;
    // int mincost;
   
    // int curr;
  //  int i = length of vertices;

    // begin with empty spanning tree 
    // initialize keys for vertices as infinity 
    // int edges[v-1];

    for (int i=0;i<v;i++){
        visited[i] = 0;
        distance[i] = INFINITY;
    }

    // first vertex picked first so initalize to 0
    distance[s] = 0;

    //find vertices not visited and push its edges onto priorityqueue,
    //find min edge and if it leads to an unviisted vertex then add 
    //otherwise take min edge from priorityqueue again 
    
    // while visited does not contain all vertices
    // find cut and pick minimum edge weight

    while priorityqueue(heap) is not empty{
        if visited[i] == 1{
           pop min elemt in priorityqueue to get min weight
                looking at neighborhind nodes - using adjventcy list .Search through lsits that has has one of vertices
                for each vertex, copute edge wegiths bewween with distnace total and if curr is bigger, update with 
                    just calc distance to sum

                if (min > distance[i]){
                    min = distance[i];
                    nodeco1 = i;
                    nodeco2 = i+1 || i-1;
                }
            }
            //add edge to priorityqueue or adjlist
            priorityqueue.enqueue(visited[i]);
            min = priorityqueue.extractMin();
            if createCycle(min) == true{
                priorityqueue.delete(min){
            }
        
            else
                MST[curr] = min;
                curr++;
            }
            i++;
        }
        else 
            min = priorityqueue.extractMin();
            if !visited[curr]{
                MST[curr] = addE;
            }
    }

    int average;
    
    for (int i=0; i<MSTNodes.length();i++){
        average = average + MST[i];
    }

    average = average/MSTnodes.length();

}

int graphAvg(int MST weight){
    print grahphs for many b
}

struct edge{
    int start;
    int end;
    int weight;
}

struct graph{
    int vertices;
    int edges;

}

bool createCycle(edge){
    if visited
    return false;
    else 
        return true;
}
int calEdgeWeight(){

    //given a random value generate random weight edge 
    srand(time(NULL));
    int r = rand(); 
    return r;
}
