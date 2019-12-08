#include<stdio.h>
int secondmax(int arr[], int n)
{
int i, max, max2;
printf("Enter the number of 5 interger: ");
for(i=0; i<n; i++)
scanf("%d",&arr[i]);

if(arr[0]>arr[1])
{
max = arr[0];
max = arr[1];

}
else{

	max = arr[1];
	max2 = arr[0];
}
for(i=0; i<n; i++)
{

if(arr[i]>max){

max2 = max;
max = arr[i];
}
else
if(arr[i]>max2 && arr[i]<max)
	max2 = arr[i];
	printf("Your second maximum num is:%d ",max2);
	return max2;
}
}
int main(){
int maxi=100; 
int arr[maxi];
secondmax(arr, 5);
}
