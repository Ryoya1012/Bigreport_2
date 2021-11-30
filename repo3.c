#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Count(FILE *fp);
void Print(void);
void com(void);
void choice(void);
void scan(FILE *fp);

 int c;int s;
 int n=0;

// ファイル内の全文字計算 
void Count(FILE *fp)　
{

 while((c =getc(fp))!=EOF)
 {
  if( c >= 'a' && c <= 'z' )
  {
   n++;
  }else if( c >= 'A' && c <= 'Z')
  { 
   n++;
  }
 }
}

//ファイルを配列に変換
void scan(FILE *fp)
{
 FILE *fp;
 if((fp=fopen("File.txt","r"))==NULL){
 fprintf(stderr,"file open error\n");
 return 1;
 }

void com(void)
{
for(int i=0; i<20; i++)
 {
srand(time(NULL));
printf("%c",rand() % 26 + 'a');
 }
}

void choice(void)
{
 for(int i=0; i<20; i++)
 {
 int k=0;
 k = c[i];
 s = txt[k];
 printf("%c",s);
 }
}

int main(void)
{
 FILE *fp;
 
 if ((fp = fopen("Filex.txt", "r")) == NULL) {   /* ファイルを開けなければ */
                                                    /* メッセージを表示して */
        fprintf ( stderr, "Can't Open C Source File!\n" );
        exit (2);                                   /* 終了 */
    }
    Count(fp);
   scan(fp);
   com();
   choice();
   fclose(fp);
}
