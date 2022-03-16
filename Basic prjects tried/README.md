#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h> //Needed for strcat()
#include <ctype.h>
char NamePrefix[][5] = {
	"", 
	"chan",
	"nar",
	"han",
	"neeru", 
	"Krithi",
	"sud", 
        "kar",
        "vim",
};

	char NameSuffix[][5] = {
	"ri", "ha", "ka", "tha", "ith",
	"al", "um", "ja", "or", "a",
	"sri", "shree", "itur", "ru", "o",
	"y"
};


const char NameStems[][10] = {
	"adhur", "vij", "sur", "kar", "ima",
	"edu", "eesh", "elec", "gru", "hari",
	"jac", "amora", "hum", "liz", "ille",
	"inez", "luv", "hazel", "cardi", "snoop"
};



int main()
{
	char Player1Name[21];
	char cIn; 
	srand((long)time(NULL)); 
	do
	{
		NameGen(Player1Name);
		printf("Generated Name: %s\n\n", Player1Name);
		puts("Would you like to generate another (Y,N): ");
		cIn = get_Char();
	} while (cIn != 'n' && cIn != 'N');

	return 0;
}


char get_Char(void)
{
	char cIn;
	while((cIn = getchar())<27); 
	return cIn;
}


void NameGen(char* PlayerName)
{
	PlayerName[0]=0; 
	strcat(PlayerName, NamePrefix[(rand() % 7)]);
	strcat(PlayerName, NameStems[(rand() % 20)]);
	strcat(PlayerName, NameSuffix[(rand() % 16)]);
	PlayerName[0]=toupper(PlayerName[0]);
	return;
}



SAMPLE OUTPUT:
Generated Name: Evamoraitur

Would you like to generate another (Y,N): 
y
Generated Name: Belladur

Would you like to generate another (Y,N): 
y
Generated Name: Belineptath

Would you like to generate another (Y,N): 
y
Generated Name: Narapollus

Would you like to generate another (Y,N): 
