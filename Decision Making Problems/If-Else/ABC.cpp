#include<stdio.h>
#include<string.h>
struct temp {

int a;

int b;

int c;
}
main() { 
struct temp p[] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}; 
printf("\n %d %d", sizeof(p), sizeof(p[0]));
	return 0;

}





