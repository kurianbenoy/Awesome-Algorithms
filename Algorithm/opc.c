#include<stdio.h>

void pascal f(int i,int j,int k)
{
  printf("%d %d %d",i, j, k);
}

void cdecl f(int i,int j,int k)
{
  printf("%d %d %d",i, j, k);
}

int main()
{

	int i=10; 
    f(i++,i++,i++); 
    printf(" %d\n",i); 
    i=10; 
    f(i++,i++,i++); 
    printf(" %d",i); 

/*	int a[10];
	printf("%d",*a+1-*a+3);

/*
    unsigned int i=10; 
    while(i-- >= 0) 
        printf("%u ",i); 
    return 0; 


/*while(1){
	if(printf("%d",printf("%d")))
		break;
	else
		continue;
	}
	return 0;

/*	int x;
	printf("%d",scanf("%d",&x));
	ans: 1*/
	/* Suppose that input value given
		for above scanf is 20 */
}
