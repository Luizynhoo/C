#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>                //Usado para o comando srand((unsigned) time(NULL))
 
#define spade 06                 //Usado para imprimir o simbolo de espadas
#define club 05                  //Usado para imprimir o simbolo de paus
#define diamond 04               //Usado para imprimir o simbolo de ouros
#define heart 03                 //Usado para imprimir o simbolo de copas
#define RESULTS "Blackjack.txt"  //Nome do arquivo e Blackjack
 
//Variaveis Globais
int k;
int l;
int d;
int won;
int loss;
int cash = 500;
int bet;
int random_card;
int player_total=0;
int dealer_total;
 
//Prototipos de Funcoes
int clubcard();      //Exibe a imagem da carta de paus
int diamondcard();   //Exibe a imagem da carta de ouros
int heartcard();     //Exibe a imagem da carta de copas
int spadecard();     //Exibe a imagem da carta de espadas
int randcard();      //Gera uma carta aleatoria
int betting();       //Pergunta ao usuario o valor da aposta
void asktitle();     //Pergunta ao usuario se deseja continuar
void rules();        //Imprime o menu "Regras do Blackjack do Vlad"
void play();         //Inicia o jogo
void dealer();       //Funcao para a IA do dealer
void stay();         //Funcao para quando o usuario escolhe 'Ficar'
void cash_test();    //Verifica se o usuario ainda tem dinheiro
void askover();      //Pergunta se o usuario quer continuar jogando
void fileresults();  //Grava os resultados no arquivo Blackjack.txt no diretorio do programa
 
//Funcao Principal
int main(void)
{
    int choice1;
    printf("\n\n");
    printf("   =====================================================\n");
    printf("                     B L A C K J A C K                \n");
    printf("   =====================================================\n");
    
    printf("\n");
    printf("                         2 1                           \n");
    
    printf("\n");
     
    asktitle();
     
    printf("\n");
    printf("\n");
    system("pause");
    return(0);
} //fim do programa
 
void asktitle() // Funcao para perguntar ao jogador se deseja continuar
{
    char choice1;
    int choice2;
     
     printf("\n                 Voce esta pronto?");
     printf("\n                        -        ");
     printf("\n                      (S/N)\n                        ");
     scanf("\n%c",&choice1);
 
    while((choice1!='S') && (choice1!='s') && (choice1!='N') && (choice1!='n')) // Se escolha invalida for inserida
    {                                                                          
        printf("\n");
        printf("Escolha incorreta. Por favor, digite S para Sim ou N para Nao.\n");
        scanf("%c",&choice1);
    }
 
 
    if((choice1 == 'S') || (choice1 == 's')) // Se sim, continua. Imprime o menu.
    {
            system("cls");
            printf("\nDigite 1 para comecar o melhor jogo ja criado.");
            printf("\nDigite 2 para ver a lista completa de regras.");
            printf("\nDigite 3 para sair do jogo. (Nao recomendado)");
            printf("\nEscolha: ");
            scanf("%d", &choice2); // Solicita a escolha do usuario
            if((choice2<1) || (choice2>3)) // Se escolha invalida for inserida
            {
                printf("\nEscolha incorreta. Por favor, digite 1, 2 ou 3\n");
                scanf("%d", &choice2);
            }
            switch(choice2) // Switch case para diferentes escolhas
            {  
                case 1: // Caso para comecar o jogo
                   system("cls");
                    
                   play();
                                       
                   break;
                    
                case 2: // Caso para ver as regras
                   system("cls");
                   rules();
                   break;
                    
                case 3: // Caso para sair do jogo
                   printf("\nSeu dia poderia ter sido perfeito.");
                   printf("\nTenha um dia quase perfeito!\n\n");
                   system("pause");
                   exit(0);
                   break;
                    
                default:
                   printf("\nEntrada invalida");
            } // Fim do switch case
    } // Fim do if
    
             
 
    else if((choice1 == 'N') || (choice1 == 'n')) // Se nao, sai do programa
    {
        printf("\nSeu dia poderia ter sido perfeito.");
        printf("\nTenha um dia quase perfeito!\n\n");
        system("pause");
        exit(0);
    }
     
    return;
} // Fim da funcao
 
void rules() //Imprime a lista "Regras do Blackjack do Vlad"
{
     char choice1;
     int choice2;
      
     printf("\n           REGRAS do BLACKJACK do VLAD");
     printf("\n          ---------------------------");
     printf("\nI.");
     printf("\n     Nao questione as probabilidades deste jogo.");
     printf("\n      %c Este programa gera cartas aleatoriamente.", spade);
     printf("\n      %c Se voce continuar perdendo, voce eh muito azarado!\n", diamond);
      
     printf("\nII.");
     printf("\n     Cada carta tem um valor.");
     printf("\n      %c Cartas numeradas de 1 a 10 valem o seu numero.", spade);
     printf("\n      %c Cartas J, Q e K valem 10.", diamond);
     printf("\n      %c Cartas AS valem 11", club);
     printf("\n     O objetivo deste jogo eh alcancar um valor total de cartas de 21.\n");
      
     printf("\nIII.");
     printf("\n     Apos a distribuicao das duas primeiras cartas, VOCE deve decidir se PEDE ou FICA.");
     printf("\n      %c Ficar mantera voce seguro, pedir adicionara uma carta.", spade);
     printf("\n     Como voce esta competindo contra o dealer, voce deve vencer a mao dele.");
     printf("\n     MAS CUIDADO!.");
     printf("\n      %c Se o seu total ultrapassar 21, voce PERDE!.", diamond);
     printf("\n     Mas o mundo nao acabou, porque voce sempre pode jogar novamente.\n");
     printf("\n%c%c%c SEUS RESULTADOS SAO GRAVADOS E ENCONTRADOS NA MESMA PASTA DO PROGRAMA %c%c%c\n", spade, heart, club, club, heart, spade);
     printf("\nDeseja voltar a tela anterior? (Nao aceitarei NAO como resposta)");
     printf("\n                  (S/N)\n                    ");
     scanf("\n%c",&choice1);
      
     while((choice1!='S') && (choice1!='s') && (choice1!='N') && (choice1!='n')) // Se escolha invalida for inserida
    {                                                                          
        printf("\n");
        printf("Escolha incorreta. Por favor, digite S para Sim ou N para Nao.\n");
        scanf("%c",&choice1);
    }
 
 
    if((choice1 == 'S') || (choice1 == 's')) // Se sim, continua. Imprime o menu.
    {
            system("cls");
            asktitle();
    } // Fim do if
    
             
 
    else if((choice1 == 'N') || (choice1 == 'n')) // Se nao, convence o usuario a digitar sim
    {
        system("cls");
        printf("\n                 Eu avisei.\n");
        asktitle();
    }
     
    return;
} // Fim da funcao
 
int clubcard() //Exibe a imagem da carta de paus
{
     
     
    srand((unsigned) time(NULL)); //Gera uma semente aleatoria para a funcao rand()
    k=rand()%13+1;
     
    if(k<=9) //Se o numero aleatorio for 9 ou menos, imprime a carta com esse numero
    {
    //Carta de Paus
    printf("-------\n");
    printf("|%c    |\n", club);
    printf("|  %d  |\n", k);
    printf("|    %c|\n", club);
    printf("-------\n");
    }
     
     
    if(k==10) //Se o numero aleatorio for 10, imprime a carta com J (Valete) na face
    {
    //Carta de Paus
    printf("-------\n");
    printf("|%c    |\n", club);
    printf("|  J  |\n");
    printf("|    %c|\n", club);
    printf("-------\n");
    }
     
     
    if(k==11) //Se o numero aleatorio for 11, imprime a carta com A (As) na face
    {
    //Carta de Paus
    printf("-------\n");
    printf("|%c    |\n", club);
    printf("|  A  |\n");
    printf("|    %c|\n", club);
    printf("-------\n");
    if(player_total<=10) //Se o numero aleatorio for As, muda o valor para 11 ou 1 dependendo do total do dealer
         {
             k=11;
         }
          
         else
         {
 
             k=1;
         }
    }
     
     
    if(k==12) //Se o numero aleatorio for 12, imprime a carta com Q (Dama) na face
    {
    //Carta de Paus
    printf("-------\n");
    printf("|%c    |\n", club);
    printf("|  Q  |\n");
    printf("|    %c|\n", club);
    printf("-------\n");
    k=10; //Define o valor da carta como 10
    }
     
     
    if(k==13) //Se o numero aleatorio for 13, imprime a carta com K (Rei) na face
    {
    //Carta de Paus
    printf("-------\n");
    printf("|%c    |\n", club);
    printf("|  K  |\n");
    printf("|    %c|\n", club);
    printf("-------\n");
    k=10; //Define o valor da carta como 10
    }
    return k;          
}// Fim da funcao
 
int diamondcard() //Exibe a imagem da carta de ouros
{
     
     
    srand((unsigned) time(NULL)); //Gera uma semente aleatoria para a funcao rand()
    k=rand()%13+1;
     
    if(k<=9) //Se o numero aleatorio for 9 ou menos, imprime a carta com esse numero
    {
    //Carta de Ouros
    printf("-------\n");
    printf("|%c    |\n", diamond);
    printf("|  %d  |\n", k);
    printf("|    %c|\n", diamond);
    printf("-------\n");
    }
     
    if(k==10) //Se o numero aleatorio for 10, imprime a carta com J (Valete) na face
    {
    //Carta de Ouros
    printf("-------\n");
    printf("|%c    |\n", diamond);
    printf("|  J  |\n");
    printf("|    %c|\n", diamond);
    printf("-------\n");
    }
     
    if(k==11) //Se o numero aleatorio for 11, imprime a carta com A (As) na face
    {
    //Carta de Ouros
    printf("-------\n");
    printf("|%c    |\n", diamond);
    printf("|  A  |\n");
    printf("|    %c|\n", diamond);
    printf("-------\n");
    if(player_total<=10) //Se o numero aleatorio for As, muda o valor para 11 ou 1 dependendo do total do dealer
         {
             k=11;
         }
          
         else
         {
             k=1;
         }
    }
     
    if(k==12) //Se o numero aleatorio for 12, imprime a carta com Q (Dama) na face
    {
    //Carta de Ouros
    printf("-------\n");
    printf("|%c    |\n", diamond);
    printf("|  Q  |\n");
    printf("|    %c|\n", diamond);
    printf("-------\n");
    k=10; //Define o valor da carta como 10
    }
     
    if(k==13) //Se o numero aleatorio for 13, imprime a carta com K (Rei) na face
    {
    //Carta de Ouros
    printf("-------\n");
    printf("|%c    |\n", diamond);
    printf("|  K  |\n");
    printf("|    %c|\n", diamond);
    printf("-------\n");
    k=10; //Define o valor da carta como 10
    }
    return k;
}// Fim da funcao
 
int heartcard() //Exibe a imagem da carta de copas
{
     
     
    srand((unsigned) time(NULL)); //Gera uma semente aleatoria para a funcao rand()
    k=rand()%13+1;
     
    if(k<=9) //Se o numero aleatorio for 9 ou menos, imprime a carta com esse numero
    {
    //Carta de Copas
    printf("-------\n");
    printf("|%c    |\n", heart);
    printf("|  %d  |\n", k);
    printf("|    %c|\n", heart);
    printf("-------\n");
    }
     
    if(k==10) //Se o numero aleatorio for 10, imprime a carta com J (Valete) na face
    {
    //Carta de Copas
    printf("-------\n");
    printf("|%c    |\n", heart);
    printf("|  J  |\n");
    printf("|    %c|\n", heart);
    printf("-------\n");
    }
     
    if(k==11) //Se o numero aleatorio for 11, imprime a carta com A (As) na face
    {
    //Carta de Copas
    printf("-------\n");
    printf("|%c    |\n", heart);
    printf("|  A  |\n");
    printf("|    %c|\n", heart);
    printf("-------\n");
    if(player_total<=10) //Se o numero aleatorio for As, muda o valor para 11 ou 1 dependendo do total do dealer
         {
             k=11;
         }
          
         else
         {
             k=1;
         }
    }
     
    if(k==12) //Se o numero aleatorio for 12, imprime a carta com Q (Dama) na face
    {
    //Carta de Copas
    printf("-------\n");
    printf("|%c    |\n", heart);
    printf("|  Q  |\n");
    printf("|    %c|\n", heart);
    printf("-------\n");
    k=10; //Define o valor da carta como 10
    }
     
    if(k==13) //Se o numero aleatorio for 13, imprime a carta com K (Rei) na face
    {
    //Carta de Copas
    printf("-------\n");
    printf("|%c    |\n", heart);
    printf("|  K  |\n");
    printf("|    %c|\n", heart);
    printf("-------\n");
    k=10; //Define o valor da carta como 10
    }
    return k;
} // Fim da Funcao
 
int spadecard() //Exibe a imagem da carta de espadas
{
     
     
    srand((unsigned) time(NULL)); //Gera uma semente aleatoria para a funcao rand()
    k=rand()%13+1;
     
    if(k<=9) //Se o numero aleatorio for 9 ou menos, imprime a carta com esse numero
    {
    //Carta de Espadas
    printf("-------\n");
    printf("|%c    |\n", spade);
    printf("|  %d  |\n", k);
    printf("|    %c|\n", spade);
    printf("-------\n");
    }
     
    if(k==10) //Se o numero aleatorio for 10, imprime a carta com J (Valete) na face
    {
    //Carta de Espadas
    printf("-------\n");
    printf("|%c    |\n", spade);
    printf("|  J  |\n");
    printf("|    %c|\n", spade);
    printf("-------\n");
    }
     
    if(k==11) //Se o numero aleatorio for 11, imprime a carta com A (As) na face
    {
    //Carta de Espadas
    printf("-------\n");
    printf("|%c    |\n", spade);
    printf("|  A  |\n");
    printf("|    %c|\n", spade);
    printf("-------\n");
    if(player_total<=10) //Se o numero aleatorio for As, muda o valor para 11 ou 1 dependendo do total do dealer
         {
             k=11;
         }
          
         else
         {
             k=1;
         }
    }
     
    if(k==12) //Se o numero aleatorio for 12, imprime a carta com Q (Dama) na face
    {
    //Carta de Espadas
    printf("-------\n");
    printf("|%c    |\n", spade);
    printf("|  Q  |\n");
    printf("|    %c|\n", spade);
    printf("-------\n");
    k=10; //Define o valor da carta como 10
    }
     
    if(k==13) //Se o numero aleatorio for 13, imprime a carta com K (Rei) na face
    {
    //Carta de Espadas
    printf("-------\n");
    printf("|%c    |\n", spade);
    printf("|  K  |\n");
    printf("|    %c|\n", spade);
    printf("-------\n");
    k=10; //Define o valor da carta como 10
    }
    return k;
} // Fim da Funcao
 
int randcard() //Gera uma carta aleatoria
{
      
                
     srand((unsigned) time(NULL)); //Gera uma semente aleatoria para a funcao rand()
     random_card = rand()%4+1;
      
     if(random_card==1)
     {  
         clubcard();
         l=k;
     }
      
     if(random_card==2)
     {
         diamondcard();
         l=k;
     }
      
     if(random_card==3)
     {
         heartcard();
         l=k;
     }
          
     if(random_card==4)
     {
         spadecard();
         l=k;
     }   
     return l;
} // Fim da Funcao  
 
void play() //Inicia o jogo
{
      
     int p=0; // armazena o valor de player_total
     int i=1; // contador para perguntar ao usuario se quer pedir ou ficar (turnos do jogo)
     char choice3;
      
     cash = cash;
     cash_test();
     printf("\nDinheiro: $%d\n",cash); //Imprime a quantidade de dinheiro que o usuario tem
     randcard(); //Gera uma carta aleatoria
     player_total = p + l; //Calcula o total do jogador
     p = player_total;
     printf("\nSeu Total  %d\n", p); //Imprime o total do jogador
     dealer(); //Calcula e imprime o total do dealer
     betting(); //Solicita ao usuario que insira o valor da aposta
        
     while(i<=21) //Loop while usado para continuar perguntando ao usuario se quer pedir ou ficar no maximo vinte e uma vezes
                  //  porque ha uma chance do usuario gerar vinte e uns 1's consecutivos
     {
         if(p==21) //Se o total do usuario for 21, vitoria
         {
             printf("\nInacreditavel! Voce Venceu!\n");
             won = won+1;
             cash = cash+bet;
             printf("\nVoce tem %d Vitorias e %d Derrotas. Incrivel!\n", won, loss);
             dealer_total=0;
             askover();
         }
      
         if(p>21) //Se o total do jogador for maior que 21, derrota
         {
             printf("\nEita Amigo, Voce Passou LONGUE.\n");
             loss = loss+1;
             cash = cash - bet;
             printf("\nVoce tem %d Vitorias e %d Derrotas. Incrivel!\n", won, loss);
             dealer_total=0;
             askover();
         }
      
         if(p<=21) //Se o total do jogador for menor ou igual a 21, pergunta se quer pedir ou ficar
         {        
             printf("\n\nVoce gostaria de Pedir ou Ficar?");
              
             scanf("%c", &choice3);
             while((choice3!='P') && (choice3!='p') && (choice3!='F') && (choice3!='f')) // Se escolha invalida for inserida
             {                                                                          
                 printf("\n");
                 printf("Por favor, digite P para Pedir ou F para Ficar.\n");
                 scanf("%c",&choice3);
             }
 
 
             if((choice3=='P') || (choice3=='p')) // Se Pedir, continua
             {
                 randcard();
                 player_total = p + l;
                 p = player_total;
                 printf("\nSeu Total  %d\n", p);
                 dealer();
                  if(dealer_total==21) //Se o total do dealer for 21, derrota
                  {
                      printf("\nO Dealer Tem a Melhor Mao. Voce Perde.\n");
                      loss = loss+1;
                      cash = cash - bet;
                      printf("\nVoce tem %d Vitorias e %d Derrotas. Incrivel!\n", won, loss);
                      dealer_total=0;
                      askover();
                  }
      
                  if(dealer_total>21) //Se o total do dealer for maior que 21, vitoria
                  {                     
                      printf("\nO Dealer Passou!. Voce Venceu!\n");
                      won = won+1;
                      cash = cash+bet;
                      printf("\nVoce tem %d Vitorias e %d Derrotas. Incrivel!\n", won, loss);
                      dealer_total=0;
                      askover();
                  }
             }
             if((choice3=='F') || (choice3=='f')) // Se Ficar, nao continua
             {
                printf("\nVoce Escolheu Ficar com %d. Boa Decisao!\n", player_total);
                stay();
             }
          }
             i++; //Enquanto o total do jogador e o total do dealer forem menores que 21, refaz o loop while
     } // Fim do Loop While
} // Fim da Funcao
 
void dealer() //Funcao para a IA do dealer
{
     int z;
      
     if(dealer_total<17)
     {
      srand((unsigned) time(NULL) + 1); //Gera uma semente aleatoria para a funcao rand()
      z=rand()%13+1;
      if(z<=10) //Se o numero aleatorio gerado for 10 ou menos, mantem esse valor
      {
         d=z;
          
      }
      
      if(z>11) //Se o numero aleatorio gerado for maior que 11, muda o valor para 10
      {
         d=10;
      }
      
      if(z==11) //Se o numero aleatorio for 11 (As), muda o valor para 11 ou 1 dependendo do total do dealer
      {
         if(dealer_total<=10)
         {
             d=11;
         }
          
         else
         {
             d=1;
         }
      }
     dealer_total = dealer_total + d;
     }
           
     printf("\nO Dealer Tem um Total de %d", dealer_total); //Imprime o total do dealer
      
} // Fim da Funcao
 
void stay() //Funcao para quando o usuario seleciona 'Ficar'
{
     dealer(); //Se ficar selecionado, o dealer continua
     if(dealer_total>=17)
     {
      if(player_total>=dealer_total) //Se o total do jogador for maior que o total do dealer, vitoria
      {
         printf("\nInacreditavel! Voce Venceu!\n");
         won = won+1;
         cash = cash+bet;
         printf("\nVoce tem %d Vitorias e %d Derrotas. Incrivel!\n", won, loss);
         dealer_total=0;
         askover();
      }
      if(player_total<dealer_total) //Se o total do jogador for menor que o total do dealer, derrota
      {
         printf("\nO Dealer Tem a Melhor Mao. Voce Perde.\n");
         loss = loss+1;
         cash = cash - bet;
         printf("\nVoce tem %d Vitorias e %d Derrotas. Incrivel!\n", won, loss);
         dealer_total=0;
         askover();
      }
      if(dealer_total>21) //Se o total do dealer for maior que 21, vitoria
      {
         printf("\nInacreditavel! Voce Venceu!\n");
         won = won+1;
         cash = cash+bet;
         printf("\nVoce tem %d Vitorias e %d Derrotas. Incrivel!\n", won, loss);
         dealer_total=0;
         askover();
      }
     }
     else
     {
         stay();
     }
      
} // Fim da Funcao
 
void cash_test() //Verifica se o usuario ainda tem dinheiro
{
     if (cash <= 0) //Quando o usuario nao tiver mais dinheiro, o jogo termina e pergunta se quer jogar novamente
     {
        printf("Voce Faliu. Fim de Jogo");
        cash = 500;
        askover();
     }
} // Fim da Funcao
 
int betting() //Pergunta ao usuario o valor da aposta
{
 printf("\n\nDigite a Aposta: $");
 scanf("%d", &bet);
 
 if (bet > cash) //Se o jogador tentar apostar mais dinheiro do que tem
 {
        printf("\nVoce nao pode apostar mais dinheiro do que tem.");
        printf("\nDigite a Aposta: ");
        scanf("%d", &bet);
        return bet;
 }
 else return bet;
} // Fim da Funcao
 
void askover() // Funcao para perguntar ao jogador se quer jogar novamente
{
    char choice1;
         
     printf("\nGostaria de Jogar Novamente?");
     printf("\nPor favor, Digite S para Sim ou N para Nao\n");
     scanf("\n%c",&choice1);
 
    while((choice1!='S') && (choice1!='s') && (choice1!='N') && (choice1!='n')) // Se escolha invalida for inserida
    {                                                                          
        printf("\n");
        printf("Escolha incorreta. Por favor, digite S para Sim ou N para Nao.\n");
        scanf("%c",&choice1);
    }
 
 
    if((choice1 == 'S') || (choice1 == 's')) // Se sim, continua.
    {
            system("cls");
            play();
    }
  
    else if((choice1 == 'N') || (choice1 == 'n')) // Se nao, sai do programa
    {
        fileresults();
        printf("\nTCHAU!!!!\n\n");
        system("pause");
        exit(0);
    }
    return;
} // Fim da funcao
 
void fileresults() //Grava os resultados no arquivo Blackjack.txt no diretorio do programa
{
    FILE *fpresults; //O ponteiro de arquivo e fpresults
    fpresults = fopen(RESULTS, "w"); //Cria o arquivo e escreve nele
    if(fpresults == NULL) // o que fazer se o arquivo estiver faltando no diretorio
    {
               printf("\nErro: Arquivo nao encontrado\n");
               system("pause");
               exit(1);
    }
    else
    {    
     fprintf(fpresults,"\n\t RESULTADOS");
     fprintf(fpresults,"\n\t---------\n");
     fprintf(fpresults,"\nVoce Venceu %d Vezes\n", won);
     fprintf(fpresults,"\nVoce Perdeu %d Vezes\n", loss);
     fprintf(fpresults,"\nContinue Jogando e Defina um Recorde!");
    }
     fclose(fpresults);
     return;
} // Fim da Funcao
