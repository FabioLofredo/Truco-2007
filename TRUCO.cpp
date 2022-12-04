#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct{
        char jogador; // h = humano ,  c = computador , e = empate 
        char ulttruco; // h = humano ,  c = computador , n = ninguem , d = os dois
        int pontos;
        int mca;
        int mcb;
        int mcc;
        int aica;
        int aicb;
        int aicc;
        int finalizar; // 1 = sim , 0 = naum
        int ia;  
         } Tgame;







void fazeroriginal(char original[40][2]){
       int i;
      /*
      paus 30 a 39
      copas 20 a 29
      espadas 10 a 19
      ouros 0 a 9
      0 carta
      1 naipe
      */
      for(i=0 ;i<10;i++){
              original[i][1]=4;
              }
      for(i=10 ;i<20;i++){
              original[i][1]=6;
              }
      for(i=20 ;i<30;i++){
              original[i][1]=3;
              }
      for(i=30 ;i<40;i++){
              original[i][1]=5;
              }
     for(i=0; i<40;i= i + 10){
original[0+i][0]= '4';
original[1+i][0]= '5';
original[2+i][0]= '6';
original[3+i][0]= '7';
original[4+i][0]= 'Q';
original[5+i][0]= 'J';
original[6+i][0]= 'K';
original[7+i][0]= 'A';
original[8+i][0]= '2';
original[9+i][0]= '3';
}
}

void fazercarta(char carta[40][2] , char original[40][2]){
      int i;
       for(i=0 ; i<40;i ++){
               carta [i][0]= original[i][0];
               carta [i][1]= original[i][1];
               }
        }


void atualizarcarta(char carta[40][2], int excluir,int randommax){
     char temp[2];
     
     temp[0] = carta[excluir][0];
     temp[1] = carta[excluir][1];
     carta[excluir][0] = carta[randommax-1][0];
     carta[excluir][1] = carta[randommax-1][1];
     carta[randommax-1][0] = temp[0];
     carta[randommax-1][1] = temp[1];
     
     }



int forcacartas(char carta[40][2], char original[40][2])
{
 int i,j, m;
    int forca = 0 , blefe;
    
    for (i=0 ;i<10 ; i++)
    {
    if( carta[33][0] == original[i][0])
                     {
                     m = i+1;
                     if (m == 10){m=0;}
                     }
    }
    
if (carta[34][0] == original[m + 30][0] || carta[34][0] == original[m + 20][0] || carta[34][0] == original[m + 10][0] ||carta[34][0] == original[m + 0][0])
{
if (carta[34][1] == original[m + 30][1]){forca = forca + 50;}
if (carta[34][1] == original[m + 20][1]){forca = forca + 40;}
if (carta[34][1] == original[m + 10][1]){forca = forca + 35;}
if (carta[34][1] == original[m + 0][1]){forca = forca + 30;}
}

if (carta[35][0] == original[m + 30][0] || carta[35][0] == original[m + 20][0] || carta[35][0] == original[m + 10][0] ||carta[35][0] == original[m + 0][0])
{
if (carta[35][1] == original[m + 30][1]){forca = forca + 50;}
if (carta[35][1] == original[m + 20][1]){forca = forca + 40;}
if (carta[35][1] == original[m + 10][1]){forca = forca + 35;}
if (carta[35][1] == original[m + 0][1]){forca = forca + 30;}
}

if (carta[36][0] == original[m + 30][0] || carta[36][0] == original[m + 20][0] || carta[36][0] == original[m + 10][0] ||carta[36][0] == original[m + 0][0])
{
if (carta[36][1] == original[m + 30][1]){forca = forca + 50;}
if (carta[36][1] == original[m + 20][1]){forca = forca + 40;}
if (carta[36][1] == original[m + 10][1]){forca = forca + 35;}
if (carta[36][1] == original[m + 0][1]){forca = forca + 30;}
}
 


if(m!=9){
         if (carta[34][0] == '3' || carta[35][0] == '3' || carta[36][0] == '3')
            {forca = forca + 20;}
         if (carta[34][0] == '3' && carta[35][0] == '3' )
            {forca = forca + 20;}
         if (carta[35][0] == '3' && carta[36][0] == '3')
            {forca = forca + 20;}
         if (carta[34][0] == '3' && carta[35][0] == '3' && carta[36][0] == '3')
            {forca = forca + 20;}
         }

if(m!=8){
         if (carta[34][0] == '2' || carta[35][0] == '2' || carta[36][0] == '2')
            {forca = forca + 15;}
         if (carta[34][0] == '2' && carta[35][0] == '2' )
            {forca = forca + 15;}
         if (carta[35][0] == '2' && carta[36][0] == '2' )
            {forca = forca + 15;}
         if (carta[34][0] == '2' && carta[35][0] == '2' && carta[36][0] == '2')
            {forca = forca + 15;}
            }

if(m!=7){
         if (carta[34][0] == 'A' || carta[35][0] == 'A' || carta[36][0] == 'A')
            {forca = forca + 10;}
         if (carta[34][0] == 'A' && carta[35][0] == 'A' )
            {forca = forca + 10;}
         if (carta[35][0] == 'A' && carta[36][0] == 'A')
            {forca = forca + 10;}
         if (carta[34][0] == 'A' && carta[35][0] == 'A' && carta[36][0] == 'A')
            {forca = forca + 10;}
            }

if(m!=6){
         if (carta[34][0] == 'K' || carta[35][0] == 'K' || carta[36][0] == 'K')
            {forca = forca + 5;}
         if (carta[34][0] == 'K' && carta[35][0] == 'K')
            {forca = forca + 5;}
         if (carta[35][0] == 'K' && carta[36][0] == 'K')
            {forca = forca + 5;}
         if (carta[34][0] == 'K' && carta[35][0] == 'K' && carta[36][0] == 'K')
            {forca = forca + 5;}
            }
            

if(forca < 20)
{
blefe = rand()%100;
if(blefe < 1){ if(forca<75){forca = 0;}}
if(blefe >= 1 && blefe < 5){forca = 200;}
if(blefe >= 5 && blefe < 10){forca = 45;}
if(blefe >= 10 && blefe < 13){forca = forca + 10;}
if(blefe >= 13 && blefe < 16){forca = forca + 20;}
if(blefe >= 16 && blefe < 18){forca = forca + 30;}
if(blefe >= 18 && blefe < 20){forca = forca - 10;}
if(blefe >= 20 && blefe < 22){forca = forca - 20;}
if(blefe >= 22 && blefe < 21){forca = forca - 30;}
if(blefe >= 21 && blefe < 26){forca = forca + 5;}
if(blefe >= 26 && blefe < 36){forca = forca + 2;}
if(blefe >= 36 && blefe < 40){forca = forca - 5;}
if(blefe >= 40 && blefe < 50){forca = forca - 2;}
}

/*
// ver cartas do computador
printf("forca:%d\n", forca);
printf("\t\tcarta 1: %c%c \n",carta[36][0],carta[36][1]);
printf("\t\tcarta 2: %c%c \n",carta[35][0],carta[35][1]);
printf("\t\tcarta 3: %c%c \n",carta[34][0],carta[34][1]); 

*/


    return forca;

    }











char combate(char carta[40][2], char original[40][2],int jogadajogador,int jogadacomputador){

    int i,j, m, cc, ch;
    int forca[40];
    
    for (i=0 ;i<10 ; i++)
    {
    if( carta[33][0] == original[i][0])
                     {
                     m = i+1;
                     if (m == 10){m=0;}
                     }
    }
    
    
    
    
    
    for (i=0 ;i<40 ; i++){
       if (carta[jogadajogador][0]== original[i][0] && carta[jogadajogador][1] == original[i][1]){ch = i;}
       if (carta[jogadacomputador][0]==original[i][0] && carta[jogadacomputador][1]==original[i][1]){cc = i;}
        }
    
    
    
    
    
    for (i=0 ;i<40 ; i = i + 10)
    {
forca[0+i]= 1;
forca[1+i]= 2;
forca[2+i]= 3;
forca[3+i]= 4;
forca[4+i]= 5;
forca[5+i]= 6;
forca[6+i]= 7;
forca[7+i]= 8;
forca[8+i]= 9;
forca[9+i]= 10;
}

    forca[m + 0] = 20 ;
    forca[m + 10] = 30;
    forca[m + 20] = 40;
    forca[m + 30] = 50;
    
     if(forca[ch] > forca[cc]){return 'h';}        
     if(forca[ch] < forca[cc]){return 'c';} 
     if(forca[ch] == forca[cc]){return 'e';}
        }
    
    
    
    
Tgame ftruco(char carta[40][2], char original[40][2],Tgame jog){
    int escolhaa ,escolhab,escolhac ,escolhad , z;
    
    
    if(jog.ia == 1){z = 200;}
    
    
if (jog.pontos == 1 && jog.ulttruco == 'c' ){//computador truca
            printf("\n\tTRUCO!\n"); 
            printf("\toque deseja fazer:\n"); 
            printf("\t(1)aceitar\n"); 
            printf("\t(2)Seis\n"); 
            printf("\t(3)fugir\n");
            do{printf("\t"); scanf("%d", &escolhaa); } while( escolhaa!= 1 && escolhaa!= 2 && escolhaa != 3);
            
            if( escolhaa ==1){
            jog.pontos = 3;
            jog.ulttruco = 'c';//quem trucou por ultimo
            return jog;
            }
            if( escolhaa ==2){
            jog.ulttruco = 'h';
            jog.pontos = 3;
            }
            
            if( escolhaa ==3){
                jog.finalizar = 1 ;   
                jog.ulttruco = 'c';
                jog.pontos = 1; 
                jog.jogador = 'c'; 
                return jog;}
            }
                
                
                
                
                
if (jog.pontos == 1 && jog.ulttruco == 'h'){
                
            z = forcacartas(carta,original);   
            
          
                
                
               if(z>=20 && z<=45){
               jog.pontos = 3;
               jog.ulttruco = 'h';
               printf("\n\tAceito!\n\t");
               system("pause");
               return jog;
               }
                   
               if(z>45){
                jog.pontos = 3 ;
                jog.ulttruco = 'c';
                }
                  
                if(z<20){
                 printf("\n\tfujo...\n\t"); 
                 system("pause");
                jog.finalizar = 1 ;      
                jog.ulttruco = 'h';
                jog.pontos = 1;
                jog.jogador = 'h';  
                return jog;}

               }
                   
                
if (jog.pontos == 3 && jog.ulttruco == 'c')
                {
                printf("\n\tSEISSSSSS!!!\n");  
                printf("\toque deseja fazer:\n"); 
                printf("\t(1)aceitar\n"); 
                printf("\t(2)Nove\n"); 
                printf("\t(3)fugir\n");
                do{printf("\t"); scanf("%d", &escolhab); } while( escolhab!= 1 && escolhab!= 2 && escolhab != 3);
                
                if(escolhab==1){
                jog.ulttruco = 'c';
                jog.pontos = 6;
                return jog;
                                }
                
                if(escolhab==2){
                jog.ulttruco = 'h';
                jog.pontos = 6;
                                }
                if( escolhab ==3){
                jog.finalizar = 1 ;      
                jog.ulttruco = 'c';
                jog.pontos = 3;
                jog.jogador = 'c';
                return jog;}
            }                 
                                 
                                 
                                 
                                 
if (jog.pontos == 3 && jog.ulttruco == 'h'){
                 
                 
                 z = forcacartas(carta,original);   
            
               if(z>=40 && z<=70){
               jog.pontos = 6;
               jog.ulttruco = 'h';
               printf("\n\tAceito!\n\t");
               system("pause");
               return jog;
               }
                   
               if(z>70){
                jog.pontos = 6 ;
                jog.ulttruco = 'c';
                }
                  
                if(z<40){
                 printf("\n\tfujo...\n\t"); 
                 system("pause");
                jog.finalizar = 1 ;      
                jog.ulttruco = 'h';
                jog.pontos = 3;
                jog.jogador = 'h'; 
                return jog;}

               
               }
                
if (jog.pontos == 6 && jog.ulttruco == 'c')
{
                
                printf("\n\tNOVEEEEEEEEEE!!!\n");  
                printf("\toque deseja fazer:\n"); 
                printf("\t(1)aceitar\n"); 
                printf("\t(2)Doze\n"); 
                printf("\t(3)fugir\n");
                do{printf("\t"); scanf("%d", &escolhac); } while( escolhac!= 1 && escolhac!= 2 && escolhac != 3);
                
                if(escolhac==1){
                jog.ulttruco = 'c';
                jog.pontos = 9;
                return jog;
                                }
                
                if(escolhac==2){
                jog.ulttruco = 'h';
                jog.pontos = 12;
                                }
                if( escolhac ==3){
                jog.finalizar = 1 ;      
                jog.ulttruco = 'c';
                jog.pontos = 6;
                jog.jogador = 'c';
                return jog;} 
                }
                
                
                 
                
if (jog.pontos == 6 && jog.ulttruco == 'h'){
                  
                 z = forcacartas(carta,original);   
            
               if(z>=55 && z<=80){
               jog.pontos = 9;
               jog.ulttruco = 'h';
               printf("\n\tAceito!\n\t");
               system("pause");
               return jog;
               }
                   
               if(z>80){
                jog.pontos = 9 ;
                jog.ulttruco = 'c';
                }
                  
                if(z<55){
                 printf("\n\tfujo...\n\t");
                 system("pause"); 
                jog.finalizar = 1 ;      
                jog.ulttruco = 'h';
                jog.pontos = 6;
                jog.jogador = 'h';
                return jog;}

               
               }
                
           
                
                
if (jog.pontos == 9 && jog.ulttruco == 'c'){
                 
                 printf("\n\tDOZEEEEEEEEEEEEE!!!!!!!!!!!!!!\n");  
                printf("\toque deseja fazer:\n"); 
                printf("\t(1)aceitar\n");
                printf("\t(2)fugir\n");
                do{printf("\t"); scanf("%d", &escolhad); } while( escolhad!= 1 && escolhad!= 2 && escolhad != 3);
                
                if(escolhad==1){
                jog.ulttruco = 'd';
                jog.pontos = 12;
                return jog;
                                }
                
                                
                if( escolhad ==2){
                jog.finalizar = 1 ;      
                jog.ulttruco = 'c';
                jog.pontos = 9;
                jog.jogador = 'c';
                return jog;} 
               }
                
                
if (jog.pontos == 9 && jog.ulttruco == 'h'){ 
                 
                 z = forcacartas(carta,original);   
            
               if(z>=80 ){
               jog.pontos = 12;
               jog.ulttruco = 'd';
               printf("\n\tAceito!\n\t");
               system("pause");
               return jog;
               }
               
                  
                if(z<80){
                 printf("\n\tfujo...\n\t"); 
                 system("pause");
                jog.finalizar = 1 ;      
                jog.ulttruco = 'h';
                jog.pontos = 9;
                jog.jogador = 'h';
                return jog;}

               }
  
    }
    


Tgame jogac(char carta[40][2], char original[40][2], Tgame jog, int vezdejogar , int turno, int ptc , int pth , int agressividade){
       
char vira;
Tgame Taux;
int escolhaa, escolhab, escolhac, escolhad ,aux, jogadacomputador ,jogadajogador,z=0, w=0,tru;
system("cls");
vira = 177;




printf("\n");
printf("Pontos: Voce: %d  -  Computador: %d  -  Pontos em jogo: %d \n", pth, ptc , jog.pontos);if(ptc == 11|| pth == 11){printf("mao de onze");}
printf("\n");
printf("\t\t  Virou: %c%c",carta[33][0],carta[33][1]);
printf("\n\n");
printf("\t\tCartas do pc:\n");


if(turno ==1)
{
printf("\t\t   %c %c %c", vira , vira , vira);
}

if(turno == 2){
if(jog.aica == 0)printf("\t\t     %c %c", vira , vira);
if(jog.aicb == 0)printf("\t\t   %c   %c", vira , vira);
if(jog.aicc == 0)printf("\t\t   %c %c  ", vira , vira);
}

if(turno == 3){
if(jog.aica == 1)printf("\t\t   %c    ", vira);         
if(jog.aicb == 1)printf("\t\t     %c  ", vira);
if(jog.aicc == 1)printf("\t\t       %c", vira);

}





printf("\n\n\n");
printf("\n\n\n\n");
printf("\t\tSuas cartas:\n");

if(turno == 1){
printf("\t\tcarta 1: %c%c \n",carta[39][0],carta[39][1]);
printf("\t\tcarta 2: %c%c \n",carta[38][0],carta[38][1]);
printf("\t\tcarta 3: %c%c \n",carta[37][0],carta[37][1]);    
}


if(turno == 2){
if(jog.mca == 1)printf("\t\tcarta 1: %c%c \n",carta[39][0],carta[39][1]);
if(jog.mcb == 1)printf("\t\tcarta 2: %c%c \n",carta[38][0],carta[38][1]);
if(jog.mcc == 1)printf("\t\tcarta 3: %c%c \n",carta[37][0],carta[37][1]);     
}

if(turno == 3){
if(jog.mca == 1)printf("\t\tcarta 1: %c%c \n",carta[39][0],carta[39][1]);
if(jog.mcb == 1)printf("\t\tcarta 2: %c%c \n",carta[38][0],carta[38][1]);
if(jog.mcc == 1)printf("\t\tcarta 3: %c%c \n",carta[37][0],carta[37][1]);     
}

//  inteligencia artificial {

if(ptc == 11 && pth != 11)
{
z = forcacartas(carta,original);    
       
if (z < 30)
      {
      printf("\n\tfujo...\n\t"); 
      system("pause");
      jog.finalizar = 1 ;
      jog.pontos = 1 ;
      jog.jogador = 'h';  
      return jog;
      } 
}

// }inteligencia artificial 









z = forcacartas(carta,original);           
 
 

 
 
 
 
 
 
 if(jog.pontos == 9 && jog.ulttruco == 'h' && ptc < 3 && pth != 11)
 {
                 if(z > 85)
                 {tru = rand()%100;
                 if (tru < agressividade){
                 
                 jog.ulttruco = 'c';
                 Taux = ftruco(carta,original,jog);
                 if (Taux.finalizar == 1 ){
                 jog.jogador = Taux.jogador; 
                 jog.finalizar = 1;
                 jog.pontos = Taux.pontos;
                 return jog;}
                 jog.pontos = Taux.pontos;
                 jog.ulttruco = Taux.ulttruco;
                 }}}
  if(jog.pontos ==6 && jog.ulttruco == 'h' && ptc < 6 && pth != 11)
 {
                 if(z > 70)
                 {tru = rand()%100;
                 if (tru < agressividade){
                 jog.ulttruco = 'c';
                 Taux = ftruco(carta,original,jog);
                 if (Taux.finalizar == 1 ){
                 jog.jogador = Taux.jogador; 
                 jog.finalizar = 1;
                 jog.pontos = Taux.pontos;
                 return jog;}
                 jog.pontos = Taux.pontos;
                 jog.ulttruco = Taux.ulttruco;
                 }}}   
                 
if(jog.pontos ==3 && jog.ulttruco == 'h' && ptc < 9 && pth != 11)
                {
                 if(z > 45)
                 {tru = rand()%100;
                 if (tru < agressividade){
                 jog.ulttruco = 'c';
                 Taux = ftruco(carta,original,jog);
                 if (Taux.finalizar == 1 ){
                 jog.jogador = Taux.jogador; 
                 jog.finalizar = 1;
                 jog.pontos = Taux.pontos;
                 return jog;}
                 jog.pontos = Taux.pontos;
                 jog.ulttruco = Taux.ulttruco;
                 }}}
   
                 
                 
 if(jog.pontos ==1 && jog.ulttruco == 'h' && ptc < 11 && pth != 11|| jog.pontos ==1 && jog.ulttruco == 'n' && ptc < 11 && pth != 11)
                 {
                 if(z > 30)
                 {tru = rand()%100;
                 if (tru < agressividade){
                 jog.ulttruco = 'c';
                 Taux = ftruco(carta,original,jog);
                 if (Taux.finalizar == 1 ){
                 jog.jogador = Taux.jogador; 
                 jog.finalizar = 1;
                 jog.pontos = Taux.pontos;
                 return jog;}
                 jog.pontos = Taux.pontos;
                 jog.ulttruco = Taux.ulttruco;
                 }}}
 

if(turno ==1)
{

aux = rand()%3;

if(aux == 0)
       {
       jogadacomputador = 36;
       jog.aica =0;
       jog.aicb =1;
       jog.aicc =1;
       }

if(aux == 1)
       {
       jogadacomputador = 35;
       jog.aica =1;
       jog.aicb =0;
       jog.aicc =1;
       }

if(aux == 2)
       {
       jogadacomputador = 34;
       jog.aica =1;
       jog.aicb =1;
       jog.aicc =0;
       }
}


if(turno ==2)
{

aux = rand()%2;

if(jog.aica == 0){
              if(aux == 0){jogadacomputador = 35;jog.aicb =0;}
              if(aux == 1){jogadacomputador = 34;jog.aicc =0;}
              }


else{
if(jog.aicb == 0){
              if(aux == 0){jogadacomputador = 36;jog.aica =0;}
              if(aux == 1){jogadacomputador = 34;jog.aicc =0;}
              }
else{
if(jog.aicc == 0){
              if(aux == 0){jogadacomputador = 36;jog.aica =0;}
              if(aux == 1){jogadacomputador = 35;jog.aicb =0;}
              }              
}            
}              
}

if(turno == 3)
{
if(jog.aica == 1){jogadacomputador = 36;jog.aica =0;}
if(jog.aicb == 1){jogadacomputador = 35;jog.aicb =0;}
if(jog.aicc == 1){jogadacomputador = 34;jog.aicc =0;}
}

system("cls");


vira = 177;

printf("\n");
printf("Pontos: Voce: %d  -  Computador: %d  -  Pontos em jogo: %d \n", pth, ptc , jog.pontos);if(ptc == 11|| pth == 11){printf("mao de onze");}
printf("\n");
printf("\t\t  Virou: %c%c",carta[33][0],carta[33][1]);
printf("\n\n");
printf("\t\tCartas do pc:\n");



if(turno ==1){
if(jogadacomputador == 36)printf("\t\t     %c %c", vira , vira );
if(jogadacomputador == 35)printf("\t\t   %c   %c", vira , vira );
if(jogadacomputador == 34)printf("\t\t   %c %c  ", vira , vira );
}

if(turno == 2){
if(jog.aica == 1)printf("\t\t     %c %c", vira , vira , vira);
if(jog.aicb == 1)printf("\t\t   %c   %c", vira , vira , vira);
if(jog.aicc == 1)printf("\t\t   %c %c  ", vira , vira , vira);
}



printf("\n\n");
printf("\t\t     %c%c  \n",carta[jogadacomputador][0],carta[jogadacomputador][1]);
printf("\n\n\n\n");



printf("\t\tSuas cartas:\n");

if(turno == 1){
printf("\t\tcarta 1: %c%c \n",carta[39][0],carta[39][1]);
printf("\t\tcarta 2: %c%c \n",carta[38][0],carta[38][1]);
printf("\t\tcarta 3: %c%c \n",carta[37][0],carta[37][1]);    
}


if(turno == 2){
if(jog.mca == 1)printf("\t\tcarta 1: %c%c \n",carta[39][0],carta[39][1]);
if(jog.mcb == 1)printf("\t\tcarta 2: %c%c \n",carta[38][0],carta[38][1]);
if(jog.mcc == 1)printf("\t\tcarta 3: %c%c \n",carta[37][0],carta[37][1]);     
}

if(turno ==3)
{
if(jog.mca == 1)printf("\t\tcarta 1: %c%c \n",carta[39][0],carta[39][1]);
if(jog.mcb == 1)printf("\t\tcarta 2: %c%c \n",carta[38][0],carta[38][1]);
if(jog.mcc == 1)printf("\t\tcarta 3: %c%c \n",carta[37][0],carta[37][1]); 
}




printf("\n\t oque deseja fazer?");
printf("\n\t (1)jogar");

if(jog.pontos == 1 && jog.ulttruco == 'c' && pth < 11 && ptc != 11|| jog.pontos ==1 && jog.ulttruco == 'n' && pth < 11 && ptc != 11){printf("\n\t (2)Trucar");w=1;}
if(jog.pontos == 3 && jog.ulttruco == 'c' && pth < 9 && ptc != 11){printf("\n\t (2)Seis");w=1;}
if(jog.pontos == 6 && jog.ulttruco == 'c' && pth < 6 && ptc != 11){printf("\n\t (2)Nove");w=1;}
if(jog.pontos == 9 && jog.ulttruco == 'c' && pth < 3 && ptc != 11){printf("\n\t (2)Doze");w=1;}

printf("\n\t (3)fugir\n");

if(jog.ulttruco == 'd' || jog.ulttruco == 'h' || w == 0)do{printf("\t"); scanf("%d", &escolhaa); } while( escolhaa!= 1 && escolhaa != 3);
else {do{printf("\t"); scanf("%d", &escolhaa); } while( escolhaa!= 1 && escolhaa!= 2 && escolhaa != 3);}
                  



if(escolhaa==3){jog.finalizar = 1;    
                jog.jogador = 'c';
                return jog;}
                       
if(escolhaa==2)
{ 
jog.ulttruco = 'h';
Taux = ftruco(carta,original,jog);
if (Taux.finalizar == 1 ){
                   jog.jogador = Taux.jogador; 
                   jog.finalizar = 1;
                   jog.pontos = Taux.pontos;
                    return jog;}

jog.ulttruco = Taux.ulttruco;
jog.pontos = Taux.pontos;
}
           





  
if(turno ==1 || turno ==2 ){printf("\n\t qual carta deseja jogar?\n\t carta numero:\n");}

if(turno ==1)
{
do{printf("\t"); scanf("%d", &escolhab); } while( escolhab!= 1 && escolhab!= 2 && escolhab != 3);
}
if(turno ==2)
{
if(jog.mca == 0){do{printf("\t");scanf("%d", &escolhab);}while(escolhab!=2 && escolhab!=3);}
if(jog.mcb == 0){do{printf("\t");scanf("%d", &escolhab);}while(escolhab!=1 && escolhab!=3);}
if(jog.mcc == 0){do{printf("\t");scanf("%d", &escolhab);}while(escolhab!=1 && escolhab!=2);}    
}




system("cls");

printf("\n");
printf("Pontos: Voce: %d  -  Computador: %d  -  Pontos em jogo: %d \n", pth, ptc , jog.pontos);if(ptc == 11|| pth == 11){printf("mao de onze");}
printf("\n");
printf("\t\tVirou: %c%c",carta[33][0],carta[33][1]);
printf("\n\n");
printf("\t\tCartas do pc:\n");


if(turno ==1)
{
if(jogadacomputador == 36)printf("\t\t     %c %c", vira , vira , vira);
if(jogadacomputador == 35)printf("\t\t   %c   %c", vira , vira , vira);
if(jogadacomputador == 34)printf("\t\t   %c %c  ", vira , vira , vira);
}


if(turno ==2)
{
if(jog.aica == 0 && jog.aicc == 0)printf("\t\t     %c  ", vira , vira , vira);       
if(jog.aica == 0 && jog.aicb == 0)printf("\t\t       %c", vira , vira , vira);         
if(jog.aicb == 0 && jog.aicc == 0)printf("\t\t   %c    ", vira , vira , vira);
}

if(turno ==3)
{
if(jog.aica == 0 && jog.aicb == 0 && jog.aicc == 0)printf("\t\t        ");
}

printf("\n\n");

printf("\t\t     %c%c  \n",carta[jogadacomputador][0],carta[jogadacomputador][1]);

printf("\n\n");

if(escolhab == 1){printf("\t\t     %c%c  \n",carta[39][0],carta[39][1]);jogadajogador = 39;jog.mca = 0;}
if(escolhab == 2){printf("\t\t     %c%c  \n",carta[38][0],carta[38][1]);jogadajogador = 38;jog.mcb = 0;}
if(escolhab == 3){printf("\t\t     %c%c  \n",carta[37][0],carta[37][1]);jogadajogador = 37;jog.mcc = 0;}

printf("\n");

printf("\t\tSuas cartas:\n");

if(turno ==1)
{
if(escolhab != 1){printf("\t\tcarta 1: %c%c \n",carta[39][0],carta[39][1]);jog.mca = 1;}
if(escolhab != 2){printf("\t\tcarta 2: %c%c \n",carta[38][0],carta[38][1]);jog.mcb = 1;}
if(escolhab != 3){printf("\t\tcarta 3: %c%c \n",carta[37][0],carta[37][1]);jog.mcc = 1;}
}


if(turno ==2)
{
if(jog.mca == 1){printf("\t\tcarta 1: %c%c \n",carta[39][0],carta[39][1]);}
if(jog.mcb == 1){printf("\t\tcarta 2: %c%c \n",carta[38][0],carta[38][1]);}
if(jog.mcc == 1){printf("\t\tcarta 3: %c%c \n",carta[37][0],carta[37][1]);}
}    

if(turno == 3)
{
printf("\t\t\n");
}    

jog.jogador = combate(carta,original,jogadajogador,jogadacomputador);
jog.finalizar = 0;

if(jog.jogador == 'h')printf("\n\tVoce venceu essa rodada!\n\n\t");
if(jog.jogador == 'c')printf("\n\tO computador venceu essa rodada!\n\n\t");
if(jog.jogador == 'e')printf("\n\tEssa rodada empatou!\n\n\t");
system("pause");
return jog;

}

















Tgame jogah(char carta[40][2],char original[40][2],Tgame jog, int vezdejogar, int turno ,int ptc , int pth, int agressividade){
      
char vira , falso;
Tgame Taux;
int blefe ,escolhaa, escolhab, escolhac, escolhad ,aux, jogadacomputador ,jogadajogador,z=0, w=0,tru , jogadajogadorfalsa, jogadacomputadorfalsa;
system("cls");
 vira = 177;
 
 

printf("\n");
printf("Pontos: Voce: %d  -  Computador: %d  -  Pontos em jogo: %d \n", pth, ptc , jog.pontos);if(ptc == 11|| pth == 11){printf("mao de onze");}
printf("\n");
printf("\t\t  Virou: %c%c",carta[33][0],carta[33][1]);
printf("\n\n");
printf("\t\tCartas do pc:\n");



if(turno ==1){
printf("\t\t   %c %c %c", vira , vira , vira);
}

if(turno == 2){
if(jog.aica == 0)printf("\t\t     %c %c" , vira , vira);
if(jog.aicb == 0)printf("\t\t   %c   %c" , vira , vira);
if(jog.aicc == 0)printf("\t\t   %c %c  " , vira , vira);
}

if(turno == 3){
if(jog.aica == 1)printf("\t\t   %c    ", vira);         
if(jog.aicb == 1)printf("\t\t     %c  ", vira);
if(jog.aicc == 1)printf("\t\t       %c", vira);

}






printf("\n\n\n");
printf("\n\n\n\n");
printf("\t\tSuas cartas:\n");

if(turno == 1){
printf("\t\tcarta 1: %c%c \n",carta[39][0],carta[39][1]);
printf("\t\tcarta 2: %c%c \n",carta[38][0],carta[38][1]);
printf("\t\tcarta 3: %c%c \n",carta[37][0],carta[37][1]);    
}


if(turno == 2){
if(jog.mca == 1)printf("\t\tcarta 1: %c%c \n",carta[39][0],carta[39][1]);
if(jog.mcb == 1)printf("\t\tcarta 2: %c%c \n",carta[38][0],carta[38][1]);
if(jog.mcc == 1)printf("\t\tcarta 3: %c%c \n",carta[37][0],carta[37][1]);     
}

if(turno == 3){
if(jog.mca == 1)printf("\t\tcarta 1: %c%c \n",carta[39][0],carta[39][1]);
if(jog.mcb == 1)printf("\t\tcarta 2: %c%c \n",carta[38][0],carta[38][1]);
if(jog.mcc == 1)printf("\t\tcarta 3: %c%c \n",carta[37][0],carta[37][1]);     
}

//  inteligencia artificial {

if(ptc == 11 && pth != 11)
{
z = forcacartas(carta,original);    
       
if (z < 30)
      {
      printf("\n\tfujo...\n\t"); 
      system("pause");
      jog.finalizar = 1 ;
      jog.pontos = 1 ;
      jog.jogador = 'h';  
      return jog;
      } 
}

// }inteligencia artificial 


printf("\n\t oque deseja fazer?");
printf("\n\t (1)jogar");

if(jog.pontos == 1 && jog.ulttruco == 'c' && pth < 11 && ptc != 11|| jog.pontos ==1 && jog.ulttruco == 'n' && pth < 11 && ptc != 11){printf("\n\t (2)Trucar");w=1;}
if(jog.pontos == 3 && jog.ulttruco == 'c' && pth < 9 && ptc != 11){printf("\n\t (2)Seis");w=1;}
if(jog.pontos == 6 && jog.ulttruco == 'c' && pth < 6 && ptc != 11){printf("\n\t (2)Nove");w=1;}
if(jog.pontos == 9 && jog.ulttruco == 'c' && pth < 3 && ptc != 11){printf("\n\t (2)Doze");w=1;}

printf("\n\t (3)fugir\n");

if(jog.ulttruco == 'd' || jog.ulttruco == 'h' || w == 0)do{printf("\t"); scanf("%d", &escolhaa); } while( escolhaa!= 1 && escolhaa != 3);
else {do{printf("\t"); scanf("%d", &escolhaa); } while( escolhaa!= 1 && escolhaa!= 2 && escolhaa != 3);}
                  
    
if(escolhaa==3){jog.finalizar = 1;    
                jog.jogador = 'c';
                return jog;}
                       
if(escolhaa==2)
{ 
jog.ulttruco = 'h';
Taux = ftruco(carta,original,jog);
if (Taux.finalizar == 1 ){
                   jog.jogador = Taux.jogador; 
                   jog.finalizar = 1;
                   jog.pontos = Taux.pontos;
                    return jog;}

jog.ulttruco = Taux.ulttruco;
jog.pontos = Taux.pontos;
}
           





  
if(turno == 1 || turno == 2){printf("\n\t qual carta deseja jogar?\n\t carta numero:\n");}

if(turno ==1)
{
do{printf("\t"); scanf("%d", &escolhab); } while( escolhab!= 1 && escolhab!= 2 && escolhab != 3);
}
if(turno ==2)
{
if(jog.mca == 0){do{printf("\t");scanf("%d", &escolhab);}while(escolhab!=2 && escolhab!=3);}
if(jog.mcb == 0){do{printf("\t");scanf("%d", &escolhab);}while(escolhab!=1 && escolhab!=3);}
if(jog.mcc == 0){do{printf("\t");scanf("%d", &escolhab);}while(escolhab!=1 && escolhab!=2);}    
}

if(turno ==3)
{
if(jog.mca == 1){escolhab = 1;}
if(jog.mcb == 1){escolhab = 2;}
if(jog.mcc == 1){escolhab = 3;}
}




if(turno ==1)
{

aux = rand()%3;

if(aux == 0)
       {
       jogadacomputador = 36;
       jog.aica =0;
       jog.aicb =1;
       jog.aicc =1;
       }

if(aux == 1)
       {
       jogadacomputador = 35;
       jog.aica =1;
       jog.aicb =0;
       jog.aicc =1;
       }

if(aux == 2)
       {
       jogadacomputador = 34;
       jog.aica =1;
       jog.aicb =1;
       jog.aicc =0;
       }
}


if(turno ==2)
{

aux = rand()%2;

if(jog.aica == 0){
              if(aux == 0){jogadacomputador = 35;jog.aicb =0;}
              if(aux == 1){jogadacomputador = 34;jog.aicc =0;}
              }


else{
if(jog.aicb == 0){
              if(aux == 0){jogadacomputador = 36;jog.aica =0;}
              if(aux == 1){jogadacomputador = 34;jog.aicc =0;}
              }
else{
if(jog.aicc == 0){
              if(aux == 0){jogadacomputador = 36;jog.aica =0;}
              if(aux == 1){jogadacomputador = 35;jog.aicb =0;}
              }              
}            
}              
}

if(turno == 3)
{
if(jog.aica == 1){jogadacomputador = 36;jog.aica =0;}
if(jog.aicb == 1){jogadacomputador = 35;jog.aicb =0;}
if(jog.aicc == 1){jogadacomputador = 34;jog.aicc =0;}

// inteligencia artificial {
jogadacomputadorfalsa = jogadacomputador;
jogadajogadorfalsa = jogadajogador;

falso = combate(carta, original, jogadajogadorfalsa, jogadacomputadorfalsa);



if( falso == 'h' && jog.ulttruco == 'h' && ptc != 11 && pth !=11 || jog.ulttruco == 'n' && falso == 'h' && ptc != 11 && pth !=11 )
{ 
    blefe = rand()%100;
    if(blefe < 20){falso = 'c';}
    else{escolhaa=0;}
    }

if( jog.ulttruco == 'h' && falso == 'c' && pth != 11 && ptc != 11 || jog.ulttruco == 'n' && falso == 'c' && ptc != 11 && pth !=11 )
                 {
                 
                 jog.ulttruco = 'c';
                 jog.ia = 1;
                 Taux = ftruco(carta,original,jog);
                 jog.ia = 0;
                 if (Taux.finalizar == 1 ){
                 jog.jogador = Taux.jogador; 
                 jog.finalizar = 1;
                 jog.pontos = Taux.pontos;
                 return jog;}
                 jog.pontos = Taux.pontos;
                 jog.ulttruco = Taux.ulttruco;  
                 
                 }

// } inteligencia artificial


}


if(escolhaa==1)
{ z = forcacartas(carta,original);           
 
 if(jog.pontos == 9 && jog.ulttruco == 'h' && ptc < 3 && pth != 11)
 {
                 if(z > 85)
                 {tru = rand()%100;
                 if (tru < agressividade){
                 
                 jog.ulttruco = 'c';
                 Taux = ftruco(carta,original,jog);
                 if (Taux.finalizar == 1 ){
                 jog.jogador = Taux.jogador; 
                 jog.finalizar = 1;
                 jog.pontos = Taux.pontos;
                 return jog;}
                 jog.pontos = Taux.pontos;
                 jog.ulttruco = Taux.ulttruco;
                 }}}
  if(jog.pontos ==6 && jog.ulttruco == 'h' && ptc < 6 && pth != 11)
 {
                 if(z > 70)
                 {tru = rand()%100;
                 if (tru < agressividade){
                 jog.ulttruco = 'c';
                 Taux = ftruco(carta,original,jog);
                 if (Taux.finalizar == 1 ){
                 jog.jogador = Taux.jogador; 
                 jog.finalizar = 1;
                 jog.pontos = Taux.pontos;
                 return jog;}
                 jog.pontos = Taux.pontos;
                 jog.ulttruco = Taux.ulttruco;
                 }}}   
                 
                if(jog.pontos ==3 && jog.ulttruco == 'h' && ptc < 9 && pth != 11)
                {
                 if(z > 45)
                 {tru = rand()%100;
                 if (tru < agressividade){
                 jog.ulttruco = 'c';
                 Taux = ftruco(carta,original,jog);
                 if (Taux.finalizar == 1 ){
                 jog.jogador = Taux.jogador; 
                 jog.finalizar = 1;
                 jog.pontos = Taux.pontos;
                 return jog;}
                 jog.pontos = Taux.pontos;
                 jog.ulttruco = Taux.ulttruco;
                 }}}
   
                 
                 
 if(jog.pontos ==1 && jog.ulttruco == 'h' && ptc < 11 && pth != 11|| jog.pontos ==1 && jog.ulttruco == 'n' && ptc < 11 && pth != 11)
                 {
                 if(z > 30)
                 {tru = rand()%100;
                 if (tru < agressividade){
                 jog.ulttruco = 'c';
                 Taux = ftruco(carta,original,jog);
                 if (Taux.finalizar == 1 ){
                 jog.jogador = Taux.jogador; 
                 jog.finalizar = 1;
                 jog.pontos = Taux.pontos;
                 return jog;}
                 jog.pontos = Taux.pontos;
                 jog.ulttruco = Taux.ulttruco;
                 }}}
 
}




system("cls");

printf("\n");
printf("Pontos: Voce: %d  -  Computador: %d  -  Pontos em jogo: %d \n", pth, ptc , jog.pontos);if(ptc == 11|| pth == 11){printf("mao de onze");}
printf("\n");
printf("\t\tVirou: %c%c",carta[33][0],carta[33][1]);
printf("\n\n");
printf("\t\tCartas do pc:\n");


if(turno ==1)
{
if(jogadacomputador == 36)printf("\t\t     %c %c", vira , vira );
if(jogadacomputador == 35)printf("\t\t   %c   %c", vira , vira );
if(jogadacomputador == 34)printf("\t\t   %c %c  ", vira , vira );
}


if(turno == 2)
{
if(jog.aica == 0 && jog.aicc == 0){printf("\t\t     %c  ", vira);}       
if(jog.aica == 0 && jog.aicb == 0){printf("\t\t       %c", vira);}         
if(jog.aicb == 0 && jog.aicc == 0){printf("\t\t   %c    ", vira);}
}

if(turno ==3)
{
if(jog.aica == 0 && jog.aicb == 0 && jog.aicc == 0)printf("\t\t        ");
}

printf("\n\n");

printf("\t\t     %c%c  \n",carta[jogadacomputador][0],carta[jogadacomputador][1]);

printf("\n\n");

if(escolhab == 1){printf("\t\t     %c%c  \n",carta[39][0],carta[39][1]);jogadajogador = 39;jog.mca = 0;}
if(escolhab == 2){printf("\t\t     %c%c  \n",carta[38][0],carta[38][1]);jogadajogador = 38;jog.mcb = 0;}
if(escolhab == 3){printf("\t\t     %c%c  \n",carta[37][0],carta[37][1]);jogadajogador = 37;jog.mcc = 0;}

printf("\n");

printf("\t\tSuas cartas:\n");

if(turno ==1)
{
if(escolhab != 1){printf("\t\tcarta 1: %c%c \n",carta[39][0],carta[39][1]);jog.mca = 1;}
if(escolhab != 2){printf("\t\tcarta 2: %c%c \n",carta[38][0],carta[38][1]);jog.mcb = 1;}
if(escolhab != 3){printf("\t\tcarta 3: %c%c \n",carta[37][0],carta[37][1]);jog.mcc = 1;}
}


if(turno == 2)
{
if(jog.mca == 1){printf("\t\tcarta 1: %c%c \n",carta[39][0],carta[39][1]);}
if(jog.mcb == 1){printf("\t\tcarta 2: %c%c \n",carta[38][0],carta[38][1]);}
if(jog.mcc == 1){printf("\t\tcarta 3: %c%c \n",carta[37][0],carta[37][1]);}
}    

if(turno == 3)
{
printf("\t\t\n");
}    


jog.jogador = combate(carta,original,jogadajogador,jogadacomputador);
jog.finalizar = 0;

if(jog.jogador == 'h')printf("\n\tVoce venceu essa rodada!\n\n\t");
if(jog.jogador == 'c')printf("\n\tO computador venceu essa rodada!\n\n\t");
if(jog.jogador == 'e')printf("\n\tEssa rodada empatou!\n\n\t");


system("pause");
return jog;

}






Tgame game(char carta[40][2], char original[40][2],int vezdejogar , int ptc , int pth){

Tgame jog, jog_a , jog_b , jog_c, resultado ;
int turno , agressividade , z =0; 



jog.ulttruco = 'n';
jog.jogador = 'e';
jog.pontos = 1;
jog.finalizar = 0;
jog.mca = 1;
jog.mcb = 1; 
jog.mcc = 1;
jog.aica = 1;
jog.aicb = 1;
jog.aicc = 1;
jog.ia = 0;

jog_a = jog;
jog_b = jog;
jog_c = jog;


if(ptc == 11|| pth == 11){jog.pontos = 3;}

turno = 1;
agressividade = 35;

if(vezdejogar== 1)jog_a = jogah(carta, original, jog , vezdejogar , turno, ptc , pth,agressividade);
if(vezdejogar== 0)jog_a = jogac(carta, original, jog , vezdejogar , turno , ptc, pth,agressividade);
jog = jog_a;

if (jog_a.finalizar == 1){return jog_a;}
if (jog_a.jogador == 'h'){vezdejogar= 1;}
if (jog_a.jogador == 'c'){vezdejogar= 0;}
if (jog_a.jogador == 'e'){vezdejogar = vezdejogar;}


turno = 2;
agressividade = 50;
if (jog_a.jogador == 'h'){agressividade = 40;}
if (jog_a.jogador == 'c'){agressividade = 60;}

if(vezdejogar == 1)jog_b = jogah(carta, original, jog , vezdejogar , turno, ptc , pth,agressividade);
if(vezdejogar == 0)jog_b = jogac(carta, original, jog , vezdejogar , turno, ptc , pth,agressividade);
jog = jog_b;

if (jog_b.finalizar == 1){return jog_b;}
if (jog_b.jogador == 'h'){vezdejogar= 1;}
if (jog_b.jogador == 'c'){vezdejogar= 0;}
if (jog_b.jogador == 'e'){vezdejogar = vezdejogar;}


if(jog_a.jogador == 'h' && jog_b.jogador == 'h')
{
jog.jogador = 'h';
return jog;
}
if(jog_a.jogador == 'c' && jog_b.jogador == 'c')
{
jog.jogador = 'c';
return jog;
}
if (jog_a.jogador == 'e' && jog_b.jogador == 'c' || jog_a.jogador == 'c' && jog_b.jogador == 'e' )
{
jog.jogador = 'c';
return jog;
}
if (jog_a.jogador == 'e' && jog_b.jogador == 'h' || jog_a.jogador == 'h' && jog_b.jogador == 'e' )
{
jog.jogador = 'h';
return jog;
}


turno = 3;
agressividade = 80;
if (jog_a.jogador == 'h' && jog_b.jogador == 'c'){agressividade = 70;}
if (jog_a.jogador == 'c' && jog_b.jogador == 'h'){agressividade = 90;}

if(vezdejogar == 1)jog_c = jogah(carta, original, jog , vezdejogar , turno, ptc , pth,agressividade);
if(vezdejogar == 0)jog_c = jogac(carta, original, jog , vezdejogar , turno, ptc , pth,agressividade);

jog = jog_c;
if (jog_c.finalizar == 1){return jog_c;}

if (jog_a.jogador == 'h' && jog_b.jogador == 'c' && jog_c.jogador == 'e'){jog.jogador = 'h' ;}
if (jog_a.jogador == 'c' && jog_b.jogador == 'h' && jog_c.jogador == 'e'){jog.jogador = 'c' ;}
if (jog_a.jogador == 'e' && jog_b.jogador == 'e' && jog_c.jogador == 'e'){return jog; ;}

return jog;


}







main(void) {
           // fazer menu com escolha do tipo de carta virada
           // definir personalidade do pc
           //arquivo para guardar personalidades novas
       Tgame set;
       int mca,mcb,mcc , aica , aicb ,aicc, manilha;
       int i, randommax, excluir , vezdejogar , vezdejogarantiga , ptc = 0, pth = 0;
       char original[40][2], carta[40][2], cont = 's';
       srand ( time(NULL) );

       fazeroriginal(original);
       
       
       
while( cont == 's'){ 

vezdejogar = rand()%2;     
ptc = 0;
pth = 0;


do{ 
       
       
       
       fazercarta(carta ,original);

mca = rand()%40;
randommax = 40;excluir = mca;
atualizarcarta(carta,excluir,randommax);


mcb = rand()%39;
randommax = 39;excluir = mcb;
atualizarcarta(carta,excluir,randommax);

mcc = rand()%38;
randommax = 38;excluir = mcc;
atualizarcarta(carta,excluir,randommax);

aica = rand()%37;
randommax = 37;excluir = aica;
atualizarcarta(carta,excluir,randommax);

aicb = rand()%36;
randommax = 36;excluir = aicb;
atualizarcarta(carta,excluir,randommax);

aicc = rand()%35;
randommax = 35;excluir = aicc;
atualizarcarta(carta,excluir,randommax);

manilha = rand()%34;
randommax = 34;excluir = manilha;
atualizarcarta(carta,excluir,randommax);

vezdejogarantiga = vezdejogar;

set = game(carta,original,vezdejogar, ptc , pth);

if( set.jogador == 'c')
    { 
    printf("\n\n\tO computador ganhou %d pontos\n\n\t",set.pontos);
    ptc = ptc + set.pontos;
    }            
if( set.jogador == 'h')
    { 
    printf("\n\n\tVoce ganhou %d pontos\n\n\t",set.pontos);
    pth = pth + set.pontos;
    }           
if( set.jogador == 'e')
    { 
    printf("\n\n\tAs 3 rodadas empataram! como conseguiu isso? então ninguem vai levar pontos...\n\n\t");
    }           


if( vezdejogarantiga == 1){ vezdejogar = 0;}
if( vezdejogarantiga == 0){ vezdejogar = 1;}  
      
system("pause");
       
}while ( ptc < 12 && pth < 12);       


if(pth >= 12){printf("\n\tPARABENS!! Voce venceu!\n");}
if(ptc >= 12){printf("\n\tMais sorte na proxima... O computador ganhou!!!\n");}


printf("\n\tDeseja jogar outra partida? (s\\n) \n\t");
scanf(" %c", &cont);


}
     
system("cls");

printf("\n\n\n\n\n  Programa desenvolvido por Fabio Lofredo Cesar v1.00\n\n\n\n  "); 
       
system("pause");      
       
       
       
       
       
}

       









/*

H{

T   
{
A z >= 20 && z <= 45
S z> 45 
F z< 20
}


S
{
A z >= 40 && z <= 70  (1° termo limitado pelo CT)
N z> 70
F z< 40
}


N
{
A z >= 55 && z <= 80 (1° termo limitado pelo CS)
D z> 80  
F z< 55 (limitado pelo HTF)
}


D
{
A z >= 80 (1° termo limitado pelo CD)
F z< 80 (limitado pelo HTS)
}
}


C
{
T   {z>= 30}

S   {z>= 45}

N   {z>= 70}

D   {z>= 85}
}







*/
