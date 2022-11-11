#include <stdio.h>
#pragma pack(1) //This is for Telling the Compiler that it should not do Structure Padding

struct structure{
	char a;
	int b;
	double d;
}s;

int main()
{
	printf("The Size of the Structure is: %d",sizeof(s));
	//The output will be 13. Because, |||| |||| |||||||| -> char (3byte empty), int , double
}