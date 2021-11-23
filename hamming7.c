#include <stdio.h>

void main()
{
    int data[15];
    int datarec[15], c , c1,c2,c3,c4,i;
    printf("enter 7 bits of data one by one");
    scanf("%d",&data[0]);
    scanf("%d",&data[1]);
    scanf("%d",&data[2]);
    scanf("%d",&data[4]);
    scanf("%d",&data[5]);
    scanf("%d",&data[6]);
    scanf("%d",&data[8]);
    data[10]= data[0]^data[2]^data[4]^data[8]^data[6];
    data[9] = data[0]^data[1]^data[4]^data[5]^data[8];
    data[7]= data[4]^ data[5]^data[6];
    data[3] = data[0]^data[1]^data[2];
    printf("\n Encoded data is \n");
    for(i=0 ; i<11 ; i++ )
    printf("%d" , data[i]);
    printf("\n Enter the recieved data bits one by one");
    for(i=0;i<11;i++)
    scanf("%d", &datarec[i]);
    c1= datarec[10]^datarec[8]^datarec[6]^datarec[4]^datarec[2]^datarec[0];
    c2= datarec[9]^datarec[8]^datarec[5]^datarec[4]^datarec[1]^datarec[0];
    c3 = datarec[7]^datarec[6]^datarec[5]^datarec[4];
    c4 = datarec[3]^datarec[2]^datarec[1]^datarec[0];
    c = 8*c4+4*c3+2*c2+c1;
    if(c==0)
    printf("\n No error \n");
    else
    {
        printf("\n error on position %d" , c);
        printf("\n data sent: ");
           for(i=0 ; i<11 ; i++ )
    printf("%d" , data[i]);
     printf("\n data recieved: ");
     for(i=0 ; i<11 ; i++ )
    printf("%d" , datarec   [i]);
    printf("\ncorrect message :");
    if(datarec[11-c]==0)  
    datarec[11-c]=1;
    else
    datarec[11-c]=0;
     for(i=0 ; i<11 ; i++ )
    printf("%d" , datarec   [i]);
    }
   printf("\n"); 
    
    
}