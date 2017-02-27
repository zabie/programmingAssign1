#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <limits.h>

int main(){
    srand((unsigned int)time(NULL));
}

// generate random number
float generateRand(){
    return (float)rand()/(float)(RAND_MAX);
}

int mstweight = 0;

int prims(int nodes){
    int distance[nodes];
    for (int i=0;i<nodes;i++){
        distance[i]= INT_MAX;
    }
    
    distance[0]=0;

    int MST[nodes];

    for (int i=0;i<nodes;i++){
        MST[i] = -1;
    }   

    MST[0] = 0;

    for (int x=0; x<nodes; x++)
    {
        int min = INT_MAX;
        int minindex = NULL;
        for (int i=0; i<nodes; i++){
            if(MST[i]==-1){
                int temp= generateRand();
                if (temp < distance[i]){
                    distance[i]=temp;
                    if (temp < min){
                        min=temp;
                        minindex=i;
                }
            }
        }
        

        }

        MST[minindex]=0;
        mstweight = mstweight + min; 
    } 
    return mstweight/(nodes-1);  
}
