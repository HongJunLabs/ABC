/* In file pacific_sea.c */
#include "pacific_sea.h"

int main(void)
{
	//-- const : 변수를 초기화할 수 있지만 그 이후에 그 값을 변경할 수 없다.
	//-- ANSI C에는 실수형을 float(유효숫자 6자리 저장), double(유효숫자 16자리 저장), long double(전통적인 C에는 이 자료형이 없음)
	const int pacific_sea = AREA;
	double acres, sq_miles, sq_feet, sq_inches;
	
	printf("\nThe Pacific Sea covers an area");
	printf(" of %d square kilometers.\n", pacific_sea);
	sq_miles = SQ_MILES_PER_SQ_KILOMETER * pacific_sea;
	sq_feet = SQ_FEET_PER_SQ_MILE * sq_miles;
	sq_inches = SQ_INCHES_PER_SQ_FOOT * sq_feet;
	acres = ACRES_PER_SQ_MILE * sq_miles;
	
	printf("In other units of measure this is:\n\n");
	printf("%22.7e acres\n", acres);
	printf("%22.7e square miles\n", sq_miles);
	printf("%22.7e square feet\n", sq_feet);
	printf("%22.7e square inches\n\n", sq_inches);
	
	return 0;
}
