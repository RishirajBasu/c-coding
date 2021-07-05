#include <stdio.h>
int main (){
	int num;
	printf("\t\t---TO CHECK THE NUMBER IS EVEN OR ODD---\n");
	printf("\nENTER THE NUMBER TO BE CHECKED : ");
	scanf("%d",&num);
	if ( num%2==0){
		printf("\nTHE NUMBER IS AN EVEN NUMBER");
	}
	else{
		printf("\nTHE NUMBER IS AN ODD NUMBER");
	}
	return 0;
}
