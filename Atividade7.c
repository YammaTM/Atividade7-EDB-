#include <stdio.h>
#include <stdlib.h>
#define MAX 30

typedef struct
{
    float poo;
    float aoc;
    float matdisc;
}Disc;

typedef struct
{
    char nome[30];
    long matricula;
    Disc media;
} Aluno;

void mdm(Aluno *a[],int n)
{
    float mdm1=0,mdm2=0,mdm3=0;

    for(int i=0; i<n; i++)
    {
        mdm1 += a[i]->media.poo;
        mdm2 += a[i]->media.aoc;
        mdm3 += a[i]->media.matdisc;
    }

    mdm1 = mdm1/n;
    mdm2 = mdm2/n;
    mdm3 = mdm3/n;

    system("cls");
    printf("\t\t--MEDIA DAS MEDIAS--\t\t\n\n");
    printf("MDM POO: [%.2f]\n",mdm1);
    printf("MDM AOC: [%.2f]\n",mdm2);
    printf("MDM MATDISC: [%.2f]\n",mdm3);
}

int main()
{
    Aluno *a[MAX];
    for(int i=0; i<MAX; i++)
    {
        system("cls");
        a[i]=(Aluno*)malloc(sizeof(Aluno));
        //a[i]=(Disc*)malloc(sizeof(Disc));

        printf("Nome: ");
        scanf("%s",a[i]->nome);

        printf("\nMatricula: ");
        scanf("%d",&a[i]->matricula);

        printf("\nMedia POO: ");
        scanf("%f",&a[i]->media.poo);

        printf("\nMedia AOC: ");
        scanf("%f",&a[i]->media.aoc);

        printf("\nMedia MATDISC: ");
        scanf("%f",&a[i]->media.matdisc);
    }
    system("cls");
    for(int i=0; i<MAX; i++)
    {
        printf("Aluno [%d]\n\n",i+1);
        printf("Media POO: [%.2f]",a[i]->media.poo);
        printf("\nMedia AOC: [%.2f]",a[i]->media.aoc);
        printf("\nMedia MATDISC: [%.2f]\n\n",a[i]->media.matdisc);
    }
    printf("\n");
    system("pause");
    mdm(a,MAX);
    return 0;
}
