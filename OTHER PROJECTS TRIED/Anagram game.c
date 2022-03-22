//C PROJECT:

#include <stdio.h>

int check_anagram(char str1[], char str2[])
{
int count1[26] = {0}, count2[26] = {0}, i = 0;

while (str1[i] != '\0')         

{
count1[str1[i] - 'a']++;
i++;
}

i = 0;

while (str2[i] != '\0')              
{
count2[str2[i] -'a']++;
i++;
}

for (i = 0; i < 26; i++)
{
if (count1[i] != count2[i])
return 0;
}

return 1;
}

int main()
{
char *str1, *str2;
int size = 100;

printf("Enter the first string\n");
str1 = (char*)malloc(size);
getline(&str1, &size, stdin);

printf("Enter the second string\n");
str2 = (char*)malloc(size);
getline(&str2, &size, stdin);

if (check_anagram(str1, str2) == 1)
printf("The strings are anagrams of each other.\n");
else
printf("The strings are not anagrams of each other.\n");

return 0;
}


