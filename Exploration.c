#include <stdio.h>
#include <string.h>

struct Lieu {
	char nom[100];
	char description[100];
	int  difficulte;
	char id[100];
	
};
typedef struct Lieu lieu;


int deplacement (lieu lieu1,lieu lieu2,lieu lieu3){
	
	char destination[100];
	scanf ("%s",&destination);

	if ( strcmp (destination, "Forgefer") == 0){
	printf ("Vous vous rendez donc a %s\n", lieu1.nom);
	printf ("%s\n",lieu1.description);
	printf ("Quelle destination voulez vous choisir ? %s ou %s ?\n", lieu2.nom, lieu3.nom);
	scanf ("%s",destination); 
	}
		
	if ( strcmp (destination, "Orgrimmar") == 0){
	printf ("Vous vous rendez donc a %s\n", lieu2.nom);
	printf ("%s\n",lieu2.description);
	printf ("Quelle destination voulez vous choisir ?  %s ou %s ?\n", lieu1.nom, lieu3.nom);
	scanf ("%s",destination); 
	}
		
	else if ( strcmp (destination, "Dalaran") == 0){
	printf ("Vous vous rendez donc a %s\n", lieu3.nom);
	printf ("%s\n",lieu3.description);
	printf ("Quelle destination voulez vous choisir ?  %s ou %s ?\n", lieu1.nom, lieu2.nom);
	scanf ("%s",destination); 
	}
	
}

int main (){
	

	lieu lieu1 ={ "Forgefer", "Capitale des nains" , 10, "Hurlevent"};
	lieu lieu2 ={ "Orgrimmar", "Capitale des orc" , 15, "Durotar"};
	lieu lieu3 ={ "Dalaran", "Capitale neutre" , 19, "Suramar"};
	
	printf ("Ou voulez vous aller ? %s ou %s ou %s ?\n", lieu1.nom, lieu2.nom, lieu3.nom);
	

	
	deplacement(lieu1,lieu2,lieu3);
	
	
	return 0;
}