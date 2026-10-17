# include<stdio.h>

int main() {
int n ;
  printf("Enter number:") ;
  scanf("%d" , &n) ;

  //first for..
  for(int i =1 ;i<=10 ;i++) {
    printf("%d x %d = %d\n", n, i, n * i);
  }

  
i = 1;
  while(i<=10){
    printf("%d x %d = %d\n", n, i, n * i");
    i++
  }
  

i=1 ;
  do{
    printf("%d x %d = %d\n", n, i, n * i");
    i++
  }
while(i<=10)


  return 0 ;
}
