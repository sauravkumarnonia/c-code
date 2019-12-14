#include<stdio.h>
int printAddr(int arr[], int n)
{
int i;
for(i = 0; i<n; i++){
printf("Enter the interger for address: ");
scanf("%d",&arr[i]);
printf("address are: %p\n",&arr[i]); 
}


}

int main()
{
int max = 100;
int arr[max];
printAddr(arr, 5);

}
