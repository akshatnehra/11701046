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
    // Maximum Resources that can be allocated
    int maxm[10][10];
    for(int i=0;i<P;i++)
	{
		printf("Enter maximum required resources for P%d:	",i+1);
		for(int j=0;j<R;j++)
		{
			scanf("%d",&maxm[i][j]);
		}
	}
    // Allocated Resources to processes 
    int allot[10][10];   
    for(int i=0;i<P;i++)
	{
		printf("Enter resources allocated by P%d:	",i+1);
		for(int j=0;j<R;j++)
		{
			scanf("%d",&allot[i][j]);
		}
	}
	// Required Resources 
   int need[P][R]; 
  
    // Calculating Need(Required Resources by Process) 
    for (int i = 0 ; i < P ; i++) 
        for (int j = 0 ; j < R ; j++) 
  
            // Need of instance = maxm instance - 
            //                    allocated instance 
            need[i][j] = maxm[i][j] - allot[i][j]; 
  
    // Mark all processes as not finished
    bool finish[P] = {0}; 
