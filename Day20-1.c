//Q39: Write a program to find the product of odd digits of a number.//
 #include <stdio.h>
int main(){
  int n,product=1,r;
  printf("Enter a number: ");
  scanf("%d",&n);
  int original=n;
  while(n!=0){
      r=n%10;
      if(r%2!=0){
        product*=r;
      }
      n=n/10;
  }  
  printf("Product of odd digits of %d= %d",original,product);
  return 0;
}