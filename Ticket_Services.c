#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	char idiothta;
	int eisithria;
	char eidos[8];
	
	
	do{
	  printf("Kalosirthate sthn ekdosh eisithriwn\n\n");
	  printf("Gia anilikos patiste A\nGia foithths patiste F\nGia enilikas patiste E\nGia hlikiwmenos patiste H\n");
	  scanf("%s", &idiothta);

	   if (idiothta=='A')
	   {
	   	do{
		 printf("Posa eisithria gia aniliko thelete?\nMporeite na parete apo 1 ews 4\n\n");
		 scanf("%d", &eisithria);
		 if (eisithria!=1 && eisithria!=2 && eisithria!=3 && eisithria!=4)
	  	{
	  		printf("Kanate lathos pliktrologisi eisithriwn\n\n");
		  }
	    }while (eisithria!=1 && eisithria!=2 && eisithria!=3 && eisithria!=4);
	    do{
		 printf("Iparxei Eniaio me 1,40 kai Meiwmeno me 0,60\n\n");
	     printf("Efoson epileksate gia aniliko prepei na epileksete Meiwmeno\n\n");
	     scanf("%s", &eidos);
	      if (strcmp(eidos, "Meiwmeno")!=0)
	      {
	      	printf("Mporeite na epileksete mono Meiwmeno\n\n");
		  } 
	    }while (strcmp(eidos, "Meiwmeno")!=0);
	   }
	  if (idiothta=='F')
	  {
	  	do{
		printf("Posa eisithria gia foithth thelete?\nMporeite na parete apo 1 ews 4\n\n");
		scanf("%d", &eisithria);
		if (eisithria!=1 && eisithria!=2 && eisithria!=3 && eisithria!=4)
	  	{
	  		printf("Kanate lathos pliktrologisi eisithriwn\n\n");
		  }
	    }while (eisithria!=1 && eisithria!=2 && eisithria!=3 && eisithria!=4);
	  do{
		 printf("Iparxei Eniaio me 1,40 kai Meiwmeno me 0,60\n\n");
	     printf("Efoson epileksate gia foithth prepei na epileksete Meiwmeno\n\n");
	     scanf("%s", &eidos);
	      if (strcmp(eidos, "Meiwmeno")!=0)
	      {
	      	printf("Mporeite na epileksete mono Meiwmeno\n\n");
		  } 
	    }while (strcmp(eidos, "Meiwmeno")!=0);
	  }
	  if (idiothta=='E')
	  {
	  	do{
		printf("Posa eisithria gia enilika thelete?\nMporeite na parete apo 1 ews 4\n\n");
		scanf("%d", &eisithria);
		if (eisithria!=1 && eisithria!=2 && eisithria!=3 && eisithria!=4)
	  	{
	  		printf("Kanate lathos pliktrologisi eisithriwn\n\n");
		  }
	    }while (eisithria!=1 && eisithria!=2 && eisithria!=3 && eisithria!=4);
	  do{
		 printf("Iparxei Eniaio me 1,40 kai Meiwmeno me 0,60\n\n");
	     printf("Efoson epileksate gia enhlika prepei na epileksete Eniaio\n\n");
	     scanf("%s", &eidos);
	      if (strcmp(eidos, "Eniaio")!=0)
	      {
	      	printf("Mporeite na epileksete mono Eniaio\n\n");
		  } 
	    }while (strcmp(eidos, "Eniaio")!=0);
	  }
	  if (idiothta=='H')
	  {
	  	do{
		printf("Posa eisithria gia hlikiwmeno thelete?\nMporeite na parete apo 1 ews 4\n\n");
		scanf("%d", &eisithria);
		if (eisithria!=1 && eisithria!=2 && eisithria!=3 && eisithria!=4)
	  	{
	  		printf("Kanate lathos pliktrologisi eisithriwn\n\n");
		  }
	    }while (eisithria!=1 && eisithria!=2 && eisithria!=3 && eisithria!=4);
	  do{
		 printf("Iparxei Eniaio me 1,40 kai Meiwmeno me 0,60\n\n");
	     printf("Efoson epileksate gia aniliko prepei na epileksete Meiwmeno\n\n");
	     scanf("%s", &eidos);
	      if (strcmp(eidos, "Meiwmeno")!=0)
	      {
	      	printf("Mporeite na epileksete mono meiwmeno\n\n");
		  } 
	    }while (strcmp(eidos, "Meiwmeno")!=0);
	  }
	  if (idiothta!='A' && idiothta!='F'&& idiothta!='Å' && idiothta!='H')
	  {
	    printf("Kanate lathos pliktrologisi\n\n");
	  }
   } while (idiothta!='A' && idiothta!='F' && idiothta!='Å' && idiothta!='H');
	return 0;
}
