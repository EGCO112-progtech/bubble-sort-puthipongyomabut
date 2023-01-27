#include "sorting.h"
#include <stdio.h>
#include <stdlib.h>

int Isprime(int num){
  if(num==1) return 0;
  for(int i=2;i<num ; i++){
    if(num % i ==0) return 0; 
  }
  return 1;
}

int main(int argc, char *argv[]) {
  int i, *a, N,j=0,*prime;
  N = argc - 1;
  a = (int *)malloc(sizeof(int) * N);
  prime = (int*)malloc(sizeof(int)*N);
  for (i = 0; i < N; i++) {
    a[i] = atoi(argv[i + 1]);
    if (Isprime(a[i])){
      prime[j] = a[i];
    j++;
      }
  }
  
  if(N==0) printf("No prime\n");
  else{
  N=j;
  int  i, j, new_number;
  // 3 2 6 7 3 1
  display(prime, N);
  bubbleSort(prime, N);
  // insertion(a,N);

  // selectionSort(a,N);
  display(prime, N);}
  return 0;
}
