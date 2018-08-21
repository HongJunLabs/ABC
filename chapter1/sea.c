/* In file sea.c */
//-- 전처리(컴파일러에 내장되어 있다) -> 컴파일
//-- <stdio.h> 꺽은 괄호의 의미는 이 헤더 파일이 시스템에 지정한 장소에 있음을 표시
//-- void 의 의미는 이 함수가 인자가 없다는 것을 컴파일러에게 알려줌
#include<stdio.h>
int main(void)
{
	//-- \n 개행문자 커서를 다음줄에 시작점으로 이동시킨다.
	printf("from sea to shining C\n");
	
	//-- return 0 : 0값을 운영체제에게 리턴, 운영체제는 그 값을 사용하게 된다.
	return 0;
}