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

// generate a random float for edge weights
float generateRand(){
    srand((unsigned int)time(NULL));
    return float)rand()/(float)(RAND_MAX);
}

struct graph{
    nodes;
    edges;
    list;
}

struct dict{
    int key;
    int value;
}

graph generateGraph(int nodes){
    graph *graph = malloc(sizeof(graph));
    *g.nodes() = nodes;
    *g.edges() = edges;


    int count = 0;

    for (int i=0;i<nodes;i++){
        for (int a=0;a<i;a++){
            float rand = generateRand();
            distance[i][a] = {nodes[i], rand}
            // do some error checking here

            }

        }
    }

    return distance;
}

void minheapify(int *data, int i){
    int lChild = 2*i +1;
    int rChild = lChild + 1;
    int min = i;

    if(heap[lChild] > heap[i]){
        min = lChild;
    }
    else{
        min = i;
    }
    if(heap[rChild] > heap[min]){
        min = rChild;
    }
    if(largest != i){
        swap(min, i);
        minheapify(heap, min);
    }
}

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int primAlgo(int graph[v][v], distance){
    bool MST[v];
    
    int min = INFINITY; // how to actual assign to infinity ?
     
    int final[v];

    // random value within appropriate range
    int s = (int)generateRand() * *graph.nodes(); 
    
    // initialize values in MST to node visited as false
    for (int i=0;i<v;i++){
        MST[i] = false;
    }

    // first vertex picked first so initalize to 0
    dict *distance[s].value() = 0;
    for (int i=0; i<nodes; i++){
        *dict[i].value() = INFINITE
    }

    for (int i=0;i<v;i++){
        int a = getMin(*graph.key(), MST);
        MST[i] == true;
        if (graph[a][i] && MST[i] == false && graph[a][i] < *graph.key()[i]){
            final[i] = a, *graph.key()[i] = graph[a][i]
        }
    }

    int average;
    
    for (int i=0; i<final.length();i++){
        average = average + final[i];
    }

    average = average/final.length();
    
    return average;
}

int getMin(int key, int mst){
    int minIndex;
    for (int i=0;i<nodes;i++){
        if (MST[i] == false && *dict.key()[i]<min){
            min = key[i], minIndex = i;
        }
    return minIndex;
    
    }
}

    // find vertices not already conencted by adjacent to the one your choosing
    // see it's values and pick minimum
    // mark as visited
    // update key values 


    // while(MST[i)
    // //find vertices not visited and push its edges onto priorityqueue,
    // //find min edge and if it leads to an unviisted vertex then add 
    // //otherwise take min edge from priorityqueue again 
    
    // // while visited does not contain all vertices
    // // find cut and pick minimum edge weight

    // while priorityqueue(heap) is not empty{
    //     if visited[i] == 1{
    //        pop min elemt in priorityqueue to get min weight
    //             looking at neighborhind nodes - using adjventcy list .Search through lsits that has has one of vertices
    //             for each vertex, copute edge wegiths bewween with distnace total and if curr is bigger, update with 
    //                 just calc distance to sum

    //             if (min > distance[i]){
    //                 min = distance[i];
    //                 nodeco1 = i;
    //                 nodeco2 = i+1 || i-1;
    //             }
    //         }
    //         //add edge to priorityqueue or adjlist
    //         priorityqueue.enqueue(visited[i]);
    //         min = priorityqueue.extractMin();
    //         if createCycle(min) == true{
    //             priorityqueue.delete(min){
    //         }
        
    //         else
    //             MST[curr] = min;
    //             curr++;
    //         }
    //         i++;
    //     }
    //     else 
    //         min = priorityqueue.extractMin();
    //         if !visited[curr]{
    //             MST[curr] = addE;
    //         }
    // }



}

// struct node{
//     int source;
//     struct node *next;
// }

// struct adjcList{
//     struct adjcList *head;
// }

// struct graph{
//     int n;
//     struct adjcList* array;
// }

// struct adjcalistNode* newAdjcaListNode(int sink){
//     struct adjcalistNode * newNode = 
//         (struct adjcalistNode*) malloc(sizeof(struct adjcalistNode));
//     no->source = source;
//     no->sink = NULL;
//     return no;
// }
// genereate graph represented by array of adjacency lists
// one list per vertex

// int random_graph(int n){
    // distance[n];
    // graph* graphN = (graph)malloc(sizeof(graph));
    // for (int i=0;i<n;i++){
    //     for (int c=0;i<n;c++){
    //         if(not at tail){
    //             distance[i][c] = {generateRand(),c};
    //             pointer to next in list;
    //         }

    //     }
    //     adj_list[i] = NULL;

    //     // read graph

    //     node1 -> vertex = v;
    //     node1 -> next = NULL;
    // }

    for (int i=0;i<n;i++){
        for (int c=0;c<n;c++){
            distance[i][c] = 
        }
    }

}

// input pointer to two-dimensional array 

int graphAvg(int MST weight){
    print grahphs for many b
}

// create node with pointer to next in linked list
struct node{
    int source;
    struct node *next;
}

void makepqueue(){
    int source, sink = -1;
}

void insert(int value){
    if (sink > MAX){
        printf("cannot insert");
    }
    if (source == -1) && (sink == -1)){
        source++;
        sink++;
        pqueue(sink) = value;
    }
    else
        validate(value);
        sink;;
    }
}


void deleteMin(int value){
    int 
}

void minheapify(heap h, int root){

}

void buildheap(int graph[v][v]){
    for (int i=array.length();i>1;i--){
        minheapify(graph,i);
    }
}

bool createCycle(int node){
    if (visited[node] == true){
        return false;
    }
    else 
        return true;
}

