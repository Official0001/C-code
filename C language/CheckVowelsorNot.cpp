#include<stdio.h>
int main()
{
	char a;
	
	printf("Enter the Any Alphabet : ");
	scanf("%c",&a);
	
	(a=='a' || a=='e' || a=='i' || a=='o' || a=='u'|| a=='A' || a=='E'|| a=='I'|| a=='O'|| a=='U')?printf("%c is Vowel",a):printf("%c is Consonant",a);

	return 0;
	
}
