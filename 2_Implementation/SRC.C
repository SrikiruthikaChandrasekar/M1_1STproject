//UNIT CONVERTOR::
//SRI KIRUTHIKA CHANDRASEKAR
#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main() 
{
  char category;
  int n, *ptr;
  float VolumeChoice;
  float TimeChoice;
  float EnergyChoice;
  float userinputml; 
  float userinputL; 
  float userinputMinutes; 
  float userinputSeconds; 
  float userinputCal; 
  float userinputJoule; 
  float MililitretoLitre;
  float LitretoMililitre; 
  float Minutestoseconds ; 
  float SecondstoMinutes; 
  float CaltoJoules; 
  float JoulestoCal; 
  printf("Hello!I Welcome you all to Unit Converter! \n");
  printf("Here is the list of conversation to choose from: \n");
  printf("VOLUME(V), TIME(T), ENERGY(E)\n");
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
          ptr = (int*) malloc(n * sizeof(int));
          if(ptr == NULL)
          {
              printf("Error! memory not allocated.");
              exit(0);
          }
          MililitretoLitre=  ((userinputml / 1000));
          printf("Litre: %f",MililitretoLitre);
         
         
          free(ptr);
          
      }
      else if(VolumeChoice == 2){
        printf("Please enter the Litre value you want to convert: \n");
        scanf("%f",&userinputL);
        ptr = (int*) malloc(n * sizeof(int));
          if(ptr == NULL)
          {
              printf("Error! memory not allocated.");
              exit(0);
          }
        LitretoMililitre = (userinputL*1000);
        printf("Mililitre: %f",LitretoMililitre);
      }
      else
        printf("Please enter the correct Choice. \n");
        free(ptr);
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
          ptr = (int*) malloc(n * sizeof(int));
          if(ptr == NULL)
          {
              printf("Error! memory not allocated.");
              exit(0);
          }
          Minutestoseconds = userinputMinutes * 60;
          printf("Converted the given Minutes into seconds: %f",Minutestoseconds);
          free(ptr);
      }
      else if(TimeChoice == 2){
          printf("Please enter the Seconds value to convert: \n");
          scanf("%f",&userinputSeconds);
          ptr = (int*) malloc(n * sizeof(int));
          if(ptr == NULL)
          {
              printf("Error! memory not allocated.");
              exit(0);
          }
          SecondstoMinutes = (userinputSeconds / 60);
          printf("Converted the given Seconds to minutes: %f",SecondstoMinutes);
      }
      else
        printf("Please enter the correct choice. \n");
        free(ptr);
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
          double *ptr = (double*) malloc(n * sizeof(double*));
          if(ptr == NULL)
          {
              printf("Error! memory not allocated.");
              exit(0);
          }
           CaltoJoules= userinputCal * 4184;
          printf("Joules: %f",CaltoJoules);
          free(ptr);
      }
      else if(EnergyChoice == 2) {
          printf("Please enter the Joules value: \n");
          scanf("%f",&userinputJoule);
          double *ptr = (double*) malloc(n * sizeof(double*));
          if(ptr == NULL)
          {
              printf("Error! memory not allocated.");
              exit(0);
          }
          JoulestoCal = (userinputJoule/4184) ;
          printf("Calories: %f",JoulestoCal);
          free(ptr);
      }
      else 
        printf("Please enter the correct choice. \n");
        }
   }
