#include<stdio.h>
#include<stdlib.h>
int main()
{   int choice,i,n;
    float sizep,sizeb,sizef,sizem,nop,nob,nof,nom;
    {
    for(i=0;i<100;i++)
    {
    printf("\n\nMENU\n........\n");
    printf("1. Biriyani\n2. Mandhi\n3. Porotta\n4. Fried Rice\n5. Exit\n\n\nEnter your choice:");
    scanf("%d",&choice);
switch(choice)
{
    case 1:
    {
        if(choice==1)
        {
            printf("\nYou Have Selected Biriyani\nSize of Biriyani:\n0.5-half\n1-Full\n");
            scanf("%f",&sizeb);
            printf("How many quantity required:");
            scanf("%f",&nob);
            printf("You Have select %f no of Briryani in %f size\n\n",nob,sizeb);
            break;
        }
    }
    case 2:
    {
        if(choice==2)
        {
            printf("\nYou Have Selected Mandhi\nSize of Mandhi:\n0.25-Quarter\n0.5-Half\n1-Full\n");
            scanf("%f",&sizem);
            printf("How many quantity required:");
            scanf("%f",&nom);
            printf("You Have select %f no of Mandhi in %f size\n\n",nom,sizem);
            break;
        }
    }
    case 3:
    {
        if(choice==3)
        {
            printf("\nYou Have Selected Porrotta\nSize of Porrotta:\n0.5-Coin\n1-Normal\n");
            scanf("%f",&sizep);
            printf("How many quantity required:");
            scanf("%f",&nop);
            printf("You Have select %f no of Porrotta in %f size\n\n",nop,sizep);
            break;
        }
    }
    case 4:
    {
        if(choice==4)
        {
            printf("\nYou Have Selected Freid Rice\nSize of Fried Rice:\n0.25-Quarter\n0.5-Half\n1-Full\n");
            scanf("%f",&sizef);
            printf("How many quantity required:");
            scanf("%f",&nof);
            printf("You Have select %f no of Freid Rice in %f size\n\n",nof,sizef);
            break;
        }
    }
    case 5:
    {   
        printf("\n\nTotal orders:\n..............\n");
        printf("Biriyani:%f * %f \n",sizeb,nob);
        printf("Mandhi:%f * %f \n",sizem,nom);
        printf("Porrotta:%f * %f \n",sizep,nop);
        printf("Fried Rice:%f * %f \n",sizef,nof);
        return(0);
    }
    default:
    {
        printf("Please Select from given Menu\n Order your Food");
        break;
    }
}
}
}
return(0);
}