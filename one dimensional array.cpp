#include<stdio.h>
#include<conio.h>
int main()
{
	int arr[1000],n,i,j,sum=0,mul=1,large,small,temp=0,searched;
	printf("how many element in an array:\n");
	scanf("%d",&n);
	printf("the array element are:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("the array elements are:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	}
	printf("*************SUM OF ARRAY************");
	for(i=0;i<n;i++)
	{
		sum=sum+arr[i];
	}
	printf("\nsum of array is: %d",sum);
	printf("\n********MULTIPLICATION OF ARRAY*******");
	for(i=0;i<n;i++)
	{
		mul=mul*arr[i];
	}
	printf("\n multiplication of array is %d",mul);
	small=arr[0];
	large=arr[0];
	for(i=0;i<n;i++)
	{
		if(small>arr[i])
		small=arr[i];
		if(large<arr[i])
		large=arr[i];
	}
	printf("\nThe largest element is %d and the smallest element is %d",large,small);
	printf("\nACCENDING ORDER OF ARRAY ELEMENT\n");
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
			
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
		}
		
		}
	}
	printf("shorted element are:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	}
	printf("enter the searched element:\n");
	scanf("%d",&searched);
	for(i=0;i<n;i++)
	{
		if(arr[i]==searched)
		{
			printf("searched element is found\n");
			break;
		}
	}
		if(i==n)
		
			printf("searched element is not found\n");
	return 0;
}
