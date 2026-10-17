# include<stdio.h>

int main() {
int arr[100],n,sum =0 ;
  printf("ENter number of images:") ;
  scanf("%d" , &n) ;

  printf("enter %d elements:", n) ;
  for(int i=0;i<n;i++){
    scanf("%d" , &arr[i]) ;
  }
for(int i =0;i<n;i++) {
  sum+=arr[i] ;  
}

printf("The sum is %d" , sum) ;

  return 0 ;
}
