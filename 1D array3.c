#include <stdio.h>  
  
int main() {  
    int x;  
    int a[5] = {0,1,2,3,4};  
    int b[5] = {0,1,2,3,4};  
    int sum[x];  
  
 
    for (x=0; x<5; x++) {  
         scanf("%d",&a[x],&b[x]); 
    }  
    a[0] = 7;
    a[1] = 4;
    a[2] = 9;
    a[3] = 5;
    a[4] = 2;
    
    b[0] = 1;
    b[1] = 3;
    b[2] = 1;
    b[3] = 7;
    b[4] = 3;
  
    printf("Array C is : ");
    for (x= 0; x<5; x++) { 
	 sum[x] = a[x] + b[x];   
     printf("%d, ",sum[x]);   
  
}

}  