#include <stdio.h>
#include <string.h>

char destination[100];

int main (){


printf ("Quelle destination voulez vous choisir ? Forgefer ou Orgrimmar ?\n");
scanf("%[^\n]",destination);

	if ( strcmp (destination, "Forgefer") == 0){
	printf ("Vous vous rendez donc a Forgefer\n");
	}

	else if ( strcmp (destination, "Orgrimmar") == 0){
	printf ("Vous vous rendre donc a Orgrimmar");
	}
	
return 0;
}