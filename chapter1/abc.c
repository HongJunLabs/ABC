/* In file abc.c */
#include <stdio.h>
#include <string.h>

#define MAXSTRING 100

/*
	* �� ������ �Ǵ� �������� ������ 
	ex) *p ������ ���� p�� ����Ʈ�ϴ� ���� ���� ������.
	
	strcpy(���� �޴� ���ڿ�, ������ ���ڿ�);
	strcpy(����ڿ�, �������ڿ�);
	char *strcpy(char *_Dest, char const *_Source);
	����ڿ��� �����͸� ��ȯ
	
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