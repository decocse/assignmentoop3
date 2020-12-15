#include <stdio.h>

#define MAX(x,y) ((x>y)?x:y)

int main()
{
	char a,b,max;
	//char *i,*j;
	printf("Enter first character: ");
	scanf("%s",&a);
	//*i=&a;
	printf("Enter second charecter: ");
	scanf("%s",&b);	
	//*j=&b;
	max=MAX(a,b);
	int p=(int)max;
	printf("%s\n",p+'0');
	return 0;
}
