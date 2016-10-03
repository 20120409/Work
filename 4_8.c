#include<stdio.h>

int main(void)
{
	printf("사계절은 봄 여름 가을 겨울이다.\n");
	printf("사계절은 %s %s %s %s이다.\n\n", "봄", "여름", "가을", "겨울");
	printf("%s\n", "123456789012345");
	printf("%10.3s\n", "HELLO!");
	printf("%-10.3s\n", "HELLO!");
	printf("%4s\n", "HELLO!");
	printf("%10.*s\n\n", 5, "HELLO!");

	printf("%s\n", "1234556789012345");
	printf("%s\n", "HI, C language!");
	printf("%10.3s\n", "Hi C language!");
	printf("%10.3s\n", "Hi, C language!");
	printf("%10.*f\n", 3, 124.56789);

	printf("10.2f%%\n", 3.25);
	printf("%0+10.1f%s\n", 3.25, "%");
	return 0;
}