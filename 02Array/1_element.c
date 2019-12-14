#rrinclude<stdio.h>
void printarray(int arr[], int n)

{
int i;
for(i=0; i<n; i++)
{
	printf("Enter the Number:");
	scanf("%d",&arr[i]);
}
}
void inputarray(int arr[], int n){
	int i;
	for(i=0; i<n; i++){
		printf("%d",arr[i]);
	}
}

int main()
   {
   int arr[100];
   printarray(arr, 10);
   inputarray(arr, 10);
   return 0;
   }         
