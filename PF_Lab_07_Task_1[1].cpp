#include<stdio.h>
int main()
{
	int temp[7]={31,33,35,34,38,36,32},i,largest=temp[0],lowest=temp[0],sum=0;
	float avg=0;
	int len=sizeof(temp)/sizeof(temp[0]);
	
	printf("Array lenght %d\n",len);
	for(i=0;i<7;i++)
	{
		printf("Day %d : %d C\n",i+1,temp[i]);
	}
	for(i=1;i<7;i++)
	{
		if(temp[i]>largest)
		{
		largest=temp[i];
		}
	}
	printf("Largest number in array is %d\n",largest);
	
	for(i=1;i<7;i++)
	{
		if(temp[i]<lowest)
		{
		lowest=temp[i];
		}
	}
		printf("Lowest number in array is %d\n",lowest);
	
	for(i=0;i<7;i++)
	{
		sum=sum+temp[i];
	}
	avg=sum/len;
	printf("Average of Array is array is %f\n",avg);
	
	temp[2]=37;
	for(i=0;i<7;i++)
	{
		printf("Day %d : %d C\n",i+1,temp[i]);
	}
	
	sum=0;
	
	for(i=1;i<7;i++)
	{
		if(temp[i]>largest)
		{
		largest=temp[i];
		}
	}
	printf("Largest number in array is %d\n",largest);
	
	for(i=1;i<7;i++)
	{
		if(temp[i]<lowest)
		{
		lowest=temp[i];
		}
	}
		printf("Lowest number in array is %d\n",lowest);
	
	for(i=0;i<7;i++)
	{
		sum=sum+temp[i];
	}
	avg=sum/len;
	printf("Average of Array is array is %f\n",avg);
	
	printf("\n");
	for(i=0;i<7;i++)
	{
		printf("Address of %d is %d\n",temp[i],&temp[i]);
	}
	
	printf("As the array stored in int data type and the size of int data type is 4 bytes that is why Array elements Addresses have a difference of four");

	return 0;
}
