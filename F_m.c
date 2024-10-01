#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    double a = 1, c = 1, F_F0, T, Tc = 2;
    int i=0;

    double m[] = {
        2.00000, 2.00000, 1.99995, 1.99872, 1.99310,
        1.98059, 1.96038, 1.93248, 1.89706, 1.85411, 
        1.80337, 1.74424, 1.67581, 1.59676, 1.50523,
        1.39857, 1.27272, 1.12100, 0.93054, 0.66869,
        0.00000,
    };

    FILE* fichier = fopen("Elibre.dat", "w");
    for (T = 0.00001; T <= 4.1; T += 0.1) {
        F_F0 = (a * (T - Tc) * m[i]* m[i]) + (c * pow(m[i], 4));
        fprintf(fichier, "%.5f  %.5f %.5f\n",F_F0,m[i]); 
        fprintf(fichier, "%.5f  %.5f %.5f\n",F_F0,-m[i]); 
        i++; 
    }

    fclose(fichier);
    return 0;
    
} // By Amine Slimani
