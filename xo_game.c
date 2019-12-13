#include <stdio.h>

int main() {
    int x,o,n=0;
    char game[9]={' ',' ',' ',' ',' ',' ',' ',' ',' '};
    while(n<=9){
        scanf("%d",&x);
        if(game[x-1]!=' '){
            printf ("invalid cell!\n");
            scanf("%d",&x);
        }
        game[x-1]='x';
        printf ("%c|%c|%c\n%c|%c|%c\n%c|%c|%c\n\n",game[0],game[1],game[2],game[3],game[4],game[5],game[6],game[7],game[8]);
        if((game[0]==game[1]&&game[1]==game[2]&&game[2]=='x')||(game[3]==game[4]&&game[4]==game[5]&&game[5]=='x')||(game[6]==game[7]&&game[7]==game[8]&&game[8]=='x')||(game[0]==game[3]&&game[3]==game[6]&&game[6]=='x')||(game[1]==game[4]&&game[4]==game[7]&&game[7]=='x')||(game[2]==game[5]&&game[5]==game[8]&&game[8]=='x')||(game[0]==game[4]&&game[4]==game[8]&&game[8]=='x')||(game[2]==game[4]&&game[4]==game[6]&&game[6]=='x')){
            printf ("The player X wins!\n");
            return 0;
        }
        n++;
        if(n==9)
            break;
        scanf ("%d",&o);
        if(game[o-1]!=' '){
            printf ("invalid cell!\n");
            scanf("%d",&o);
        }
        game[o-1]='o';
        printf ("%c|%c|%c\n%c|%c|%c\n%c|%c|%c\n\n",game[0],game[1],game[2],game[3],game[4],game[5],game[6],game[7],game[8]);
       if((game[0]==game[1]&&game[1]==game[2]&&game[2]=='o')||(game[3]==game[4]&&game[4]==game[5]&&game[5]=='o')||(game[6]==game[7]&&game[7]==game[8]&&game[8]=='o')||(game[0]==game[3]&&game[3]==game[6]&&game[6]=='o')||(game[1]==game[4]&&game[4]==game[7]&&game[7]=='o')||(game[2]==game[5]&&game[5]==game[8]&&game[8]=='o')||(game[0]==game[4]&&game[4]==game[8]&&game[8]=='o')||(game[2]==game[4]&&game[4]==game[6]&&game[6]=='o')){
            printf ("The player O wins!\n");
            return 0;
        }
        n++;
    }
    printf ("No winner!\n");
    return 0;
}