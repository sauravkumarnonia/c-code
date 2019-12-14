#include<stdio.h>
void printmatrix(int arr[3][3],int row, int col){
  

     for(row=0; row<3; row++) {
        for(col=0;col<3;col++) {
          printf("Enter value for arr[%d][%d]:", row, col);
           scanf("%d", &arr[row][col]);
        }
     }
     
     printf("Two Dimensional array elements:\n");
     for(row=0; row<3; row++) {
        for(col=0; col<3; col++) {
           printf("%d ", arr[row][col]);
          if(col==3){
              printf("\n");
           }
        }
		printf("\n");
     }
   

}
int main(){
	int arr[3][3];
	printmatrix(arr,3,3);
}

 
