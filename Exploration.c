#include <stdio.h>
#include <string.h>


struct Lieu {
	char nom[100];
	char description[100];
	int  difficulte;
	int id[5];
	
};
typedef struct Lieu lieu;


int deplacement (lieu lieux[]){
	
	char destination[100];
	char retenirDesti[100];
	int id = 0;
	scanf ("%s",&destination);

	if ( strcmp (destination, "Forgefer") == 0){
	printf ("Vous vous rendez donc a %s\n", lieux[0].nom);
	printf ("%s\n",lieux[0].description);
	printf ("Quelle destination voulez vous choisir ?  Hurlevent (4) ou Gnomeregan (5) ?\n");
	scanf ("%d",&id); 
	}
		
	if ( strcmp (destination, "Orgrimmar") == 0){
	printf ("Vous vous rendez donc a %s\n", lieux[1].nom);
	printf ("%s\n",lieux[1].description);
	printf ("Quelle destination voulez vous choisir ?  Durotar (6) ou Tarides (7) ?\n");
	scanf ("%d",&id);  
	}
		
	else if ( strcmp (destination, "Dalaran") == 0){
	printf ("Vous vous rendez donc a %s\n", lieux[2].nom);
	printf ("%s\n",lieux[2].description);
	printf ("Quelle destination voulez vous choisir ?  Suramar (8) ou ValShara (9) ?\n");
	scanf ("%d",&id);
	//printf ("Vous vous rendez donc a %s\n", lieux[].nom);
	}
	
}

int main (){
	

	lieu lieux [10] ={
					"Forgefer", "Capitale des nains\n" ,10,{3,4},
					"Orgrimmar", "Capitale des orc\n" , 15, {5,6},
					"Dalaran", "Capitale neutre\n" , 19, {0,1,7,8},
					"Hurlevent", "Capitale des humains\n", 17,{0,4},
					"Gnomeregan", "Capitale des gnomes\n", 10,{0,3},
					"Durotar", "Village orc\n", 5, {1,6},
					"Tarides", "Village de la horde\n", 7, {5},
					"Suramar", "Ville des Sacrenuits\n", 13,{8,2},
					"ValShara", "Ville des Nagas\n",13,{8,7}
	};
	
	
printf ("Ou voulez vous aller ? %s ou %s ou %s ?\n", lieux[1].nom, lieux[2].nom, lieux[3].nom);
	

	
	deplacement(lieux);
	
	
	return 0;
}