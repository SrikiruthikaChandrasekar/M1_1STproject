//C PROGRAMMING PROJECT:
//Calculator to find Resistance, Capacitance and Photoelectric current of a circuit.

#include<stdio.h>
int main() {
   int r[10], num, i, Rs = 0;
   printf("Enter the number of Resistances : ");
   scanf("%d", &num);
   printf("\nEnter Value of Each Resistance : n");
   for (i = 0; i < num; i++) {
      printf("\n R%d : ", i + 1);
      scanf("%d", &r[i]);
   }
   for (i = 0; i < num; i++) {
      Rs = Rs + r[i];
   }
   printf("\nEquivalent Series Resistance : %d Kohm", Rs);
{
    float Q,V,C;
    printf("\n To find Capacitance");
    printf("\n Enter the value of Q");
    scanf("%f", &Q);
    printf("\n Enter the value of V");
    scanf("%f", &V);
    C=Q/V;
    printf("Capacitance of a capacitor is: %f Farad",C);

{
    float H,W,E;
    printf("\n To find the photo electric current");
    printf("\n Enter the value of W, the work function");
    scanf("%f", &W);
    printf("\n Enter the value of E, the kinetic energy");
    scanf("%f", &E);
    H=W+E;
    printf("The total Photoelectric current produced is : %f eV", H);
    return (0);
}
}
}


Sample output:
Enter the number of Resistances : 2
Enter Value of Each Resistance : n
 R1 : 1
 R2 : 1
 Equivalent Series Resistance : 2 Kohm
 To find Capacitance
 Enter the value of Q 2
 2

 Enter the value of V 5
 5
Capacitance of a capacitor is: 0.400000 Farad
 To find the photo electric current
 Enter the value of W, the work function 5
 5

 Enter the value of E, the kinetic energy 6
 6
The total Photoelectric current produced is : 11.000000 eV
