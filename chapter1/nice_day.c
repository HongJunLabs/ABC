/* In file nice_day */
/* Have a nice day */

#include <ctype.h>
#include <stdio.h>

#define MAXSTRING	100

/*
	int isalpha(int c); c가 영문 알파벳의 ASCII 코드 값인지 판별
	입력 매개 변수 리스트 - c 아스키 코드 값
	반환 값 - c가 영문 알파벳일 때 0이 아닌 수, 아닐 때 0
*/

int main(void)
{
	char c, name[MAXSTRING];
	int	 i, sum = 0;

	printf("\nHi! What is your name?	");
	
	for(i=0; (c = getchar()) != '\n'; ++i)
	{
		name[i] = c;
		if(isalpha(c))
			sum += c;
	}
	
	name[i] = '\0';
	printf("\n%s%s%s\n%s",
		"Nice to meet you ", name, ".", "Your name spelled backwards is ");
	
	for(--i; i >= 0; --i)
		putchar(name[i]);
	
	printf("\n%s%d%s\n\n%s\n",
		"and the letters in your name sum to ", sum, ".", "Have a nice day!");
	
	return 0;
}
