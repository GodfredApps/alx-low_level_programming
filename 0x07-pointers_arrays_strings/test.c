//Online C complier to run C Program
#include <stdio.h>

int main()
{
	int grades[10] = {87, 56, 90, 45, 60};
	char code[] = "XYTS\0TUCHWOP"; // '\0'
	char *p;
	p = code;
	int i = 0;

	//Array size: 5
	//String lenth: 4
	//Array element index for the last element: 3

	while (*p != '\0')
	{
		p++;
		i++;
	}

	printf ("My array length is %d\n", i);

	return (0);
}

