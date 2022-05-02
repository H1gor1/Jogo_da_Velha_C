#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //Biblioteca utilizada para definir o idioma do programa!

//Função que imprimi o jogo na tela
int jogo(char pos[9]){
    printf(" %c | %c | %c \n"
           "---|---|---\n"
           " %c | %c | %c \n"
           "---|---|---\n"
           " %c | %c | %c \n"
           "\n\n", pos[6], pos[7], pos[8], pos[3], pos[4], pos[5], pos[0], pos[1], pos[2]);
    
    return(0);
}

int testWin(char pos[9], int jogador, int jogada){
    //Aqui eu começo a fazer as verificações de vitória, abrangindo caso de empate (velha) e os 8 casos possíveis de vitória.
        if (jogada == 9){ //Caso seja a jogada 9 é dado empate
            jogo(pos); //Imprimo o jog na tela
            printf("VELHA! \n"
                   "Nenhum jogador venceu!");
            //Finalizo o programa com o comando exit(0);
            exit(0);
        } else if (pos[6]=='X' && pos[7]=='X' && pos[8]=='X' || pos[6]=='O' && pos[7]=='O' && pos[8]=='O'){
            jogo(pos);
            if (jogador == 0){
                printf("Parabéns jogador O!\n Você venceu!!");
            } else {
                printf("Parabéns jogador X!\n Você venceu!!");
            }
            exit(0);
        } else if (pos[3]=='X' && pos[4]=='X' && pos[5]=='X' || pos[3]=='O' && pos[4]=='O' && pos[5]=='O'){
            jogo(pos);
            if (jogador == 0){
                printf("Parabéns jogador O!\n Você venceu!!");
            } else {
                printf("Parabéns jogador X!\n Você venceu!!");
            }
            exit(0);
        } else if (pos[0]=='X' && pos[1]=='X' && pos[2]=='X' || pos[0]=='O' && pos[1]=='O' && pos[2]=='O'){
            jogo(pos);
            if (jogador == 0){
                printf("Parabéns jogador O!\n Você venceu!!");
            } else {
                printf("Parabéns jogador X!\n Você venceu!!");
            }
            exit(0);
        } else if (pos[6]=='X' && pos[3]=='X' && pos[0]=='X' || pos[6]=='O' && pos[3]=='O' && pos[0]=='O'){
            jogo(pos);
            if (jogador == 0){
                printf("Parabéns jogador O!\n Você venceu!!");
            } else {
                printf("Parabéns jogador X!\n Você venceu!!");
            }
            exit(0);
        } else if (pos[7]=='X' && pos[4]=='X' && pos[1]=='X' || pos[7]=='O' && pos[4]=='O' && pos[1]=='O'){
            jogo(pos);
            if (jogador == 0){
                printf("Parabéns jogador O!\n Você venceu!!");
            } else {
                printf("Parabéns jogador X!\n Você venceu!!");
            }
            exit(0);
        } else if (pos[8]=='X' && pos[5]=='X' && pos[2]=='X' || pos[8]=='O' && pos[5]=='O' && pos[2]=='O'){
            jogo(pos);
            if (jogador == 0){
                printf("Parabéns jogador O!\n Você venceu!!");
            } else {
                printf("Parabéns jogador X!\n Você venceu!!");
            }
            exit(0);
        } else if (pos[6]=='X' && pos[4]=='X' && pos[2]=='X' || pos[6]=='O' && pos[4]=='O' && pos[2]=='O'){
            jogo(pos);
            if (jogador == 0){
                printf("Parabéns jogador O!\n Você venceu!!");
            } else {
                printf("Parabéns jogador X!\n Você venceu!!");
            }
            exit(0);
        } else if (pos[8]=='X' && pos[4]=='X' && pos[0]=='X' || pos[8]=='O' && pos[4]=='O' && pos[0]=='O'){
            jogo(pos);
            if (jogador == 0){
                printf("Parabéns jogador O!\n Você venceu!!");
            } else {
                printf("Parabéns jogador X!\n Você venceu!!");
            }
            exit(0);
        }
}

int main(int argc, char** argv) {
    
    setlocale(LC_ALL,"portuguese"); //Comando para utilização de caracteres especiais!
    
    char pos[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '}; //String que representa cada posição do jogo!
    
    //"jogador" é uma variável de controle de jogador, a partir dela eu defino quem irá jogar!
    //testeJogador é a variável onde eu guardo o resultado do do cálculo do resto de jogador dividido por 2
    //posD é a posição que o jogador deseja jogar
    //jogada é a variável que guarda a jogada atual.
    int jogador = 2, testeJogador, posD, jogada=0;
    
    while (0==0) //Faço um while infinito onde sempre ficará executando o código
    {
        system("clear");
        testeJogador = jogador%2; //Faço o resto da divisão para definir qual jogador irá jogar!
        
        jogo(pos); //chamo a função para exibir o jogo na tela
        
        //Utilizo um if para definir o jogador, caso o resto da divisão acima seja 0 o jogador X joga,
        //caso contrário, o jogador O joga.
        if(testeJogador == 0){
            printf("Jogador X digite a posição desejada: \n"); 
            scanf(" %d", &posD);
            posD = posD-1; //Diminuo a posição desejada em 1 para utilizar como posição na string pos[];
            pos[posD] = 'X'; //Defino a posição que o jogador escolheu com o valor de X

            jogador = jogador + 1; //Somo a variável jogador em 1 para trocar o valor do resto e mudar o jogador na próxima rodada.
        } else {
            printf("Jogador O digite a posição desejada: \n");
            scanf(" %d", &posD);
            posD = posD-1;
            pos[posD] = 'O'; //Defino a posição que o jogador escolheu com o valor de O

            jogador = jogador + 1;
        }
        
        jogada = jogada+1; //Somo o valor da jogada em 1
        
        testWin(pos, jogador, jogada);
        
    }
    return (EXIT_SUCCESS);
}

