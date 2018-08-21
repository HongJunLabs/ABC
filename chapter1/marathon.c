/* In file marathon.c */
/* 마일과 야드로 표시 된 마라톤 거리를 킬로미터로 변환 
	마라톤 거리 : 26마일 385야드
	1마일 : 1.609KM
	1마일 : 1760야드
*/
#include<stdio.h>

int main(void)
{
	int miles, yards;
	float kilometers;
	
	miles = 26;
	yards = 385;
	
	kilometers = (miles + yards/1760.0) * 1.609;
	
	printf("\nA marathon is %f kilometers. \n\n", kilometers);
	
	return 0;
}