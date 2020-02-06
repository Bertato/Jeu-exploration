#include <stdio.h>
#include <string.h>

int destination = 0;

int main (){


printf ("Quelle destination voulez vous choisir ? Forgefer (1) ou Orgrimmar (2) ?\n");
scanf ("%d",&destination);

	if (destination == 1){
	printf ("Vous vous rendez donc a Forgefer\n");
	}

	else if (destination == 2){
	printf ("Vous vous rendre donc a Orgrimmar");
	}
	
return 0;
}