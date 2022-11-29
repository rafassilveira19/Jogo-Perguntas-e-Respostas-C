#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
     setlocale(LC_ALL, "portuguese");

char resposta, resp1, resp2, resp3, resp4;

printf ("\n                                          Esse jogo de perguntas é sobre Harry Potter.\n");
printf ("\n                        Cada pergunta terá 4 (A, B, C, D) opções de resposta, porém só 1 estará correta.\n");

printf ("\n                                                       Você está pronto?\n");
printf ("\n                                      Aperte S para Sim ou aperte qualquer tecla para sair.\n");

scanf ("%s", &resposta);

if ( resposta == 's' || resposta == 'S') {
			getchar();
			system("cls");
}

else {
    printf ("\n                                                  Volte quando estiver pronto.\n");
    system("pause");
    return 0;

}

while (1) {
printf ("\nQual é a casa de Harry Potter em Hogwarts?\n");
    printf ("\n(a) Corvinal\n(b) Grifinória\n(c) Lupa-Lupa\n(d) Sonserina\n");
    scanf ("%s", &resp1);

    if ( resp1 == 'b' || resp1 == 'B') {
        printf("\nResposta certa.\n\n");
        getchar();printf ("Pressione \"ENTER\" para continuar.");
			getchar(); system("cls");
    }

    else {
        printf ("\n  Você errou. A resposta certa é B. \n \n            Fim de jogo.\n");
        system("pause");
        break;

    };
     printf ("\nQuais são as Relíquias da Morte? \n");
     printf ("\n(a) Espada de Godrico Gryffindor e Diário de Tom Riddle \n" "(b) Horcrux e Anel de Marvolo Gaunt\n" "(c) Espada de Godrico Gryffindor, Pomo de Ouro e Diadema Perdido de Ravenclaw\n" "(d) Capa da Invisibilidade, Varinha das Varinhas, Pedra de Ressurreição\n");
     scanf ("%s", &resp2);

        if ( resp2 == 'd' || resp2 == 'D') {
        printf("\nResposta certa.\n\n");
        getchar();printf ("Pressione \"ENTER\" para continuar.");
			getchar(); system("cls");
    }

    else {
        printf ("\n  Você errou. A resposta certa é D. \n \n            Fim de jogo.\n");
        system("pause");
        break;
    }

    printf ("\nExistiram quantas Horcruxes criadas por Voldemort?\n");
     printf ("\n(a) 4 \n" "(b) 10\n" "(c) 7\n" "(d) 6\n");
     scanf ("%s", &resp3);

        if ( resp3 == 'c' || resp3 == 'C') {
        printf("\nResposta certa.\n\n");
        getchar();printf ("Pressione \"ENTER\" para continuar.");
			getchar(); system("cls");
    }

    else {
        printf ("\n  Você errou. A resposta certa é C. \n \n 1. O diário de Tom Riddle\n 2. O anel de Marvolo Gaunt\n 3. O medalhão de Salazar Slytherin\n 4. A taça de Helga Hufflepuff\n 5. A tiara de Rowena Ravenclaw\n 6. A cobra Nagini\n 7. O próprio Harry Potter \n\n    Fim de jogo.\n");
        system("pause");
        break;
    }

    printf ("\nQual é o Expecto Patronum de Severus Snape?\n");
     printf ("\n(a) Ele não tinha patrono, pois nenhum comensal da morte é capaz de conjurar um\n" "(b) Uma cobra\n" "(c) Uma corça\n" "(d) Uma onça\n");
     scanf ("%s", &resp4);

        if ( resp4 == 'c' || resp4 == 'C') {
        printf("\nResposta certa.\n\n");
        getchar();printf ("Parabéns! Você acertou todas as respotas e ganhou um prêmio.");
			getchar();
			system("pause");
        break;

    }

    else {
        printf ("\n  Você errou. A resposta certa é C. \n \n Severus Snape era o único comensal de morte capaz de conjurar um patrono.\n");
        printf   ("\n Seu patrono era uma corça assim como o de Lilian, pois ele a amava. \n\n    Fim de jogo.\n\n");
        system("pause");
        break;
    }
return 0;
    }

}
