#include<stdio.h>
#include<stdlib.h>
char arr[]={'0','1','2','3','4','5','6','7','8','9'};


void Board()
{
    system("cls");
    printf("\n\n");
    printf("............TIC TAC TOE..................\n\n\n");
    printf("     |     |     \n");
    printf(" %c   |  %c  |  %c \n",arr[1],arr[2],arr[3]);
    printf("_____| ____|____\n");
    printf("     |     |     \n");
    printf(" %c   |  %c  |  %c \n",arr[4],arr[5],arr[6]);
    printf("_____| ____|____\n");
    printf("     |     |     \n");
    printf(" %c   |  %c  |  %c \n",arr[7],arr[8],arr[9]);
   
    printf("\n\n");
}

int Win()
{
     if(arr[1]==arr[2] && arr[2]==arr[3])
     {
        if(arr[1]=='x')
            return 1;
        else
            return 2;
     }
     else if(arr[4]==arr[5] && arr[5]==arr[6])
     {
        if(arr[4]=='x')
          return 1;
        else
          return 2;
     }
     else if(arr[7]==arr[8] && arr[8]==arr[9])
     {
        if(arr[7]=='x')
          return 1;
        else
          return 2;
     }
     else if(arr[1]==arr[4] && arr[4]==arr[7])
     {
        if(arr[1]=='x')
          return 1;
        else
          return 2;
     }
     else if(arr[2]==arr[5] && arr[5]==arr[8])
     {
        if(arr[2]=='x')
          return 1;
        else
          return 2; 
     }
     else if(arr[3]==arr[6] && arr[6]==arr[9])
     {
        if(arr[3]=='x')
          return 1;
        else
          return 2;
     }
     else if(arr[1]==arr[5] && arr[5]==arr[9])
     {
        if(arr[1]=='x')
          return 1;
        else
          return 2;
     }
     else if(arr[3]==arr[5] && arr[5]==arr[7])
     {
        if(arr[3]=='x')
          return 1;
        else
          return 2;
     }
    return 0;
}

void f1()
{
    printf("\n\n");
    printf(".............................................WELLCOME TO TIC TAC TOE GAME....................................................");
    printf("\n\n\n");
    char ch;
    printf("Are You Willing to Play This Game ?");
    printf("\n  i.YES - Press 1\n  ii.NO - Press any key\n");
    fflush(stdin);
    scanf("%c",&ch);
    for(; ;)
    {
   if(ch=='1')
   {
    Board();
    break;
   }
    else
    {
    printf("THANK YOU");
    exit(1);
    }
   
    }
}

void Play()
{
    int index;
    int count=0;
    int player=1;
    int input=1;
    int r;
    for(;;)
    {
     r=Win();
     if(r==0)
     {
       if(count==9)
      {
         printf("GAME IS OVER, NOONE WIN THE GAME !!");
         break;
       }
        player=(player%2==0)? 2:1;
        input=(player==1)?'x':'0';
        printf("\nEnter a number for player %d : ",player);
        scanf("%d",&index);
          
        if(arr[index]=='x' || arr[index]=='0')
        {
            printf("INVALID Number,Please choose another number.");
            continue;
        }
        if(index<1 || index>9)
        {
            printf("INVALID1");
            continue;
        }
        arr[index]=input;
        Board();
        player++;
        input++;
   
        count++;
       }
 
      else if(r==1)
      {
       printf("FIRST PLAYER IS WINNER !!!!!");
        printf("\n\nThe Game is Over.\n\nTHANK YOU FOR PLAYING THE GAME.");

       break;
      }
      else if(r==2)
      {
        printf("SECOND PLAYER IS WINNER !!!!!!");
        printf("\n\nThe Game is Over.\n\nTHANK YOU FOR PLAYING THE GAME.");
        break;
      }
      

    }


}
void main()
{
    f1();
    Board();
    Play();
}