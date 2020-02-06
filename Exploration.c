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
struct Lieu {
	char nom[100];
	char description[100];
	int  difficulte;
	int id[2];
	
};
typedef struct Lieu lieu;


int deplacement (lieu lieu1,lieu lieu2,lieu lieu3){
	
	char destination[100];
	int id = 0;
	scanf ("%s",&destination);

	if ( strcmp (destination, "Forgefer") == 0){
	printf ("Vous vous rendez donc a %s\n", lieu1.nom);
	printf ("%s\n",lieu1.description);
	printf ("Quelle destination voulez vous choisir ?  Hurlevent (1) ou Gnomeregan (2) ?\n");
	scanf ("%d",&id); 
	}
		
	if ( strcmp (destination, "Orgrimmar") == 0){
	printf ("Vous vous rendez donc a %s\n", lieu2.nom);
	printf ("%s\n",lieu2.description);
	printf ("Quelle destination voulez vous choisir ?  Durotar (3) ou Tarides (4) ?\n");
	scanf ("%d",&id);  
	}
		
	else if ( strcmp (destination, "Dalaran") == 0){
	printf ("Vous vous rendez donc a %s\n", lieu3.nom);
	printf ("%s\n",lieu3.description);
	printf ("Quelle destination voulez vous choisir ?  Suramar (6) ou ValShara (7) ?\n");
	scanf ("%d",&id); 
	}
	
}

int main (){
	

	lieu lieu1 ={ "Forgefer", "Capitale des nains" , 10,{1,2}};
	lieu lieu2 ={ "Orgrimmar", "Capitale des orc" , 15, {4,5}};
	lieu lieu3 ={ "Dalaran", "Capitale neutre" , 19, {6,7}};
	
	printf ("Ou voulez vous aller ? %s ou %s ou %s ?\n", lieu1.nom, lieu2.nom, lieu3.nom);
	

	
	deplacement(lieu1,lieu2,lieu3);
	
	
	return 0;
}