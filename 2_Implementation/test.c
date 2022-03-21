
#include "inc.h"
#include <unit_conversions.h>
#include <stdio.h>
int main() 
  
  
/* addind datatypes and their values */

/* starts here*/
  

{
  char category;
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
 
  
 
/* It will proceed further only if we choose the category  [V/T/E]
After choosing the catogory we are supposed to give the user input (int/float) value.
and then as per the given conversion formulas it converts the one unit from another */
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
      }
      else if(VolumeChoice == 2){
        printf("Please enter the Litre value you want to convert: \n");
        scanf("%f",&userinputL);
        LitretoMililitre = (userinputL*1000);
        printf("Mililitre: %f",LitretoMililitre);
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
      }
      else if(TimeChoice == 2){
          printf("Please enter the Seconds value to convert: \n");
          scanf("%f",&userinputSeconds);
          SecondstoMinutes = (userinputSeconds * (1/60));
          printf("Converted the given Seconds to minutes: %f",SecondstoMinutes);
      }
      else
        printf("Please enter the correct choice. \n");
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
      }
      else if(EnergyChoice == 2) {
          printf("Please enter the Joules value: \n");
          scanf("%f",&userinputJoule);
          JoulestoCal = (userinputJoule/4184) ;
          printf("Calories: %f",JoulestoCal);
      }
      else 
        printf("Please enter the correct choice. \n");
   }
   /* Test closes here */
  return 0;
}
