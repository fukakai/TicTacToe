#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits>


main(){
	int i;
   int numjoueur;
   int ligne;
   int colonne;
   char signe='X'; // signe est par défaut X
   int x=12;       // 1 ère ligne,
   int y=15;       // 2 ème ligne,
   int z=18;       // 3 ème ligne,

   // je compte garde en mémoire avec 0 ou 1 les cases remplies par les joueurs 1 ou 2
   int case1joueur1 = 0;
   int case2joueur1 = 0;
   int case3joueur1 = 0;
   int case4joueur1 = 0;
   int case5joueur1 = 0;
   int case6joueur1 = 0;
   int case7joueur1 = 0;
   int case8joueur1 = 0;
   int case9joueur1 = 0;

   int case1joueur2 = 0;
   int case2joueur2 = 0;
   int case3joueur2 = 0;
   int case4joueur2 = 0;
   int case5joueur2 = 0;
  	int case6joueur2 = 0;
 	int case7joueur2 = 0;
   int case8joueur2 = 0;
   int case9joueur2 = 0;

   //-----------------------------------Dessin des traits horizontaux-----
	for (i=30;i<45;i++){ //horizontal
     gotoxy(i,10);
    	 cout<<"-";
     gotoxy(i,13);
     	cout<<"-";
     gotoxy(i,16);
    	 cout<<"-";
     gotoxy(i,19);
    	 cout<<"-";
	};
   //-------------------------------------Dessin des traits verticaux-----
	for (i=10;i<20;i++){ //Vertical
     gotoxy(30,i);
    	 cout<<"|";
     gotoxy(35,i);
    	 cout<<"|";
     gotoxy(40,i);
    	 cout<<"|";
     gotoxy(45,i);
    	 cout<<"|";
     };
     numjoueur=1;
  //-----------------------------------------Indications horizontales-----

     gotoxy(27,11);
    	 cout<<"L.1";
     gotoxy(27,14);
     	cout<<"L.2";
     gotoxy(27,17);
    	 cout<<"L.3";

  //--------------------------------------------Indications Verticales-----

  		gotoxy(32,9);
    	 cout<<"C.1";
    	gotoxy(37,9);
    	 cout<<"C.2";
    	gotoxy(42,9);
    	 cout<<"C.3";

     	//--------------------------------------------Boucle du programme-----
   for (i=1;i<10;i++){

		//---------------------------------------------------------signe-----
      if(numjoueur==1){
      	signe='X';
         };
      if(numjoueur==2){
      	signe='O';
         };

      //------------------------------------texte affiché tout le temps-----
   	gotoxy(2,2);
  			cout<<"c'est au joueur " << numjoueur << " de jouer";
      do{
      	gotoxy(2,3);
      	cout<<"ligne = ";
      	cin>>ligne;
      }while (ligne<1 || ligne>3);
      do{
      	gotoxy(2,4);
         cout<<"colonne = ";
        	cin>>colonne;
      }while (colonne<1 || colonne>3);
         gotoxy(10,3);
         cout<<" ";
      	gotoxy(12,4);
         cout<<" ";

      //-------------coordonées X et O qui apparaissent dans les cases-----
      if(ligne==1 && colonne==1){
         if((case1joueur1 || case1joueur2) == 1){
            gotoxy(2,6);
            cout<<"Entree invalide, rejouez !";
            i=i-1;
         }else{
       		gotoxy(32,x);
         	cout<<signe;
        		if(numjoueur==1){
       			case1joueur1 = case1joueur1 + 1;
        		}else{
         		case1joueur2 = case1joueur2 + 1;
         	};
      //--Inversion joueurs-----
				numjoueur=(numjoueur+1)%3;
      		if(numjoueur==0){
      			numjoueur=1;
       		};
       	};
      };
      if(ligne==1 && colonne==2){
         if((case2joueur1 || case2joueur2) == 1){
            gotoxy(2,6);
            cout<<"Entree invalide, rejouez !";
            i=i-1;
         }else{
       		gotoxy(37,x);
         	cout<<signe;
       		if(numjoueur==1){
       			case2joueur1 = case2joueur1 + 1;
         	}else{
         		case2joueur2 = case2joueur2 + 1;
         	};
      //--Inversion joueurs-----
				numjoueur=(numjoueur+1)%3;
      		if(numjoueur==0){
      			numjoueur=1;
       		};
       	};
      };
      if(ligne==1 && colonne==3){
         if((case3joueur1 || case3joueur2) == 1){
            gotoxy(2,6);
            cout<<"Entree invalide, rejouez !";
            i=i-1;
         }else{
       		gotoxy(42,x);
         	cout<<signe;
       		if(numjoueur==1){
       			case3joueur1 = case3joueur1 + 1;
         	}else{
         		case3joueur2 = case3joueur2 + 1;
         	};
      //--------------------------------------------Inversion joueurs-----
				numjoueur=(numjoueur+1)%3;
      		if(numjoueur==0){
      			numjoueur=1;
       		};
       	};
      };
      if(ligne==2 && colonne==1){
         if((case4joueur1 || case4joueur2) == 1){
            gotoxy(2,6);
            cout<<"Entree invalide, rejouez !";
            i=i-1;
         }else{
       		gotoxy(32,y);
         	cout<<signe;
       		if(numjoueur==1){
       			case4joueur1 = case4joueur1 + 1;
         	}else{
         		case4joueur2 = case4joueur2 + 1;
         	};
      //--------------------------------------------Inversion joueurs-----
				numjoueur=(numjoueur+1)%3;
      		if(numjoueur==0){
      			numjoueur=1;
       		};
       	};
      };
      if(ligne==2 && colonne==2){
         if((case5joueur1 || case5joueur2) == 1){
            gotoxy(2,6);
            cout<<"Entree invalide, rejouez !";
            i=i-1;
         }else{
        		gotoxy(37,y);
         	cout<<signe;
       		if(numjoueur==1){
       			case5joueur1 = case5joueur1 + 1;
         	}else{
         		case5joueur2 = case5joueur2 + 1;
         	};
      //--------------------------------------------Inversion joueurs-----
				numjoueur=(numjoueur+1)%3;
      		if(numjoueur==0){
      			numjoueur=1;
       		};
       	};
      };
      if(ligne==2 && colonne==3){
         if((case6joueur1 || case6joueur2) == 1){
            gotoxy(2,6);
            cout<<"Entree invalide, rejouez !";
            i=i-1;
         }else{
       		gotoxy(42,y);
      		cout<<signe;
       		if(numjoueur==1){
       			case6joueur1 = case6joueur1 + 1;
         	}else{
         		case6joueur2 = case6joueur2 + 1;
         	};
      //--------------------------------------------Inversion joueurs-----
				numjoueur=(numjoueur+1)%3;
      		if(numjoueur==0){
      			numjoueur=1;
       		};
       	};
      };
      if(ligne==3 && colonne==1){
         if((case7joueur1 || case7joueur2) == 1){
            gotoxy(2,6);
            cout<<"Entree invalide, rejouez !";
            i=i-1;
         }else{
       		gotoxy(32,z);
        		cout<<signe;
       		if(numjoueur==1){
       			case7joueur1 = case7joueur1 + 1;
         	}else{
         		case7joueur2 = case7joueur2 + 1;
         	};
      //--------------------------------------------Inversion joueurs-----
				numjoueur=(numjoueur+1)%3;
      		if(numjoueur==0){
      			numjoueur=1;
       		};
       	};
      };
      if(ligne==3 && colonne==2){
         if((case8joueur1 || case8joueur2) == 1){
            gotoxy(2,6);
            cout<<"Entree invalide, rejouez !";
            i=i-1;
         }else{
       		gotoxy(37,z);
        		cout<<signe;
       		if(numjoueur==1){
       			case8joueur1 = case8joueur1 + 1;
         	}else{
         		case8joueur2 = case8joueur2 + 1;
         	};
      //--------------------------------------------Inversion joueurs-----
				numjoueur=(numjoueur+1)%3;
      		if(numjoueur==0){
      			numjoueur=1;
       		};
       	};
      };
      if(ligne==3 && colonne==3){
         if((case9joueur1 || case9joueur2) == 1){
            gotoxy(2,6);
            cout<<"Entree invalide, rejouez !";
            i=i-1;
         }else{
         	gotoxy(42,z);
         	cout<<signe;
       		if(numjoueur==1){
       			case9joueur1 = case9joueur1 + 1;
         	}else{
         		case9joueur2 = case9joueur2 + 1;
         	};
      //--------------------------------------------Inversion joueurs-----
				numjoueur=(numjoueur+1)%3;
      		if(numjoueur==0){
      			numjoueur=1;
       		};
       	};
      };

      //---------------------------------------------Si un joueur gagne-----
      if((case1joueur1 + case2joueur1 + case3joueur1)==3 ||
      	(case4joueur1 + case5joueur1 + case6joueur1)==3 ||
         (case7joueur1 + case8joueur1 + case9joueur1)==3 ||
         (case1joueur1 + case4joueur1 + case7joueur1)==3 ||
         (case3joueur1 + case6joueur1 + case9joueur1)==3 ||
         (case1joueur1 + case5joueur1 + case9joueur1)==3 ||
         (case7joueur1 + case5joueur1 + case3joueur1)==3){
         	i=9;
        		gotoxy(2,5);
      		cout<<"joueur 1 a gagne ! bravo !";
      }else{
      if((case1joueur2 + case2joueur2 + case3joueur2)==3 ||
      	(case4joueur2 + case5joueur2 + case6joueur2)==3 ||
         (case7joueur2 + case8joueur2 + case9joueur2)==3 ||
         (case1joueur1 + case4joueur1 + case7joueur1)==3 ||
         (case3joueur1 + case6joueur1 + case9joueur1)==3 ||
         (case1joueur2 + case5joueur2 + case9joueur2)==3 ||
         (case7joueur2 + case5joueur2 + case3joueur2)==3){
         	i=9;
        		gotoxy(2,5);
      		cout<<"joueur 2 a gagne ! bravo !";
      }else{
      if(i==9){
      	gotoxy(2,5);
         cout<<"aucun joueur n'a gagne !";
      };
      };
    };
   };
   	getch();
}