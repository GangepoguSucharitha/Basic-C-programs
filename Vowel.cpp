//Vowel or Consonant using if-else
#include<stdio.h>
main()
{
  char c;
  printf("Enter any character ");
  scanf("%c",&c);
  //(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')? printf("%c Vowel",c) : printf("%c Consonant",c);
  if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
	printf("%c is Vowel",c);
  else
	printf("%c is Consonant",c);	
  	
}
