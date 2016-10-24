//
//  main.c
//  SkObjective-C 10Element Operation
//
//  Created by Student P_04 on 24/10/16.
//  Copyright © 2016 Siddharth Koshiyar. All rights reserved.
//

#include<stdio.h>
void sortarray(int a[10] );
void sumodd(int a[10]);
void sumeven(int a[10]);
int main(){



        int a[10];
        
        int i;
        int press;
        for(i=0;i<10;i++)
        {
            scanf("%d",&a[i]);
        }
        
        printf("----menu-----\n");
        printf("sort array in ascending order Press 1");
        printf("Display all odd value stored in Array Press 2\n");
        printf("Display all even value stored in Array Press 3\n");
        printf("Eneter the value of opertion\n ");
        scanf("%d",&press);
        if(press==1)
        {
            sortarray(a);
        }
        else if(press==2)
        {
            sumodd(a);
        }
        else if(press==3)
        {
            sumeven(a);
        }
        
        else{
            printf("please enter valid choice\n");
        }
    
    return 0;
}
void sortarray(int x[10])
{
    int i,j,temp;
    for(i=0;i<=10;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(x[i]>x[j])
            {
                temp=x[i];
                x[i]=x[j];
                x[j]=temp;
            }
        }
    }
    for(i=0;i<10;i++)
    {
        printf("%d ",x[i]);
    }
}
void sumodd(int x[10])
{
    int i,sum=0;
    for(i=0;i<10;i++)
    {
        if((x[i])%2!=0)
        {
            printf("%d ",x[i]);
        }
    }
    for(i=0;i<=10;i++)
    {
        if((x[i])%2!=0)
        {
            sum=sum+x[i];
            
        }
        
    }
    printf(" Total odd sum is %d",sum);
    
    
    
}
void sumeven(int x[10])
{
    int i,sum=0;
    for(i=0;i<10;i++)
    {
        if((x[i])%2==0)
        {
            printf("%d ",x[i]);
        }
    }
    for(i=0;i<=10;i++)
    {
        if((x[i])%2==0)
        {
            sum=sum+x[i];
            
        }
        
    }
    printf(" Total even sum is %d",sum);
    
    
    
}

