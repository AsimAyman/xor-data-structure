#include "linkedlist.h"
#include "fun.h"
#include<windows.h>

#include <conio.h>


void startgame(){
	int player = 1, i, choice;
	
	int visited[10];
	for(int j=0;j<10;j++)
		visited[j]=0;

	int time=1000;

    char mark;
    do
    {
        print();
        player = (player % 2) ? 1 : 2;
		
		if(player==1)
		{
			printf("Please enter a your move:  ");
       		scanf("%d", &choice);
		}
		else{
			
			choice=rand()%10;
			if(visited[choice]==0 && choice!=0)
			{
			}
			else
			{
				while(visited[choice]==0 && choice!=0 && choice<10)
					choice=rand()%10;
			}
			printf("->->Move by computer->->\n");
			printf("\nComputing move...\n");
			Sleep(time);
		}
		
        visited[choice]=1;

        mark = (player == 1) ? 'X' : 'O';

        if (choice == 1 && square[1] == '1')
            square[1] = mark;
            
        else if (choice == 2 && square[2] == '2')
            square[2] = mark;
            
        else if (choice == 3 && square[3] == '3')
            square[3] = mark;
            
        else if (choice == 4 && square[4] == '4')
            square[4] = mark;
            
        else if (choice == 5 && square[5] == '5')
            square[5] = mark;
            
        else if (choice == 6 && square[6] == '6')
            square[6] = mark;
            
        else if (choice == 7 && square[7] == '7')
            square[7] = mark;
            
        else if (choice == 8 && square[8] == '8')
            square[8] = mark;
            
        else if (choice == 9 && square[9] == '9')
            square[9] = mark;
            
        else
        {
            printf("\n\nInvalid move ");
			 visited[choice]=0;
            player--;
           
        }
        i = checkwin();
		
		if(visited[choice]==1)
		{
			insert(player,choice);
		}
        player++;
    }while (i ==  - 1);
    
    print();
   
    if (i == 1)
    {
    
    	 Sleep(1000);
    	player--;
    	if(player==1)
    	{
    		 printf("|***********|Congratiulations,You won the game|***********|\n\n ");
    		
		}
		else
		{
			
    		 printf("|***********|Computer has won the game,\n\t\tBetter luck next time |***********|\n\n");
			
		}	
	}  
    else
        printf("\tGame is draw\n\n");
	
	node *t;
	printf("Moves By computer:-> ");
	t=comp;
	while(t!=NULL)
	{
			printf("%d\t",t->move);
		t=t->next;
	}
	printf("\n\nMoves By You:-> ");
	t=you;
	while(t!=NULL)
	{
		printf("%d\t",t->move);
		t=t->next;
	}

}

int main(){
	printf("\n|*****************->XOR GAME<-*****************|\n\n");
	Sleep(500);
    printf("You === 'X' -  Computer === '0'");
	startgame();

	printf("\n\n\n\t\t--______________________________________________.");  
    return 0;
}
