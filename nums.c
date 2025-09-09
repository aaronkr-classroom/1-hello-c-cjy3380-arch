#include <stdio.h>
#include<limits.h>
int main(void) {
	//char 1바이트 문자
	char ch = 'A';
	printf("char:\n");
	printf("Value: %c\n", ch);
	printf("Max: %d\n", CHAR_MAX);
	printf("Min: %d\n", CHAR_MAX);
	
	//signed short int 2바이트 정수
	signed short int sshort = 1234;
	printf("\nsigned short int:\n");
	printf("Value: %d\n", sshort);
	printf("Max: %d\n", SHRT_MAX);
	printf("Min: %d\n", SHRT_MIN);

	//unsigned short int 2바이트 정수
	unsigned short int ushort = 1234U;
	printf("\nsigned short int:\n");
	printf("Value: %d\n", ushort);
	printf("Max: %d\n", USHRT_MAX);
	
	//signed int 4바이트 정수
	signed int sint = 1234;
	printf("\nsigned short int:\n");
	printf("Value: %d\n", sint);
	printf("Max: %d\n", INT_MAX);
	printf("Min: %d\n", INT_MIN);

	//unsigned int 4바이트 정수
	unsigned short uint = 12345U;
	printf("\nunsigned short int:\n");
	printf("Value: %d\n", uint);
	printf("Max: %d\n", UINT_MAX);

	//signed long int 4바이트 정수
	signed long int slong = 123456789L;
	printf("\nsigned long int:\n");
	printf("Value: %d\n", slong);
	printf("Max: %d\n", LONG_MAX);
	printf("Min: %d\n", LONG_MIN);

	//unsigned long int 4바이트 정수
	unsigned long int ulong = 123456789UL;
	printf("\nunsigned long int:\n");
	printf("Value: %d\n", ulong);
	printf("Max: %d\n", ULONG_MAX);

	//float (항상 부호 있다) 8바이트 실수
	float f = 123.456;
	printf("\nfloat:\n");
	printf("Value:%.3f\n", f);

	//double 8바이트 실수
	double d = 123456.789123f;
	printf("\ndouble:\n");
	printf("Value:%.3\n", d);


	return 0;
}