#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    double a = 1, c = 1, T, Tc = 2,m;
    int i=0;
    FILE* fichier = fopen("aim.dat", "w");
    for (T = 0.00001; T <= 3.1; T += 0.05) {
       if(T<Tc){ m =sqrt(a * (Tc - T) / (2 * c));}
       else { m = 0 ;}
        fprintf(fichier, "%.5f  %.5f \n",T,m); 
        i++; 
    }
    fclose(fichier);
    return 0;
} 
// By Amine Slimani
