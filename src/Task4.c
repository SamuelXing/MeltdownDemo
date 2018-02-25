#include<stdio.h>
#include<stdlib.h>

int main()
{
	char* kernel_data_addr = (char*)0xe0eef000;
	char kernel_data = *kernel_data_addr;
	//printf("Revealed Data: %c", kernel_data);
	printf("Reach Here\n");
	return 0;
}
