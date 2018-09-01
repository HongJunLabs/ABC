/* In file abc.c */
#include <stdio.h>
#include <string.h>

#define MAXSTRING 100

/*
	* 는 역참조 또는 간접지정 연산자 
	ex) *p 수식의 값은 p가 포인트하는 곳의 값을 가진다.
	
	strcpy(복사 받는 문자열, 복사할 문자열);
	strcpy(대상문자열, 원본문자열);
	char *strcpy(char *_Dest, char const *_Source);
	대상문자열의 포인터를 반환
	
	s[i] == *(s + i)
*/

int main(void)
{
	char c = 'a', *p, s[MAXSTRING];
	
	p = &c;
	printf("%c%c%c", *p, *p + 1, *p + 2);
	strcpy(s, "ABC");
	printf("%s %c%c%s\n", s, *s + 6, *s + 7, s + 1);
	strcpy(s, "she sells sea shells by the seashore");
	p = s + 14;
	for( ; *p != '\0'; ++p)
	{
		if(*p == 'e')
			*p = 'E';
		if(*p == ' ')
			*p = '\n';
	}
	
	printf("%s\n", s);
	return 0;
}