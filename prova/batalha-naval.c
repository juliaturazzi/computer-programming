/* A simple naval battle game in c made by Hugo Nascimento,  
Giovanni Ornellas and Julia turazzi as a final project 
in computer programming(UFRJ)
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include <locale.h>
#include <windows.h>
#define LINHA 10
#define COLUNA 10

int menu();
void historinha_nao_muito_feliz();
void Inicializa_Tabuleiro(int Tabuleiro[][COLUNA]);
void Mostra_tabuleiro(int tabuleiro[][COLUNA]);
void Escolhe_Navio(int Navios[][2]);
void Que_Tiro_Foi_Esse(int Tiro[]);
int acertou(int tiro[], int navios[][2]);
void Muda_Tabuleiro(int Tiro[],int navios[][2],int Tabuleiro[][COLUNA]);
void Sorteia_Navios(int Navios[][2]);
void Imprime_tabela(int Navios[][2]);

int main(void){
    system("color B0");
    int escolha,escolha_1,escolha_2,continuar=1;
    int Tabuleiro_CPU[LINHA][COLUNA],Tabuleiro_1[LINHA][COLUNA],Tabuleiro_2[LINHA][COLUNA];
    int Navios_CPU[10][2],Navios_1[10][2],Navios_2[10][2];
    int Tiro[2],Tentativa_solo=0,Tentativa_1=0,Tentativa_2=0,acertos_solo=0,acertos_1=0,acertos_2=0;
    char ir_ficar,novamente;
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    historinha_nao_muito_feliz();
    while(continuar){
        system("cls");
        fflush(stdin);
        escolha=menu();
        if(escolha==1){
            system("cls");
            printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
            printf("\t\t\t   ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
            printf("\t\t\t   ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
            printf("\t\t\t   ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
            printf("\t\t\t   ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
            printf("\t\t\t   ######      #     #######     #     #        #     #     #         #     #     #     #     #     #     # \n");
            printf("\t\t\t   #     #    # #       #       # #    #        #     #    # #        ##    #    # #    #     #    # #    # \n");
            printf("\t\t\t   #     #   #   #      #      #   #   #        #     #   #   #       # #   #   #   #   #     #   #   #   # \n");
            printf("\t\t\t   ######   #     #     #     #     #  #        #######  #     #      #  #  #  #     #  #     #  #     #  # \n");
            printf("\t\t\t   #     #  #######     #     #######  #        #     #  #######      #   # #  #######   #   #   #######  # \n");
            printf("\t\t\t   #     #  #     #     #     #     #  #        #     #  #     #      #    ##  #     #    # #    #     #  #  \n");
            printf("\t\t\t   ######   #     #     #     #     #  #######  #     #  #     #      #     #  #     #     #     #     #  ########\n");
            printf("\t\t\t   ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
            printf("\t\t\t   ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
            printf("\t\t\t   ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ JOGAR-1  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
            printf("\t\t\t   ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ VOLTAR-2 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
            printf("\t\t\t                                                     Escolha: ");
            fflush(stdin);
            scanf("%d",&escolha_1);
            switch(escolha_1){
                case 1:
                    system("cls");
                    Inicializa_Tabuleiro(Tabuleiro_CPU);
                    Sorteia_Navios(Navios_CPU);
                    while(acertos_solo != 10){
                        Mostra_tabuleiro(Tabuleiro_CPU);
                        Que_Tiro_Foi_Esse(Tiro);
                        Tentativa_solo++;
                        if(acertou(Tiro,Navios_CPU)){
                            system("cls");
                            printf("\t\t\t\t\t\t\t\t   ---------------------------------------- \n");
                            puts("\t\t\t\t\t\t\t\t  | O NAVIO VIROU TITANIC !! BOA SOLDADO!! |");
                            printf("\t\t\t\t\t\t\t ----------------------------------------------------------\n");
                            printf("\t\t\t\t\t\t\t|  TENTATIVAS ATÉ O MOMENTO = %d | LIMITE DE TENTATIVAS=30  |\n",Tentativa_solo);
                            acertos_solo++;
                        }
                        else{
                            system("cls");
                            printf("\t\t\t\t\t\t\t        ---------------------------------------------- \n");
                            puts("\t\t\t\t\t\t\t       | MANDOU MAL !! VOCE ESTÁ MATANDO TONINHAS  !! |");
                            printf("\t\t\t\t\t\t\t ----------------------------------------------------------\n");
                            printf("\t\t\t\t\t\t\t|  TENTATIVAS ATÉ O MOMENTO = %d | LIMITE DE TENTATIVAS=30  |\n",Tentativa_solo);
                        }
                        Muda_Tabuleiro(Tiro,Navios_CPU,Tabuleiro_CPU);
                        if(Tentativa_solo==30){
                            Mostra_tabuleiro(Tabuleiro_CPU);
                            printf("\n\n\n\n");
                            printf("\t\t\t\t\t\t\t######   #######  ######   ######   #######  #     #\n"); 
                            printf("\t\t\t\t\t\t\t#     #  #        #     #  #     #  #        #     # \n"); 
                            printf("\t\t\t\t\t\t\t#     #  #        #     #  #     #  #        #     # \n"); 
                            printf("\t\t\t\t\t\t\t######   #####    ######   #     #  #####    #     # \n"); 
                            printf("\t\t\t\t\t\t\t#        #        #   #    #     #  #        #     # \n"); 
                            printf("\t\t\t\t\t\t\t#        #        #    #   #     #  #        #     # \n"); 
                            printf("\t\t\t\t\t\t\t#        #######  #     #  ######   #######   #####  \n"); 
                            printf("\n\n");
                            system("pause");
                            break;                          
                        }

                    }
                    system("cls");
                    Mostra_tabuleiro(Tabuleiro_CPU);
                    printf("\n\n\n\n");
                    printf("\t\t       #  #######   #####   #######      #######  ###  #     #     #     #        ###  #######     #     ######   #######  ###\n");
                    printf("\t\t       #  #     #  #     #  #     #      #         #   ##    #    # #    #         #        #     # #    #     #  #     #  ### \n");
                    printf("\t\t       #  #     #  #        #     #      #         #   # #   #   #   #   #         #       #     #   #   #     #  #     #  ### \n");
                    printf("\t\t       #  #     #  #  ####  #     #      #####     #   #  #  #  #     #  #         #      #     #     #  #     #  #     #   #  \n");
                    printf("\t\t #     #  #     #  #     #  #     #      #         #   #   # #  #######  #         #     #      #######  #     #  #     #      \n");
                    printf("\t\t #     #  #     #  #     #  #     #      #         #   #    ##  #     #  #         #    #       #     #  #     #  #     #  ### \n");
                    printf("\t\t  #####   #######   #####   #######      #        ###  #     #  #     #  #######  ###  #######  #     #  ######   #######  ### \n");
                    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tTentativas:%d\n\n",Tentativa_solo);
                    system("pause");
                    system("cls");


                    printf("\n\n\n\n\n\n");
                    printf("\t\t\t\t\t\t\t  ######   #######   #####   #######        #     #\n");    
                    printf("\t\t\t\t\t\t\t  #     #  #        #     #  #              #    # #  \n");    
                    printf("\t\t\t\t\t\t\t  #     #  #        #        #              #   #   #  \n");   
                    printf("\t\t\t\t\t\t\t  #     #  #####     #####   #####          #  #     # \n");   
                    printf("\t\t\t\t\t\t\t  #     #  #              #  #        #     #  ####### \n");   
                    printf("\t\t\t\t\t\t\t  #     #  #        #     #  #        #     #  #     # \n");   
                    printf("\t\t\t\t\t\t\t  ######   #######   #####   #######   #####   #     # \n");   
                    printf("\n\n\n\n");
                    printf("\t\t\t\t\t\t\t           #  #######   #####      #     ######\n"); 
                    printf("\t\t\t\t\t\t\t           #  #     #  #     #    # #    #     # \n"); 
                    printf("\t\t\t\t\t\t\t           #  #     #  #         #   #   #     # \n"); 
                    printf("\t\t\t\t\t\t\t           #  #     #  #  ####  #     #  ######  \n"); 
                    printf("\t\t\t\t\t\t\t     #     #  #     #  #     #  #######  #   #   \n"); 
                    printf("\t\t\t\t\t\t\t     #     #  #     #  #     #  #     #  #    #  \n"); 
                    printf("\t\t\t\t\t\t\t      #####   #######   #####   #     #  #     # \n"); 
                    printf("\n\n\n\n");
                    printf("\t\t\t\t       #     #  #######  #     #     #     #     #  #######  #     #  #######  #######   #####  \n"); 
                    printf("\t\t\t\t       ##    #  #     #  #     #    # #    ##   ##  #        ##    #     #     #        #     # \n"); 
                    printf("\t\t\t\t       # #   #  #     #  #     #   #   #   # # # #  #        # #   #     #     #              # \n"); 
                    printf("\t\t\t\t       #  #  #  #     #  #     #  #     #  #  #  #  #####    #  #  #     #     #####       ###  \n"); 
                    printf("\t\t\t\t       #   # #  #     #   #   #   #######  #     #  #        #   # #     #     #           #    \n"); 
                    printf("\t\t\t\t       #    ##  #     #    # #    #     #  #     #  #        #    ##     #     #                \n"); 
                    printf("\t\t\t\t       #     #  #######     #     #     #  #     #  #######  #     #     #     #######     #    \n");
                    printf("\t\t\t\t       ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
                    printf("\t\t\t\t       ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ s / n ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
                    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t        Escolha: ");
                    do{
                        fflush(stdin);
                        scanf("%c",&novamente);
                        if(novamente=='s'){
                            acertos_solo=0;
                            Tentativa_solo=0;
                            break;
                        }else if(novamente=='n'){
                            return 0;
                        }else{
                            printf("\t\t\t\t\t\t\t\t\tPOR FAVOR, ESCOLHA NOVAMENTE.\n");
                        }
                    }while(1);

                    break;

                case 2:
                    break;
                default:
                    system("cls");
                    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
                    printf("\t\t\t\t\t\t  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
                    printf("\t\t\t\t\t\t  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
                    printf("\t\t\t\t\t\t  ######   #######  ######       #######     #     #     #  #######  ######  \n");  
                    printf("\t\t\t\t\t\t  #     #  #     #  #     #      #          # #    #     #  #     #  #     # \n");  
                    printf("\t\t\t\t\t\t  #     #  #     #  #     #      #         #   #   #     #  #     #  #     # \n");  
                    printf("\t\t\t\t\t\t  ######   #     #  ######       #####    #     #  #     #  #     #  ###### \n");   
                    printf("\t\t\t\t\t\t  #        #     #  #   #        #        #######   #   #   #     #  #   #  \n");  
                    printf("\t\t\t\t\t\t  #        #     #  #    #       #        #     #    # #    #     #  #    # \n");  
                    printf("\t\t\t\t\t\t  #        #######  #     #      #        #     #     #     #######  #     #\n"); 
                    printf("\n\n\n");
                    printf("\t\t\t######   ###   #####   ###  #######  #######      #     #  #######  #     #     #     #     #  #######  #     #  #######  #######\n"); 
                    printf("\t\t\t#     #   #   #     #   #      #     #            ##    #  #     #  #     #    # #    ##   ##  #        ##    #     #     #       \n"); 
                    printf("\t\t\t#     #   #   #         #      #     #            # #   #  #     #  #     #   #   #   # # # #  #        # #   #     #     #       \n"); 
                    printf("\t\t\t#     #   #   #  ####   #      #     #####        #  #  #  #     #  #     #  #     #  #  #  #  #####    #  #  #     #     #####   \n"); 
                    printf("\t\t\t#     #   #   #     #   #      #     #            #   # #  #     #   #   #   #######  #     #  #        #   # #     #     #       \n"); 
                    printf("\t\t\t#     #   #   #     #   #      #     #            #    ##  #     #    # #    #     #  #     #  #        #    ##     #     #       \n"); 
                    printf("\t\t\t######   ###   #####   ###     #     #######      #     #  #######     #     #     #  #     #  #######  #     #     #     ####### \n");
                    printf("\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
                    printf("\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");
                    system("pause");
            }

        }else if(escolha==2){
            system("cls");
            printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
            printf("\t\t\t   ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
            printf("\t\t\t   ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
            printf("\t\t\t   ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
            printf("\t\t\t   ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
            printf("\t\t\t   ######      #     #######     #     #        #     #     #         #     #     #     #     #     #     # \n");
            printf("\t\t\t   #     #    # #       #       # #    #        #     #    # #        ##    #    # #    #     #    # #    # \n");
            printf("\t\t\t   #     #   #   #      #      #   #   #        #     #   #   #       # #   #   #   #   #     #   #   #   # \n");
            printf("\t\t\t   ######   #     #     #     #     #  #        #######  #     #      #  #  #  #     #  #     #  #     #  # \n");
            printf("\t\t\t   #     #  #######     #     #######  #        #     #  #######      #   # #  #######   #   #   #######  # \n");
            printf("\t\t\t   #     #  #     #     #     #     #  #        #     #  #     #      #    ##  #     #    # #    #     #  #  \n");
            printf("\t\t\t   ######   #     #     #     #     #  #######  #     #  #     #      #     #  #     #     #     #     #  ########\n");
            printf("\t\t\t   ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
            printf("\t\t\t   ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
            printf("\t\t\t   ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ JOGAR-1  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
            printf("\t\t\t   ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ VOLTAR-2 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
            printf("\t\t\t                                                     Escolha: ");
            fflush(stdin);
            scanf("%d",&escolha_2);
            switch(escolha_2){
                case 1:
                    system("cls");
                    Inicializa_Tabuleiro(Tabuleiro_1);
                    Inicializa_Tabuleiro(Tabuleiro_2);
                    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                    printf("\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
                    printf("\t\t\t\t\t#                                      #     #                                           # \n");  
                    printf("\t\t\t\t\t#        #   ####   #####    ##        ##    #    ##    #    #  #   ####    ####        ##  \n"); 
                    printf("\t\t\t\t\t#        #  #         #     #  #       # #   #   #  #   #    #  #  #    #  #           # #  \n"); 
                    printf("\t\t\t\t\t#        #   ####     #    #    #      #  #  #  #    #  #    #  #  #    #   ####         #   \n");
                    printf("\t\t\t\t\t#        #       #    #    ######      #   # #  ######  #    #  #  #    #       #        #   \n");
                    printf("\t\t\t\t\t#        #  #    #    #    #    #      #    ##  #    #   #  #   #  #    #  #    #        #   \n");
                    printf("\t\t\t\t\t#######  #   ####     #    #    #      #     #  #    #    ##    #   ####    ####       ##### \n");  
                    printf("\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");                                                                        
                    Escolhe_Navio(Navios_1);
                    system("cls");
                    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                    printf("\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
                    printf("\t\t\t\t\t#                                      #     #                                           # \n");  
                    printf("\t\t\t\t\t#        #   ####   #####    ##        ##    #    ##    #    #  #   ####    ####        ##  \n"); 
                    printf("\t\t\t\t\t#        #  #         #     #  #       # #   #   #  #   #    #  #  #    #  #           # #  \n"); 
                    printf("\t\t\t\t\t#        #   ####     #    #    #      #  #  #  #    #  #    #  #  #    #   ####         #   \n");
                    printf("\t\t\t\t\t#        #       #    #    ######      #   # #  ######  #    #  #  #    #       #        #   \n");
                    printf("\t\t\t\t\t#        #  #    #    #    #    #      #    ##  #    #   #  #   #  #    #  #    #        #   \n");
                    printf("\t\t\t\t\t#######  #   ####     #    #    #      #     #  #    #    ##    #   ####    ####       ##### \n");  
                    printf("\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");   
                    Imprime_tabela(Navios_1);
                    system("pause");
                    system("cls");
                    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                    printf("\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n"); 
                    printf("\t\t\t\t\t#                                      #     #                                          #####\n"); 
                    printf("\t\t\t\t\t#        #   ####   #####    ##        ##    #    ##    #    #  #   ####    ####       #     # \n"); 
                    printf("\t\t\t\t\t#        #  #         #     #  #       # #   #   #  #   #    #  #  #    #  #                 # \n"); 
                    printf("\t\t\t\t\t#        #   ####     #    #    #      #  #  #  #    #  #    #  #  #    #   ####        #####  \n"); 
                    printf("\t\t\t\t\t#        #       #    #    ######      #   # #  ######  #    #  #  #    #       #      #       \n"); 
                    printf("\t\t\t\t\t#        #  #    #    #    #    #      #    ##  #    #   #  #   #  #    #  #    #      #       \n"); 
                    printf("\t\t\t\t\t#######  #   ####     #    #    #      #     #  #    #    ##    #   ####    ####       ####### \n"); 
                    printf("\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n"); 
                    Escolhe_Navio(Navios_2);
                    system("cls");
                    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                    printf("\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n"); 
                    printf("\t\t\t\t\t#                                      #     #                                          #####\n"); 
                    printf("\t\t\t\t\t#        #   ####   #####    ##        ##    #    ##    #    #  #   ####    ####       #     # \n"); 
                    printf("\t\t\t\t\t#        #  #         #     #  #       # #   #   #  #   #    #  #  #    #  #                 # \n"); 
                    printf("\t\t\t\t\t#        #   ####     #    #    #      #  #  #  #    #  #    #  #  #    #   ####        #####  \n"); 
                    printf("\t\t\t\t\t#        #       #    #    ######      #   # #  ######  #    #  #  #    #       #      #       \n"); 
                    printf("\t\t\t\t\t#        #  #    #    #    #    #      #    ##  #    #   #  #   #  #    #  #    #      #       \n"); 
                    printf("\t\t\t\t\t#######  #   ####     #    #    #      #     #  #    #    ##    #   ####    ####       ####### \n"); 
                    printf("\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n"); 
                    Imprime_tabela(Navios_2);
                    system("pause");
                    system("cls");
                    printf("\n\n\n\n\n\n\n\n");
                    printf("\t\t\t\t\t ######   ######   #######  ######      #     ######   #######          #####   #######\n");
                    printf("\t\t\t\t\t #     #  #     #  #        #     #    # #    #     #  #               #     #  #      \n");
                    printf("\t\t\t\t\t #     #  #     #  #        #     #   #   #   #     #  #               #        #       \n");
                    printf("\t\t\t\t\t ######   ######   #####    ######   #     #  ######   #####    #####   #####   #####   \n");
                    printf("\t\t\t\t\t #        #   #    #        #        #######  #   #    #                     #  #       \n");
                    printf("\t\t\t\t\t #        #    #   #        #        #     #  #    #   #               #     #  #        \n");
                    printf("\t\t\t\t\t #        #     #  #######  #        #     #  #     #  #######          #####   #######\n");
                    printf("\n\n\n");
                    printf("\t\t\t\t\t\t\t\t ######      #     ######      #        \n");
                    printf("\t\t\t\t\t\t\t\t #     #    # #    #     #    # #       \n");
                    printf("\t\t\t\t\t\t\t\t #     #   #   #   #     #   #   #      \n");
                    printf("\t\t\t\t\t\t\t\t ######   #     #  ######   #     #     \n"); 
                    printf("\t\t\t\t\t\t\t\t #        #######  #   #    #######     \n");
                    printf("\t\t\t\t\t\t\t\t #        #     #  #    #   #     #     \n");
                    printf("\t\t\t\t\t\t\t\t #        #     #  #     #  #     #     \n");
                    printf("\n\n\n");
                    printf("\t\t\t\t\t\t    ######      #     #######     #     #        #     #     # \n");
                    printf("\t\t\t\t\t\t    #     #    # #       #       # #    #        #     #    # #\n");
                    printf("\t\t\t\t\t\t    #     #   #   #      #      #   #   #        #     #   #   # \n"); 
                    printf("\t\t\t\t\t\t    ######   #     #     #     #     #  #        #######  #     # \n");
                    printf("\t\t\t\t\t\t    #     #  #######     #     #######  #        #     #  #######\n"); 
                    printf("\t\t\t\t\t\t    #     #  #     #     #     #     #  #        #     #  #     #\n"); 
                    printf("\t\t\t\t\t\t    ######   #     #     #     #     #  #######  #     #  #     #\n");
                    system("pause");
                    system("cls");
                    while(acertos_1!=10 && acertos_2!=10){
                        //Vez do jogador 1
                        if(acertos_2!=10){
                            printf("\t\t\t\t\t\t\t\t\t      ------------------ \n");
                            printf("\t\t\t\t\t\t\t\t\t     | VEZ DO JOGADOR 1 |\n");
                            printf("\t\t\t\t\t\t\t\t\t   ------------------------ \n");
                            printf("\t\t\t\t\t\t\t\t\t  | TABULEIRO DO JOGADOR 2 |\n");
                            Mostra_tabuleiro(Tabuleiro_2);
                            Que_Tiro_Foi_Esse(Tiro);
                            Tentativa_1++;
                            if (acertou(Tiro, Navios_2)){
                                system("cls");
                                puts("\t\t\t\t\t\t\t\t       -------------------------------");
                                puts("\t\t\t\t\t\t\t\t      | O JOGADOR 1 ACERTOU EM CHEIO. |");
                                acertos_1++;
                            }
                            else{
                                system("cls");
                                puts("\t\t\t\t\t\t\t\t       --------------------------------");
                                puts("\t\t\t\t\t\t\t\t      | VOCÊ ESTÁ MATANDO TONINHAS !!! |");
                            }
                            Muda_Tabuleiro(Tiro,Navios_2,Tabuleiro_2);
                        }
                        //vez do jogador 2
                        if(acertos_1!=10){
                            printf("\t\t\t\t\t\t\t\t\t      ------------------ \n");
                            printf("\t\t\t\t\t\t\t\t\t     | VEZ DO JOGADOR 2 |\n");
                            printf("\t\t\t\t\t\t\t\t\t   ------------------------ \n");
                            printf("\t\t\t\t\t\t\t\t\t  | TABULEIRO DO JOGADOR 1 |\n");
                            Mostra_tabuleiro(Tabuleiro_1);
                            Que_Tiro_Foi_Esse(Tiro);
                            Tentativa_2++;
                            if (acertou(Tiro, Navios_1)){
                                system("cls");
                                puts("\t\t\t\t\t\t\t\t       -------------------------------");
                                puts("\t\t\t\t\t\t\t\t      | O JOGADOR 2 ACERTOU EM CHEIO. |");
                                acertos_2++;
                            }
                            else{
                                system("cls");
                                puts("\t\t\t\t\t\t\t\t       --------------------------------");
                                puts("\t\t\t\t\t\t\t\t      | VOCÊ ESTÁ MATANDO TONINHAS !!! |");
                            }
                            Muda_Tabuleiro(Tiro,Navios_1,Tabuleiro_1);
                        }
                    }
                    system("cls");
                    if(acertos_1==10){
                        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                        printf("\t    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
                        printf("\t    #######            #  #######   #####      #     ######   #######  ######         #        #     #  #######  #     #   #####   #######  #     #\n"); 
                        printf("\t    #     #            #  #     #  #     #    # #    #     #  #     #  #     #       ##        #     #  #        ##    #  #     #  #        #     # \n"); 
                        printf("\t    #     #            #  #     #  #         #   #   #     #  #     #  #     #      # #        #     #  #        # #   #  #        #        #     # \n"); 
                        printf("\t    #     #            #  #     #  #  ####  #     #  #     #  #     #  ######         #        #     #  #####    #  #  #  #        #####    #     # \n"); 
                        printf("\t    #     #      #     #  #     #  #     #  #######  #     #  #     #  #   #          #         #   #   #        #   # #  #        #        #     # \n"); 
                        printf("\t    #     #      #     #  #     #  #     #  #     #  #     #  #     #  #    #         #          # #    #        #    ##  #     #  #        #     # \n"); 
                        printf("\t    #######       #####   #######   #####   #     #  ######   #######  #     #      #####         #     #######  #     #   #####   #######   #####  \n");
                        printf("\t    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
                        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t      TENTATIVAS: %d\n\n",Tentativa_1);
                        system("pause");
                        system("cls");
                    }else{
                        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                        printf("\t    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
                        printf("\t    #######            #  #######   #####      #     ######   #######  ######        #####       #     #  #######  #     #   #####   #######  #     #\n");
                        printf("\t    #     #            #  #     #  #     #    # #    #     #  #     #  #     #      #     #      #     #  #        ##    #  #     #  #        #     #\n"); 
                        printf("\t    #     #            #  #     #  #         #   #   #     #  #     #  #     #            #      #     #  #        # #   #  #        #        #     #\n"); 
                        printf("\t    #     #            #  #     #  #  ####  #     #  #     #  #     #  ######        #####       #     #  #####    #  #  #  #        #####    #     # \n");
                        printf("\t    #     #      #     #  #     #  #     #  #######  #     #  #     #  #   #        #             #   #   #        #   # #  #        #        #     # \n");
                        printf("\t    #     #      #     #  #     #  #     #  #     #  #     #  #     #  #    #       #              # #    #        #    ##  #     #  #        #     # \n");
                        printf("\t    #######       #####   #######   #####   #     #  ######   #######  #     #      #######         #     #######  #     #   #####   #######   #####  \n");
                        printf("\t    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
                        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t      TENTATIVAS: %d\n\n",Tentativa_2);
                        system("pause");
                        system("cls");
                    }

                    printf("\n\n\n\n\n\n");
                    printf("\t\t\t\t\t\t\t  ######   #######   #####   #######        #     #\n");    
                    printf("\t\t\t\t\t\t\t  #     #  #        #     #  #              #    # #  \n");    
                    printf("\t\t\t\t\t\t\t  #     #  #        #        #              #   #   #  \n");   
                    printf("\t\t\t\t\t\t\t  #     #  #####     #####   #####          #  #     # \n");   
                    printf("\t\t\t\t\t\t\t  #     #  #              #  #        #     #  ####### \n");   
                    printf("\t\t\t\t\t\t\t  #     #  #        #     #  #        #     #  #     # \n");   
                    printf("\t\t\t\t\t\t\t  ######   #######   #####   #######   #####   #     # \n");   
                    printf("\n\n\n\n");
                    printf("\t\t\t\t\t\t\t           #  #######   #####      #     ######\n"); 
                    printf("\t\t\t\t\t\t\t           #  #     #  #     #    # #    #     # \n"); 
                    printf("\t\t\t\t\t\t\t           #  #     #  #         #   #   #     # \n"); 
                    printf("\t\t\t\t\t\t\t           #  #     #  #  ####  #     #  ######  \n"); 
                    printf("\t\t\t\t\t\t\t     #     #  #     #  #     #  #######  #   #   \n"); 
                    printf("\t\t\t\t\t\t\t     #     #  #     #  #     #  #     #  #    #  \n"); 
                    printf("\t\t\t\t\t\t\t      #####   #######   #####   #     #  #     # \n"); 
                    printf("\n\n\n\n");
                    printf("\t\t\t\t       #     #  #######  #     #     #     #     #  #######  #     #  #######  #######   #####  \n"); 
                    printf("\t\t\t\t       ##    #  #     #  #     #    # #    ##   ##  #        ##    #     #     #        #     # \n"); 
                    printf("\t\t\t\t       # #   #  #     #  #     #   #   #   # # # #  #        # #   #     #     #              # \n"); 
                    printf("\t\t\t\t       #  #  #  #     #  #     #  #     #  #  #  #  #####    #  #  #     #     #####       ###  \n"); 
                    printf("\t\t\t\t       #   # #  #     #   #   #   #######  #     #  #        #   # #     #     #           #    \n"); 
                    printf("\t\t\t\t       #    ##  #     #    # #    #     #  #     #  #        #    ##     #     #                \n"); 
                    printf("\t\t\t\t       #     #  #######     #     #     #  #     #  #######  #     #     #     #######     #    \n");
                    printf("\t\t\t\t       ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
                    printf("\t\t\t\t       ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ s / n ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
                    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t        Escolha: ");

                    
                    while(novamente != 's' || 'n'){
                        fflush(stdin);
                        scanf("%c",&novamente);
                        if(novamente=='s'){
                            acertos_1=0;
                            acertos_2=0;
                            Tentativa_1=0;
                            Tentativa_2=0;
                            break;
                        }else if(novamente=='n'){
                            return 0;
                        }else{
                            printf("\t\t\t\t\t\t\t\t\tPOR FAVOR, ESCOLHA NOVAMENTE.\n");
                        }
                    }
                    break;
                case 2:
                    break;
                default:
                    system("cls");
                    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
                    printf("\t\t\t\t\t\t  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
                    printf("\t\t\t\t\t\t  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
                    printf("\t\t\t\t\t\t  ######   #######  ######       #######     #     #     #  #######  ######  \n");  
                    printf("\t\t\t\t\t\t  #     #  #     #  #     #      #          # #    #     #  #     #  #     # \n");  
                    printf("\t\t\t\t\t\t  #     #  #     #  #     #      #         #   #   #     #  #     #  #     # \n");  
                    printf("\t\t\t\t\t\t  ######   #     #  ######       #####    #     #  #     #  #     #  ###### \n");   
                    printf("\t\t\t\t\t\t  #        #     #  #   #        #        #######   #   #   #     #  #   #  \n");  
                    printf("\t\t\t\t\t\t  #        #     #  #    #       #        #     #    # #    #     #  #    # \n");  
                    printf("\t\t\t\t\t\t  #        #######  #     #      #        #     #     #     #######  #     #\n"); 
                    printf("\n\n\n");
                    printf("\t\t\t######   ###   #####   ###  #######  #######      #     #  #######  #     #     #     #     #  #######  #     #  #######  #######\n"); 
                    printf("\t\t\t#     #   #   #     #   #      #     #            ##    #  #     #  #     #    # #    ##   ##  #        ##    #     #     #       \n"); 
                    printf("\t\t\t#     #   #   #         #      #     #            # #   #  #     #  #     #   #   #   # # # #  #        # #   #     #     #       \n"); 
                    printf("\t\t\t#     #   #   #  ####   #      #     #####        #  #  #  #     #  #     #  #     #  #  #  #  #####    #  #  #     #     #####   \n"); 
                    printf("\t\t\t#     #   #   #     #   #      #     #            #   # #  #     #   #   #   #######  #     #  #        #   # #     #     #       \n"); 
                    printf("\t\t\t#     #   #   #     #   #      #     #            #    ##  #     #    # #    #     #  #     #  #        #    ##     #     #       \n"); 
                    printf("\t\t\t######   ###   #####   ###     #     #######      #     #  #######     #     #     #  #     #  #######  #     #     #     ####### \n");
                    printf("\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
                    printf("\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");
                    system("pause");
                    break;
            }
        }else if(escolha==3){
            system("cls");
            printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
            printf("\t\t\t\t\t ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
            printf("\t\t\t\t\t #####   #######  #     #   #######           #  #######   #####      #     ######\n");
            printf("\t\t\t\t\t #    #  #     #  ##   ##   #     #           #  #     #  #     #    # #    #     #\n");
            printf("\t\t\t\t\t #       #     #  # # # #   #     #           #  #     #  #         #   #   #     # \n");
            printf("\t\t\t\t\t #       #     #  #  #  #   #     #           #  #     #  #  ####  #     #  ######\n");
            printf("\t\t\t\t\t #       #     #  #     #   #     #      #    #  #     #  #     #  #######  #   #  \n");
            printf("\t\t\t\t\t #    #  #     #  #     #   #     #      #    #  #     #  #     #  #     #  #    # \n");
            printf("\t\t\t\t\t #####   #######  #     #   #######       #####  #######   #####   #     #  #     # \n");
            printf("\t\t\t\t\t ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
            printf("\n\n");
            printf("\t\t\t\tA cada rodada insira dois números,o primeiro para linha e o segundo para coluna.\n");
            printf("\t\t\t\tDepois de inseridos uma mensagem avisará se o tiro foi um acerto ou não.\n");
            printf("\n\t\t\t\tLegenda:\n");
            printf("\t\t\t\t\tSímbolo padrão para: ~\n");
            printf("\t\t\t\t\tTiro falhou: *\n");
            printf("\t\t\t\t\tAcertou o navio: X\n");
            system("pause");
        }else if(escolha==4){
            system("cls");
            do{
                printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                printf("\t\t\t\t\t######                                                #####                       #####\n");
                printf("\t\t\t\t\t#     #  ######   ####   ######       #    ##        #     #    ##    #  #####   #     #\n");
                printf("\t\t\t\t\t#     #  #       #       #            #   #  #       #         #  #   #  #    #        #\n");
                printf("\t\t\t\t\t#     #  #####    ####   #####        #  #    #       #####   #    #  #  #    #     ### \n");
                printf("\t\t\t\t\t#     #  #            #  #            #  ######            #  ######  #  #####      #  \n");
                printf("\t\t\t\t\t#     #  #       #    #  #       #    #  #    #      #     #  #    #  #  #   #          \n");
                printf("\t\t\t\t\t######   ######   ####   ######   ####   #    #       #####   #    #  #  #    #     #   \n");
                printf("\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
                printf("\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ s / n ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
                printf("\t\t\t\t\t                                       Escolha: ");
                fflush(stdin);
                ir_ficar=getchar();
                system("cls");
            }while(ir_ficar != 's' && ir_ficar != 'n');
            printf("\n\n\n\n\n\n\n\n\n\n\n");
            if(ir_ficar=='s'){
                printf("\t\t\t\t\t\t\t\t   *******PROGRAMA ENCERRADO********\n");
                return 0;
            }else{
                printf("\t\t\t\t\t\t\t\t   *****O PROGRAMA VAI CONTINUAR*****\n");
            }
        }else{
            system("cls");
            printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
            printf("\t\t\t\t\t\t  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
            printf("\t\t\t\t\t\t  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
            printf("\t\t\t\t\t\t  ######   #######  ######       #######     #     #     #  #######  ######  \n");  
            printf("\t\t\t\t\t\t  #     #  #     #  #     #      #          # #    #     #  #     #  #     # \n");  
            printf("\t\t\t\t\t\t  #     #  #     #  #     #      #         #   #   #     #  #     #  #     # \n");  
            printf("\t\t\t\t\t\t  ######   #     #  ######       #####    #     #  #     #  #     #  ###### \n");   
            printf("\t\t\t\t\t\t  #        #     #  #   #        #        #######   #   #   #     #  #   #  \n");  
            printf("\t\t\t\t\t\t  #        #     #  #    #       #        #     #    # #    #     #  #    # \n");  
            printf("\t\t\t\t\t\t  #        #######  #     #      #        #     #     #     #######  #     #\n"); 
            printf("\n\n\n");
            printf("\t\t\t######   ###   #####   ###  #######  #######      #     #  #######  #     #     #     #     #  #######  #     #  #######  #######\n"); 
            printf("\t\t\t#     #   #   #     #   #      #     #            ##    #  #     #  #     #    # #    ##   ##  #        ##    #     #     #       \n"); 
            printf("\t\t\t#     #   #   #         #      #     #            # #   #  #     #  #     #   #   #   # # # #  #        # #   #     #     #       \n"); 
            printf("\t\t\t#     #   #   #  ####   #      #     #####        #  #  #  #     #  #     #  #     #  #  #  #  #####    #  #  #     #     #####   \n"); 
            printf("\t\t\t#     #   #   #     #   #      #     #            #   # #  #     #   #   #   #######  #     #  #        #   # #     #     #       \n"); 
            printf("\t\t\t#     #   #   #     #   #      #     #            #    ##  #     #    # #    #     #  #     #  #        #    ##     #     #       \n"); 
            printf("\t\t\t######   ###   #####   ###     #     #######      #     #  #######     #     #     #  #     #  #######  #     #     #     ####### \n");
            printf("\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
            printf("\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");
            system("pause");
        }


    }
    return 0;
}

int menu(){
    int caminho;
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf("\t\t\t   ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("\t\t\t   ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("\t\t\t   ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("\t\t\t   ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("\t\t\t   ######      #     #######     #     #        #     #     #         #     #     #     #     #     #     # \n");
    printf("\t\t\t   #     #    # #       #       # #    #        #     #    # #        ##    #    # #    #     #    # #    # \n");
    printf("\t\t\t   #     #   #   #      #      #   #   #        #     #   #   #       # #   #   #   #   #     #   #   #   # \n");
    printf("\t\t\t   ######   #     #     #     #     #  #        #######  #     #      #  #  #  #     #  #     #  #     #  # \n");
    printf("\t\t\t   #     #  #######     #     #######  #        #     #  #######      #   # #  #######   #   #   #######  # \n");
    printf("\t\t\t   #     #  #     #     #     #     #  #        #     #  #     #      #    ##  #     #    # #    #     #  #  \n");
    printf("\t\t\t   ######   #     #     #     #     #  #######  #     #  #     #      #     #  #     #     #     #     #  ########\n");
    printf("\t\t\t   ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ Aperte 1 - Para 1 jogador  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("\t\t\t   ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ Aperte 2 - Para 2 jogador  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("\t\t\t   ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ Aperte 3 - Para Como Jogar ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("\t\t\t   ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ Aperte 4 - Sair            ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("\t\t\t                                            Insira a alternativa: ");
    scanf("%d",&caminho);
    return caminho;
}

void Inicializa_Tabuleiro(int Tabuleiro[][COLUNA]){
    int linha,coluna;
    for(linha=0;linha<LINHA;linha++){
        for(coluna=0;coluna<COLUNA;coluna++){
             Tabuleiro[linha][coluna]=-1;
        }
    }
}

void Escolhe_Navio(int Navios[][2]){
    int N,c,loop=1,i;
    for(N=0;N<10;N++){
        loop=1;
        while(loop){
            fflush(stdin);
            for(c=0;c<2;c++){
                fflush(stdin);
                if(c==0){
                    printf("\t\t\t\t\tDigite a linha do navio %d: ", N+1);
                    scanf("%d", &Navios[N][c]);
                    while(Navios[N][c]<1 || Navios[N][c]>10){
                        printf("\t\t\t\t\tValor não disponível.\n");
                        printf("\t\t\t\t\tDigite a linha do navio %d:",N+1);
                        fflush(stdin);
                        scanf("%d",&Navios[N][c]);
                    }
                    Navios[N][c]--;
                }else if(c==1){
                    printf("\t\t\t\t\tDigite a coluna do navio %d: ",N+1);
                    scanf("%d", &Navios[N][c]);
                    while(Navios[N][c]<1 || Navios[N][c]>10){
                        printf("\t\t\t\t\tValor não disponível.\n");
                        printf("\t\t\t\t\tDigite a coluna do navio %d:",N+1);
                        fflush(stdin);
                        scanf("%d",&Navios[N][c]);
                    }
                    Navios[N][c]--;
                    
                }
            }
            if(c==2 && N>=1){
                    for(i=0;i<N;i++){
                            if(Navios[N][0]==Navios[i][0] && Navios[N][1]==Navios[i][1]){
                                printf("\t\t\t\t\tValor Inválido.\n");
                                loop=1;
                                break;
                            }else{
                                loop=0;
                            }
                    }
            }else{
                loop=0;
            }
        }
    }
}

void Mostra_tabuleiro(int tabuleiro[][COLUNA]){
    int linha,coluna;
    printf("\n\n");
    printf("\t\t\t\t\t _____________________________________________________________________________________\n");
    printf("\t\t\t\t\t\t| 1 |\t| 2 |\t| 3 |\t| 4 |\t| 5 |\t| 6 |\t| 7 |\t| 8 |\t| 9 |\t| 10 |\n");
    for(linha=0; linha<LINHA; linha++){
        printf("\t\t\t\t\t| %d |", linha+1);
        for (coluna=0; coluna<10;coluna++){
            if(tabuleiro[linha][coluna] == -1)
            printf("\t  ~");
            else if(tabuleiro[linha][coluna] == 0)
            printf("\t  *");
            else if(tabuleiro[linha][coluna]== 1)
            printf("\t  X");
        }
        if(linha==9){
            printf("\n");
        }else{
            printf("\n\n");
        }
    }
    printf("\t\t\t\t\t____________________________________________________________________________________\n");
    
}

void Que_Tiro_Foi_Esse(int Tiro[]){
    printf("\t\t\t\t\tLinha: ");
	fflush(stdin);
	scanf("%d",&Tiro[0]);
	while(Tiro[0] < 1 || Tiro[0] > 10){
		puts("\t\t\t\t\tValor inválido de linha.");
		printf("\t\t\t\t\tInforme a linha novamente: ");
		fflush(stdin);
		scanf("%d",&Tiro[0]);
	}
	Tiro[0]--;
	printf("\t\t\t\t\tColuna: ");
	fflush(stdin);
	scanf("%d",&Tiro[1]);
	while(Tiro[1] < 1 || Tiro[1] > 10){
		puts("\t\t\t\t\tValor inválido de coluna.");
		printf("\t\t\t\t\tInforme a coluna novamente: ");
		fflush(stdin);
		scanf("%d",&Tiro[1]);
    }
	Tiro[1]--;
}

int acertou(int tiro[], int navios[][2]){
    int i;
    for(i=0; i<10; i++){
        if(tiro[0] == navios[i][0] && tiro[1] == navios[i][1]){

           return 1;
        }
    }
    return 0;
}

void Muda_Tabuleiro(int Tiro[],int navios[][2],int Tabuleiro[][COLUNA]){
    if(acertou(Tiro,navios)){
        Tabuleiro[Tiro[0]][Tiro[1]]=1;
    }else{
        Tabuleiro[Tiro[0]][Tiro[1]]=0;
    }
}

void Sorteia_Navios(int Navios[][2]){
    int linha,antes;

    srand(time(NULL));
    for(linha=0;linha<10;linha++){

        Navios[linha][0]=rand()%10;
        Navios[linha][1]=rand()%10;

        for(antes=0;antes<linha;antes++){
            while(Navios[linha][0]==Navios[antes][0] && Navios[linha][1]==Navios[linha][1]){

                Navios[linha][0]=rand()%10;
                Navios[linha][1]=rand()%10;
            }
        }
    }
}

void Imprime_tabela(int Navios[][2]){
    int linha;
    printf("\t\t\t\t\tTABELA DOS NAVIOS:\n");
    for(linha=0;linha<10;linha++){
         printf("\t\t\t\t\tO Navio %d está na posição:(%d,%d)\n",linha+1,Navios[linha][0]+1,Navios[linha][1]+1);
    }
}

void historinha_nao_muito_feliz(){
    printf("\n\n\n\n\n\n\n");
    printf("\t\t\t\t\t     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("\t\t\t\t\t    |     #         #     #  ###   #####   #######  #######  ######   ###     #    |\n");    
    printf("\t\t\t\t\t    |    # #        #     #   #   #     #     #     #     #  #     #   #     # #   |\n");  
    printf("\t\t\t\t\t    |   #   #       #     #   #   #           #     #     #  #     #   #    #   #  |\n");  
    printf("\t\t\t\t\t    |  #     #      #######   #    #####      #     #     #  ######    #   #     # | \n");  
    printf("\t\t\t\t\t    |  #######      #     #   #         #     #     #     #  #   #     #   ####### |\n");  
    printf("\t\t\t\t\t    |  #     #      #     #   #   #     #     #     #     #  #    #    #   #     # |\n");  
    printf("\t\t\t\t\t    |  #     #      #     #  ###   #####      #     #######  #     #  ###  #     # |\n");
    printf("\t\t\t\t\t     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n");

    printf("\n\n\n\n\n\n\n");
    printf("\t\t\t\t\t  Em meados de 1916 as tensões entre o Reino Unido e a Alemanha se acirraram de tal forma que\n");
    printf("\t\t\t\t\t\t\t    você, junto aos soldados precisam entrar em navios.\n");
    printf("\t\t\t\t\t\t\t\t  A água salgada e fria bate em seu rosto,\n");
    printf("\t\t\t\t\t\t\t     o cheiro de sangue e pólvora invade suas narinas,\n");
    printf("\t\t\t\t\t\t\t\t  você está na imensidão do oceano.\n");
    printf("\t\t\t\t\t\tVocê pisca e se da conta que ainda se encontra na maior e mais violenta...\n\n\n\n\n");

    system("pause");
}