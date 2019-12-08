#include<stdio.h>
int max(int arr[], int n)
{
int i, maxi=0;
printf("Enter the 10 elements of integer: ");
for(i=0;i<n; i++)
 
   scanf("%d\n",&arr[i]);
 maxi=arr[0];
 for(i=1;i<n;i++)
	 if(maxi<arr[i])
		 maxi=arr[i];
   
   printf("Maximum interger is: %d",maxi);
return maxi;
   
 }

int main()
{
int maxim=100;
int arr[maxim];
max(arr, 5);
}

