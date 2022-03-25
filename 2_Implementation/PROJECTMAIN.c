//C-PROGRAMMING PROJECT:
//UNIT CONVERSIONS:
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void myflush ( FILE *in )
{
  int ch;
  do
    ch = fgetc ( in ); 
  while ( ch != EOF && ch != '\n' ); 

  clearerr ( in );
}
void mypause ( void ) 
{ 
  printf ( "\n Press Enter to know some cool facts  :) . . . \n ");
  fflush ( stdout );
  getchar();
} 

int main() 
{
  char category;
  float VolumeChoice;
  float TimeChoice;
  float MassChoice;
  float EnergyChoice;
  float userinputml; 
  float userinputL; 
  float userinputMinutes; 
  float userinputSeconds;
  float userinputKg;
  float userinputG;
  float userinputCal; 
  float userinputJoule; 
  float MililitretoLitre;
  float LitretoMililitre; 
  float Minutestoseconds ; 
  float KgtoG;
  float GtoKg;
  float SecondstoMinutes; 
  float CaltoJoules; 
  float JoulestoCal; 
  printf("Hello!I Welcome you all to Unit Converter! \n");
  printf("Here is the list of conversation to choose from: \n");
  printf("VOLUME(V), TIME(T), ENERGY(E), MASS(M) \n");
  printf("Please enter any of the above mentioned letter that you want to convert.\n");
  scanf("%c",&category);
  
  if(category == 'V'){
      printf("Welcome to Volume unit Converter! \n");
      printf("Here is a list of conversations to choose from: \n");
      printf("Enter 1 for Mililitre to litre. \n");
      printf("Enter 2 for Litre to Mililitre. \n");
      scanf("%f",&VolumeChoice);
      if(VolumeChoice == 1){
          printf("Please enter the Militre value you want to convert: \n");
          scanf("%f",&userinputml);
          MililitretoLitre=  ((userinputml / 1000));
          printf("Litre: %f",MililitretoLitre);
          myflush ( stdin );
          mypause();
          printf("There is no such logic behind the naming of C Language. It was developed to cover all the inabilities of B language (simplified version of BCPL). So, it was just named C as it is next to B in the English alphabets.");
          
      }
      else if(VolumeChoice == 2){
        printf("Please enter the Litre value you want to convert: \n");
        scanf("%f",&userinputL);
        LitretoMililitre = (userinputL*1000);
        printf("Mililitre: %f",LitretoMililitre);
        myflush ( stdin );
        mypause();
        printf("C is the only programming language that exists for such a long period and still it is widely used.");
        
      }
      else
        printf("Please enter the correct Choice. \n");
  }
  
  else if(category == 'T') {
      printf("Welcome to Time unit conversion! \n");
      printf("Here is a list of conversations to choose from: \n");
      printf("Enter 1 for Minutes to Seconds. \n");
      printf("Enter 2 for Seconds to Minutes \n");
      scanf("%f",&TimeChoice);
      if(TimeChoice == 1){
          printf("Please enter the Minutes value to convert: \n");
          scanf("%f",&userinputMinutes);
          Minutestoseconds = userinputMinutes * 60;
          printf("Converted the given Minutes into seconds: %f",Minutestoseconds);
          myflush ( stdin );
          mypause();
          printf("C is the basis of many other programming languages like C++, Java, JavaScript, Go, C#, PHP, Python, Perl, C-shell and many more.");
      }
      else if(TimeChoice == 2){
          printf("Please enter the Seconds value to convert: \n");
          scanf("%f",&userinputSeconds);
          SecondstoMinutes = (userinputSeconds * (1/60));
          printf("Converted the given Seconds to minutes: %f",SecondstoMinutes);
          myflush ( stdin );
          mypause();
          printf("Unix was one of the first operating system kernels implemented in a language other than assembly and that was C.");
      }
      else
        printf("Please enter the correct choice. \n");
  }
  
    else if(category == 'M'){
        printf("Welcome to Mass unit conversions! \n");
        printf("Here is a list of conversations to choose from: \n");
      printf("Enter 1 for Kilograms to Grams \n");
      printf("Enter 2 for Grams to Kilograms \n");
      scanf("%f",&MassChoice);
      if(MassChoice == 1){
          printf("Please enter the kilogram value: \n");
          scanf("%f", &userinputKg);
          KgtoG = userinputKg * 1000;
          printf("Grams: %f", KgtoG);
          myflush ( stdin );
          mypause();
          printf("sizeof is the only operator which is also a keyword.");
      }
      else if(MassChoice == 2){
          printf("Please enter the gram value: \n");
          scanf("%f", &userinputG);
          GtoKg = userinputG / 1000;
          printf("Kilograms: %f", GtoKg);
          myflush ( stdin );
          mypause();
          printf("In printf() and scanf(), f stands for formatted not function.");
      }
}
    else if(category == 'E'){
      printf("Welcome to Energy unit conversion! \n");
      printf("Here is a list of conversations to choose from: \n");
      printf("Enter 1 for Calories to Joules \n");
      printf("Enter 2 for Joules to Calories \n");
      scanf("%f",&EnergyChoice);
      if(EnergyChoice == 1){
          printf("Please enter the Calories value: \n");
          scanf("%f",&userinputCal);
          CaltoJoules= userinputCal * 4184;
          printf("Joules: %f",CaltoJoules);
          myflush ( stdin );
          mypause();
          printf("Compiler generates assembly code not machine code and then assembler generates the machine code.");
      }
      
      else if(EnergyChoice == 2) {
          printf("Please enter the Joules value: \n");
          scanf("%f",&userinputJoule);
          JoulestoCal = (userinputJoule/4184) ;
          printf("Calories: %f",JoulestoCal);
          myflush ( stdin );
          mypause();
          printf("sizeof operator cannot tell us the size of functions because this operator works on compile time and functions loads in memory at run time.");
      }
      else 
        printf("Please enter the correct choice. \n");
   }
}


