#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <limits.h>

#define MAX_NODES 100000
#define MAX_DIMENSION 10
#define FLOAT_MAX 10000.

float prims(int nodes, float (*distanceFn)(int, int, int), int dimension);
float problem1Dist(int a, int b, int d);
float euclideanDist(int a, int b, int d);

float generateRand();

float nodes[MAX_NODES][MAX_DIMENSION];

void populate_nodes(int n, int dimension) {
    for (int i = 0; i < n; ++i)
    {
        for (int d = 0; d < dimension; ++d)
        {
            nodes[i][d] = generateRand();
        }
    }
}

int main(int argc, char *argv[]){
     if(argc != 5) {
        printf("Please enter correct number of command line arguments\n");
     }
     else{
        int numpoints = atoi(argv[2]);
        int numtrials = atoi(argv[3]);
        int dimension = atoi(argv[4]);
        srand((unsigned int)time(NULL));
        float final;
        for (int c=0;c<numtrials;c++){
            populate_nodes(numpoints, dimension);
            if (dimension == 1){
                final = prims(numpoints, problem1Dist, dimension);
            }
            
            else{
                final = prims(numpoints, euclideanDist, dimension);
            }
            
            printf("Prims is %f\n", final);
         }
    }

    return 0;
}

// generate random number
float generateRand(){
    return ((float) (rand() % 1024))/((float) 1024);
}

float problem1Dist(int a, int b, int d){
    return generateRand();
}


float euclideanDist(int x, int y, int dimension){
    float total;
    for (int i=0;i<dimension;i++){
        total += pow(nodes[x][i]-nodes[y][i],2);
    }
    return sqrt(total);
}



float prims(int nodes, float (*distanceFn)(int, int, int), int dimension){
    float distance[nodes];
    for (int i=0;i<nodes;i++){
        distance[i]= FLOAT_MAX;
    }
    

    int in_mst[nodes];

    for (int i=0;i<nodes;i++){
        in_mst[i] = 0;
    }   

    in_mst[0] = 1;
    distance[0]=0.;

    float mstweight = 0.;

    // Trying to reach x
    for (int x=1; x<nodes; x++){
        // Checking if i is a good idea
        for (int i=0; i<nodes; i++){
            if (!in_mst[i]) {
                float temp= distanceFn(x, i, dimension);
                if (temp < distance[i]){
                    distance[i]=temp;
                }
            }
        }

        float min = FLOAT_MAX;
        int minindex = -1;
        for (int i = 0; i < nodes; i++) {
            if (!in_mst[i] && distance[i] < min) {
                min = distance[i];
                minindex = i;
            }
        }

        in_mst[minindex]=1;
        mstweight += min;
    } 

    return mstweight;  
}

