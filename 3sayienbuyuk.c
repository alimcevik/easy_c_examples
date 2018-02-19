 #include <stdio.h>

int maxNum(int x, int y ,int z);

int main(void) {

	int num1,num2,num3;
	
	printf("%s","Enter three numbers \n(with space or line):");
	scanf("%d%d%d",&num1,&num2,&num3);
	printf("Largest Number: %d\n", maxNum(num1,num2,num3));
	return 0;
}

int maxNum(int x,int y,int z){
	int max = x;
	if(y > max){
	max = y;
	}
	if(z > max){
		max = z;
	}
	return max;
}
