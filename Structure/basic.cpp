#include<stdio.h>
struct myStructure{
	int a;
	char ch;
	float b;
};

int main()
{
	struct myStructure s1,s2 = { 10, 'B', 2.5f};

	s1.a = 5;
	s1.b = 2.5f;
	s1.ch = 'A';
	
	printf("----> %d\n",s1.a);
	printf("----> %c\n",s1.ch);
	printf("----> %f\n\n",s1.b);
	
	printf("%d\n  %c\n  %f\n", s2.a , s2.ch, s2.b);
	
	

}
