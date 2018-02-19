#include <stdio.h>
#include <time.h>

int main(){
int array[10];
int x, p;
int count;
int i=0;

srand(time(NULL));

for(count=0;count<10;count++){
array[count]=rand()%10+1;
}

while(i<10){
    int r=rand()%10+1;

    for (x = 0; x < i; x++)    {
        if(array[x]==r){
            break;
        }
    }
    if(x==i){
        array[i++]=r;
    }
}

for(p=0;p<10;p++){
	printf("%d ", array[p]);
}
	return 0;
}
