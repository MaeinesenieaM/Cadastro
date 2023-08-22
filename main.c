#include <stdio.h>
#include <locale.h>

int main ()
{
   int idade;
   char nome [51];
   char matricula [16];
   char endereco [91];
   char curso [31];
   int periodo;
   int disciplinas;
   float mensalidade;

   setlocale (LC_ALL, "Portuguese");

   printf ("Insire o seu nome: ");
   fflush (stdin);
   fgets (nome, 51, stdin);
   printf ("Insira a sua idade: ");
   scanf ("%d", &idade);
   printf ("Sua matrícula : ");
   scanf ("%s", matricula);
   printf ("Seu endereço : ");
   fflush (stdin);
   fgets (endereco, 31, stdin);
   printf ("O Curso atual : ");
   fflush (stdin);
   fgets (curso, 31, stdin);
   printf ("Seu Período : ");
   scanf ("%d", &periodo);
   printf ("Quantas disciplinas esta cursando?: ");
   scanf ("%d", &disciplinas);
   printf ("Sua mensalidade: ");
   scanf ("%f", &mensalidade);

   printf (".\n.\n.\n.\nNome: %sIdade: %d \nMatricula: %s \nEndereco: %s \nCurso: %sPeríodo: %d \nDisciplinas: %d \nMensalidade: %.2f",
   	        nome, idade, matricula, endereco, curso, periodo, disciplinas, mensalidade);
   printf ("\n\n    __o  bici! \n  _/><_ \n (_)/(_) \n  ");

   return 0;
}