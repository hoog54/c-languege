 #niclude<stdio.h

  int main() {
  
      printf("%d * 75 - 63 = 2787\n");
      int a = 38, b= 75, c =63;
      printf("%d * %d - %d = %d\n",a b, c, a*b-c);
      a = a*b - c;  
      printf("메모리[%ld] = %d\n", &a, a);
      return 0;
	  
  }