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
#include <stdio.h>
#include <math.h>

int RAND_MAX = 1;

int main(){
    srand((unsigned int)time(NULL));
    generateGraph1(n);
    generateGraph2();
    generateGraph3();
}


// generate a random float for edge weights
float generateRand(){
    return (float)rand()/(float)(RAND_MAX);
}

struct graph{
    int nodes;
    int edges;
    void* distance;
}

graph generateGraph1(int nodes){
    float (*distance)[nodes] = malloc(sizeof(float[nodes][nodes]));
    struct graph *finGraph = malloc(sizeof(struct graph));
    finGraph->nodes = nodes;
    finGraph->distance = distance;

    for (int i=0;i<nodes;i++){
        for (int a=0;a<i;a++){
            float rand = generateRand();
            distance[i][a] = rand;
            distance[a][i] = rand;
        }

        distance[i][i] = 0;
    }


    return finGraph;
}

generateGraph2(int nodesArray[nodes]){
    float (*distance)[nodes] = malloc(sizeof(float[nodes][nodes]));
    struct graph *finGraph = malloc(sizeof(struct graph));
    finGraph->nodes = nodes;
    finGraph->distance = distance;


    for (int i=0;i<nodes;i++){
        for (int a=0;a<i;a++){
            float a1 = generateRand();
            float a2 = generateRand();
            float b1 = generateRand();
            float b2 = generateRand();
            float dist1 = (a1-a2)**2;
            float dist2 = (b1-b2)**2;
            float dist = sqrt (dist1 + dist2);
            distance[i][a] = dist;
            distance[a][i] = dist;
        }

        distance[i][i] = 0;
    }

    return finGraph;
}

generateGraph3(int nodesArray[nodes]){
    float (*distance)[nodes] = malloc(sizeof(float[nodes][nodes]));
    struct graph *finGraph = malloc(sizeof(struct graph));
    finGraph->nodes = nodes;
    finGraph->distance = distance;


    for (int i=0;i<nodes;i++){
        for (int a=0;a<i;a++){
            float dist1 = (a1-a2)**2;
            float dist2 = (b1-b2)**2;
            float dist = sqrt (dist1 + dist2);
            distance[i][a] = dist;
            distance[a][i] = dist;
        }

        distance[i][i] = 0;
    }

    return finGraph;
}
int primAlgo(int graph[v][v], distance){
    
    int min = INFINITY; // how to actual assign to infinity ?
     
    int final[nodes];
    bool visited[nodes];
    for (int i=0;i<nodes;i++){
        visited[i] = false;
    }

    // random value within appropriate range
    int s = (int)generateRand() * *inGraph->nodes; 
    
    visited[0] = s;

    // search through distance, min edge weight 
    for (int i=0;i<nodes;i++){
        for (int v=0;v<nodes;v++){
            if (visited[i] == -false){
                if (distance[i][v]<min){
                    if(visited[i] == false && visited[b] == true ||
                        visited[b] == true && visited[i] == false {
                        min = distance[i][v];
                    }
                }
            }
            
            final[i] = min;
        }
    
    float average;
    
    for (int i=0; i<final.length();i++){
        average = average + final[i];
    }

    average = average/.(nodes-1);
    
    return average;
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

