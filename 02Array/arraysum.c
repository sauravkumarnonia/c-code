#include<stdio.h>
int sum(int arr[], int n)
{
int i, sum=0;
for(i=0; i<n; i++){
printf("Enter 5 numbers: ");
scanf("%d",&arr[i]);

sum =sum +arr[i];
}
printf("your sum is: %d",sum);
return sum;
}


int main()
{
	int max=50;
	int arr[max];
	sum(arr,5);

}

