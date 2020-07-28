#include <stdio.h>
void main()
{
   char str[100];
   int i = 0, n[26]={0}, j;

   printf("Enter a string\n");
   scanf("%s",&str);

   while (str[i] != '\0') {

      if (str[i] >= 'a' && str[i] <= 'z') {
         j = str[i] - 'a';
         n[j]++;
      }

      i++;
   }

   for (i = 0; i < 26; i++)
         printf("%c occurs %d times \n", i + 'a',n[i]);

}
