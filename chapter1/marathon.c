/* In file marathon.c */
/* ���ϰ� �ߵ�� ǥ�� �� ������ �Ÿ��� ų�ι��ͷ� ��ȯ 
	������ �Ÿ� : 26���� 385�ߵ�
	1���� : 1.609KM
	1���� : 1760�ߵ�
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