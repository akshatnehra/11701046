#include<stdio.h> 
int main() 
{ 
	int Pr=5,Re=3;
 	// Number of processes 
    // Number of resources 
	printf("Enter number of process and resources:	");
	scanf("%d%d",&Pr,&Re);
	const int P=Pr,R=Re;
    // Available resources 
    int avail[15];
    printf("Enter number of available resources:	");
	for(int i=0;i<R;i++)
	{
		scanf("%d",&avail[i]);
	} 
