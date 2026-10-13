#include<stdio.h>
int main()
{
	float marks[10];
	int i,count;
	float sum=0,avg=0;
	int len=sizeof(marks)/sizeof(marks[0]);
	for(i=0;i<10;i++)
	{
	  	printf("Enter marks for student %d (out of 20) ",i+1);
	  	scanf("%f",&marks[i]);
	  	if(marks[i]<0 || marks[i]>20)
	  	{
	  	printf("Re-enter the valid marks for student %d ",i);
	  	scanf("%f",&marks[i]);
	   }
	}
	for(i=0;i<10;i++)
	{
	  	if(marks[i]>18 && marks[i]<20)
	  	{
	  	printf("Remarks of student %d\n",i+1);
	  	printf("Excellent");
	    }
	   else if(marks[i]>14 && marks[i]<17.99)
	  	{
	  	printf("Remarks of student %d\n",i+1);
	  	printf("Good");
	   }
	   else if(marks[i]>10 && marks[i]<13.99)
	  	{
	  	printf("Remarks of student %d\n",i+1);
	  	printf("Average");
	   }
	   else
	   {
	   	printf("Remarks of student %d\n",i+1);
	   	printf("Needs Improvement");
	   }
	   printf("\n");
	}
	for(i=0;i<10;i++)
	{
		sum=sum+marks[i];
	}
	avg=sum/len;
	printf("Average of class is %f\n",avg);
	
	for(i=0;i<10;i++)
	{
		if(marks[i]>avg){
		count++;
		}
	}
	printf("%d Students score above than average\n",count);
	
	for(i=0;i<10;i++)
	{
		marks[i]=marks[i]+1.5;
		if(marks[i]>20)
		{
			marks[i]=20;
		}
		printf("Upgrade Marks of Student %d is %f\n",i+1,marks[i]);
	}
	
	return 0;
}
