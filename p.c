//카이사르 시저 암호 
#inlcude<stdio.h>
 int main() {
     char passwd[4] = {'e','c',['v', '/0']};
	 int key = 2; char planText[4];
	 planText[0] = passwd[0] - key;
	 planText[1] = passwd[1] - key;
	 planText[2] = 
	 printf("평문은 %s", planText);
	 
	 return 0;
 }