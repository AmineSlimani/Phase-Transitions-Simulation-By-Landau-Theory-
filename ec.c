#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    double   Tc = 2,logT,logM,logX;
    int i=0;

    double T[] = { 1.20001, 1.30001, 1.40001, 1.50001, 1.60001, 1.70001, 1.80001};
    double M[] = { 1.67581, 1.59676, 1.50523, 1.39857, 1.27272, 1.12100, 0.93054};
    double X[] = { 0.31250, 0.35715, 0.41667, 0.50001, 0.62502, 0.83336, 1.25006};


    FILE* fichier = fopen("exp.dat", "w");
    
    for (i = 0; i < 7; i+= 1) {
    
    	logT = log(fabs(T[i]-Tc));
    	logM = log(M[i]);
     	logX = log(X[i]);

        
        fprintf(fichier,"%.5f\t %.5f \t %.5f\t \n",logT,logM,logX);  
    }

    fclose(fichier);
    return 0;
} 
// By Amine Slimani


