
//return_the_index_of_last_occurrence_of_a_number_in_a_given_array
#include "stdio.h"
void find_lastindex(int arr[],int num);
int main()
{
	int arr[10]={10,20,5,8,9,20,5,45,90,10};
	int x;
	printf("enter your search number ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&x);
	find_lastindex(arr,x);
}
void find_lastindex(int arr[],int num)
{
	int i,k=-1;// initialize k=-1 if number not found return -1
	for(i=0;i<10;i++)
	{
		if(num==arr[i])
			k=i;
		else
			continue;

	}
	printf("index=%d",k);
}
