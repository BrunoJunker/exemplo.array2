#include <stdio.h>
#include <windows.h>
#define LINHAS  14
#define COLUNAS 23

void gotoxy(short col, short row);
void tela(short col, short row,char letra[LINHAS][COLUNAS]);
main() {
	char desenharTela[LINHAS][COLUNAS] = {{201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187},
										  {186,84 , 73, 84, 85, 76, 79, 32, 68, 65, 32, 84, 69, 76, 65,32 ,32 ,32 ,32 ,32 ,32 ,32 ,186},
										  {204,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,185},
										  {186, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32,186},
										  {186, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32,186},
										  {186, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32,186},
										  {186, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32,186},
										  {186, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32,186},
										  {186, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32,186},
										  {186, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32,186},
										  {186, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32,186},
										  {186, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32,186},
										  {186, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32,186},
										  {200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188}};
										  
  tela( 0, 0, desenharTela );
}
void tela(short col, short row,char letra[LINHAS][COLUNAS]) {
  int linha,coluna;
  for(linha = 0; linha < LINHAS; linha++) {
  	for( coluna = 0; coluna < COLUNAS; coluna++) {
		gotoxy(col+coluna,row+linha);
  		printf("%c",letra[linha][coluna]);
  	}
  }
}
void gotoxy(short x, short y) {
 COORD pos ={x,y};
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
