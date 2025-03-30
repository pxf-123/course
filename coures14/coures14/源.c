#include<stdio.h>
int main()
{
	int arr[10] = {0,1,2,3,4,5,6,7,8,9};
	printf("%d\n",arr[8]);
	printf("%d\n",arr);
	int i = 0;
	while (i < 10)
	{
		printf("%d	",arr[i]);
		i++;
	}
	return 0;
}