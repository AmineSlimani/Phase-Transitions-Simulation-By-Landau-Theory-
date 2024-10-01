#include <stdio.h>
#include <math.h>
#include <stdlib.h>

double J =1.,X,a=1.,c=1.,Tc=1.5,Alpha=1.,C0=0.,T,Cp ,k = 1., epsilon = 1.e-15;



int main() {
FILE* fichier = fopen("landau.dat", "w");
if (fichier == NULL) {
printf("Error opening file.\n");
return 1;
}

for (T = 0.00001; T <= 4; T += 0.1) {

if (T > Tc ){
    X = 1/(2*a*(T-Tc)); 
}
else if (T < Tc ){
    X = 1/(4*a*(Tc-T));
}

Cp = C0 - Alpha*log(fabs(T-Tc));

printf("%.5f  \t %.5f \t %.5f\t \n", T,X,Cp);
fprintf(fichier, "%.5f \t %.5f\t %.5f\n", T, X,Cp);
}

fclose(fichier);
return 0;
}

// By Amine Slimani

