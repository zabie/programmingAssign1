// Caroline Teicher and Zabie Elmgren
// CS124 Programming Assignment 1
// February 27,2017

#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

// struct graph generateGraph2(struct graph finGraph);
// int primAlgo(int graph[nodes][nodes], distance);


// generate a random float for edge weights
// *** how to make it dimensions
float generateRand(){
    return (float)rand()/(float)(RAND_MAX);
}

typedef struct graph{
    int nodes;
    int edges;
    float* distance;
} graph;

graph* generateGraph1(int nodes){
    //float (*distance)[nodes] =  malloc(sizeof(float) * nodes * nodes);
    graph *finGraph = malloc(sizeof(graph));
    finGraph->distance = malloc(sizeof(float) * nodes * nodes);
    finGraph->nodes = nodes;
    for (int i=0;i<nodes;i++){
        for (int a=0;a<i;a++){
            float rand = generateRand();
            *((float*) ((finGraph->distance) + (nodes * i) + a)) = rand;
            *((float*) ((finGraph->distance) + (nodes * a) + i)) = rand;
        }

        finGraph->distance[i*nodes + i] = 0;
    }

    return finGraph;
}

// struct graph generateGraph2(int nodes){
//     float(*distance)[nodes] = malloc(sizeof(float[nodes][nodes]));
//     struct graph *finGraph = malloc(sizeof(struct graph));
//     finGraph->nodes = nodes;
//     finGraph->distance = distance;


//     for (int i=0;i<nodes;i++){
//         for (int a=0;a<i;a++){
//             float a1 = generateRand();
//             float a2 = generateRand();
//             float b1 = generateRand();
//             float b2 = generateRand();
//             float dist1 = (a1-a2)*(a1-a2);
//             float dist2 = (b1-b2)*(b1-b2);
//             float dist = sqrt (dist1 + dist2);
//             distance[i][a] = dist;
//             distance[a][i] = dist;
//         }

//         distance[i][i] = 0;
//     }

//     return finGraph;
// }

// struct graph generateGraph3(int nodes){
//     float (*distance)[nodes] = malloc(sizeof(float[nodes][nodes]));
//     struct graph *finGraph = malloc(sizeof(struct graph));
//     finGraph->nodes = nodes;
//     finGraph->distance = distance;


//     for (int i=0;i<nodes;i++){
//         for (int a=0;a<i;a++){
//             float a1 = generateRand();
//             float a2 = generateRand();
//             float b1 = generateRand();
//             float b2 = generateRand();
//             float c1 = generateRand();
//             float c2 = generateRand();
//             float dist1 = (a1-a2)*(a1-a2);
//             float dist2 = (b1-b2)*(b1-b2);
//             float dist3 = (c1-c2)*(c1-c2);
//             float dist = sqrt (dist1 + dist2 + dist3);
//             distance[i][a] = dist;
//             distance[a][i] = dist;
//         }

//         distance[i][i] = 0;
//     }

//     return finGraph;
// }
int primAlgo(int nodes, int graph[nodes * nodes]){
    
    int min = RAND_MAX; 
     
    int final = 0;
    int visited[nodes];
    int distUpdate[nodes];

    for (int i=0;i<nodes;i++){
        distUpdate[i] = RAND_MAX;
    }

    for (int i=0;i<nodes;i++){
        visited[i] = -1;
     }

    // // // random value within appropriate range
    // int s = (int)generateRand() * (*finGraph->nodes); 
    
    // visited[s] = 0; // index into

    // search through distance, min edge weight 
    for (int st=0;st<nodes;st++){
        for (int en=0;en<st;en++){
            if (visited[en] == -1){
                if (distance[en * nodes + st]< distUpdate[en]){
                    // if(visited[en] == -1 && visited[st] == 0 ||
                    //     visited[st] == 0 && visited[en] == -1 {
                        distUpdate[en] = distance[en * nodes + st];
                    }
                }
            }

            int min = pow(2,64)-1;
            
            for (int i=0;i<nodes;i++){
                if (distUpdate[i]< min){
                    min = distUpdate[i];
                }
            }
            final = final + min; // use heaps?
        }
    
    return final / (float)((nodes-1));
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



//}

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

//     for (int i=0;i<n;i++){
//         for (int c=0;c<n;c++){
//             distance[i][c] = 
//         }
//     }

// }

// input pointer to two-dimensional array 

// int graphAvg(int MST weight){
//     print grahphs for many b
// }

// // create node with pointer to next in linked list
// struct node{
//     int source;
//     struct node *next;
// }

// void makepqueue(){
//     int source, sink = -1;
// }

// void insert(int value){
//     if (sink > MAX){
//         printf("cannot insert");
//     }
//     if (source == -1) && (sink == -1)){
//         source++;
//         sink++;
//         pqueue(sink) = value;
//     }
//     else
//         validate(value);
//         sink;;
//     }
// }

// void swap(int *a, int *b){
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

// void minheapify(int *data, int i){
//     int lChild = 2*i +1;
//     int rChild = lChild + 1;
//     int min = i;

//     if(heap[lChild] > heap[i]){
//         min = lChild;
//     }

//     else {
//         min = i;
//     }
//     if(heap[rChild] > heap[min]){
//         min = rChild;
//     }
//     if(min != i){
//         swap(min, i);
//         minheapify(heap, min);
//     }
// }

// void buildheap(int graph[v][v]){
//     for (int i=array.length();i>1;i--){
//         minheapify(graph,i);
//     }
// }

int main( int argc, const char* argv[]){
    srand((unsigned int)time(NULL));
    //generateGraph1(10);
    // generateGraph2();
    // generateGraph3();
}
