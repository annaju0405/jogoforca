#ifndef FORCA_H
#define FORCA_H


#define TAMANHO_PALAVRA 20

extern char palavrasecreta[TAMANHO_PALAVRA];
extern char chutes[26];
extern int chutesdados;


void abertura();
void chuta();
int letraexiste(char letra);
int chuteserrados();
int enforcou();
int ganhou();
int jachutou(char letra);
void desenhaforca();
void escolhepalavra();
void adicionapalavra();

#endif
