#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void toh(char src,char tmp,char dest,int n){
	if (n==0)
		return 0;
	else if (n==1)
		printf("%c ==> %c\n",src,dest);
	else {
		toh(src,dest,tmp,n-1);
		printf("%c ==> %c\n",src,dest);
		toh(tmp,src,dest,n-1);
	}
}
int main(int argc, char *argv[]) {
	int n;
	printf("Please type a number :");
	scanf("%d",&n);
	toh('a','b','c',n);
	return 0;
}
