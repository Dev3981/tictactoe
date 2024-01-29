//tic tac toe game
#include <stdio.h>
#include <stdlib.h>

int playKey;
char boxKeys[9] = "123456789";
void showBoard(char checkKeys[9]){
printf("\n=============");
printf("\n| %c | %c | %c |",checkKeys[0],checkKeys[1],checkKeys[2]);
printf("\n-------------");
printf("\n| %c | %c | %c |",checkKeys[3],checkKeys[4],checkKeys[5]);
printf("\n-------------");
printf("\n| %c | %c | %c |",checkKeys[6],checkKeys[7],checkKeys[8]);
printf("\n=============");
}
int main(void){

for(int loopForTurn=1;loopForTurn<6;loopForTurn++){
playerOne:
showBoard(boxKeys);
// Player 1 turn
puts("\n\nPlayer 1: ");
scanf("%d",&playKey);
if(playKey>9||playKey<1){
	printf("\nInvalid Key");
	goto playerOne;
}
else if( (boxKeys[playKey-1]=='o') || (boxKeys[playKey-1]=='x') ){
	printf("\nBox is already checked...choose another key\n");
	goto playerOne;
}
else{
	boxKeys[playKey-1] = 'x'; // place x in the board's box
	showBoard(boxKeys);       // show the board
	// setting conditions for checking if player won or not
	if(boxKeys[0] == 'x'&&boxKeys[1] == 'x'&&boxKeys[2] == 'x'){
		printf("\n\033[31;7mPlayer 1 has won the match\033[0m\n");
		exit(0);
	}
	else if(boxKeys[3] == 'x'&&boxKeys[4] == 'x'&&boxKeys[5] == 'x'){
		printf("\n\033[31;7mPlayer 1 has won the match\033[0m\n");
		exit(0);
	}
	else if(boxKeys[6] == 'x'&&boxKeys[7] == 'x'&&boxKeys[8] == 'x'){
		printf("\n\033[31;7mPlayer 1 has won the match\033[0m\n");
		exit(0);
	}
	else if(boxKeys[0] == 'x'&&boxKeys[3] == 'x'&&boxKeys[6] == 'x'){
		printf("\n\033[31;7mPlayer 1 has won the match\033[0m\n");
		exit(0);
	}
	else if(boxKeys[1] == 'x'&&boxKeys[4] == 'x'&&boxKeys[7] == 'x'){
		printf("\n\033[31;7mPlayer 1 has won the match\033[0m\n");
		exit(0);
	}
	else if(boxKeys[2] == 'x'&&boxKeys[5] == 'x'&&boxKeys[8] == 'x'){
		printf("\n\033[31;7mPlayer 1 has won the match\033[0m\n");
		exit(0);
	}
	else if(boxKeys[0] == 'x'&&boxKeys[4] == 'x'&&boxKeys[8] == 'x'){
		printf("\n\033[31;7mPlayer 1 has won the match\033[0m\n");
		exit(0);
	}
	else if(boxKeys[2] == 'x'&&boxKeys[4] == 'x'&&boxKeys[6] == 'x'){
		printf("\n\033[31;7mPlayer 1 has won the match\033[0m\n");
		exit(0);
	}


}

// Player 2 turn
playerTwo:
showBoard(boxKeys);
puts("\n\nPlayer 2: ");
scanf("%d",&playKey);
if(playKey>9||playKey<1){
	printf("\nInvalid Key");
	goto playerTwo;
}
else if( (boxKeys[playKey-1]=='o') || (boxKeys[playKey-1]=='x') ){
	printf("\nBox is already checked...choose another key");
	goto playerTwo;
}
else{
	boxKeys[playKey-1] = 'o';
	showBoard(boxKeys);

	if(boxKeys[0] == 'o'&&boxKeys[1] == 'o'&&boxKeys[2] == 'o'){
		printf("\n\033[31;7mPlayer 2 has won the match\033[0m\n");
		exit(0);
	}
	else if(boxKeys[3] == 'o'&&boxKeys[4] == 'o'&&boxKeys[5] == 'o'){
		printf("\n\033[31;7mPlayer 2 has won the match\033[0m\n");
		exit(0);
	}
	else if(boxKeys[6] == 'o'&&boxKeys[7] == 'o'&&boxKeys[8] == 'o'){
		printf("\n\033[31;7mPlayer 2 has won the match\033[0m\n");
		exit(0);
	}
	else if(boxKeys[0] == 'o'&&boxKeys[3] == 'o'&&boxKeys[6] == 'o'){
		printf("\n\033[31;7mPlayer 2 has won the match\033[0m\n");
		exit(0);
	}
	else if(boxKeys[1] == 'o'&&boxKeys[4] == 'o'&&boxKeys[7] == 'o'){
		printf("\n\033[31;7mPlayer 2 has won the match\033[0m\n");
		exit(0);
	}
	else if(boxKeys[2] == 'o'&&boxKeys[5] == 'o'&&boxKeys[8] == 'o'){
		printf("\n\033[31;7mPlayer 2 has won the match\033[0m\n");
		exit(0);
	}
	else if(boxKeys[0] == 'o'&&boxKeys[4] == 'o'&&boxKeys[8] == 'o'){
		printf("\n\033[31;7mPlayer 2 has won the match\033[0m\n");
		exit(0);
	}
	else if(boxKeys[2] == 'o'&&boxKeys[4] == 'o'&&boxKeys[6] == 'o'){
		printf("\n\033[31;7mPlayer 2 has won the match\033[0m\n");
		exit(0);
	}

}
} // Loop for turn ends here
} // Main function ends here
