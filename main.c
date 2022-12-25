#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    char a[100];
    int i;
    int m;
    printf("Scegli la modalità\n");
    printf("1 >> si/no\n");
    printf("2 >> percentuale\n");
    scanf("%d",&m);

    if(m == 1){
        while(1){
        printf("Qual'è la tua domanda?\n");
        scanf("%s",&a);
        getchar();
        char b[][10] = {"si","no",};
        srand(time(0));
        i=rand()%2;
        printf("%s\n",b[i]);
        printf("\npremi un tasto per chiedermi qualcos'altro\n");
        getchar();
        system("clear");
    }

    }
    else if(m == 2){
        while(1){
        printf("Qual'è la tua domanda?\n");
        scanf("%s",&a);
        getchar();
        srand(time(0));
        i=rand()%100;
        printf("%d percento di probabilità\n",i);
        printf("\npremi un tasto per chiedermi qualcos'altro\n");
        getchar();
        system("clear");
    }

    }
    else{


    }


    return 0;
}
