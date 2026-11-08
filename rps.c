#include <string.h>
#include <stdio.h>
#include "rps.h"

char* determineWinner(char player1[], char player2[])
{
	int p1_is_valid = (strcmp(player1, "Rock") == 0 || strcmp(player1, "Paper") == 0 || strcmp(player1, "Scissors") == 0);
	int p2_is_valid = (strcmp(player2, "Rock") == 0 || strcmp(player2, "Paper") == 0 || strcmp(player2, "Scissors") == 0);

	if (p1_is_valid == 0 || p2_is_valid == 0)
	{
		return "Invalid";
	}
	
	if (strcmp(player1, player2) == 0)
	{
		return "Draw";
	}

	if (strcmp(player1, "Rock") == 0 && strcmp(player2, "Scissors") == 0)
	{
		return "Player1";
	}
	else if (strcmp(player1, "Scissors") == 0 && strcmp(player2, "Paper") == 0)
	{
		return "Player1";
	}
	else if (strcmp(player1, "Paper") == 0 && strcmp(player2, "Rock") == 0)
	{
		return "Player1";
	}

	return "Player2";
}