//ergasia1  pls50  eirini zoumpounelli  thema 4
//�������1 ���50 ������ ������������ ���� 4

#include <stdio.h>

main()
{
    int i,a,epilogh,th1,k,d,e,j,l, metritis;
    int Bus[53];

    char pinakida;

    FILE *BUSnumber;
    FILE *layout;

    BUSnumber=fopen("bus.txt","r");
    printf("Ta stoixeia toy pinaka bus.txt einai\n");

    while ((pinakida=fgetc(BUSnumber))!=EOF){
        printf("%c",pinakida);
    }
    printf("\n");
    fclose(BUSnumber);

    BUSnumber=fopen("bus.txt","r");
    char a_p[7];
    int t=0;

    for(t=0;t<7;t++){
        a_p[t]=fgetc(BUSnumber);
/*�������� ��� �������� ��� ���������� ��� �� ������ bus.txt*/
    }

    fscanf(BUSnumber,"%d",&a);
    fclose(BUSnumber);

    if (((a-5)%4)==0&&a<=53&&a>=5){   
/*�������� �� � ������� ��� ������ ������ ��� ������������*/
        for (i=0;i<a;i++){
            Bus[i]=0;
        }
        do{
            printf("\nTi thelete na kanete?\nPathste:\n1 an thelete na mathete tis kenes theseis\n");
            printf("2 an thelete na kanete krathsh se sygkekrinemh thesi\n");
            printf("3 an thelete thn prwth kenh thesi sto parathiro\n");
            printf("4 an thelete na akyrwsete mia krathsh\n");
            printf("5 an thelete na elenksete an mia thesi einai krathmenh\n");
            printf("6 an thelete th lista krathmenwn thesewn kata arithmo thesis\n");
            printf("7 an thelete na emfanistei h pinakida tou lewforeiou me to diagramma toy lewforeiou\n");
            printf("8 an thelete na apothikeusete to arxeio\n");
            printf("0 an thelete na termatisete to programma\n\n");
            scanf("%d",&epilogh);

            if (epilogh==1){
                printf("\nOi kenes theseis briskontai stis theseis:\n");
                metritis=0; 	/*��������� ����� �� ������� ��� 				�� ��� ������� �� ����������� ����������*/
                for(i=0;i<a;i++){
                    if (Bus[i]==0){
                        metritis++;
                        printf("%d ,",i+1);
                    }
                }
                printf("\nO arithmos twn kenwn thesewn einai: %d\n\n", metritis);
            }

            else if (epilogh==2){
                printf("Poia thesi thelete na krathsete?\n");
                scanf("%d",&th1);

                if (th1>0&&th1<=a){
                    if(Bus[th1-1]==0){
                        Bus[th1-1]=1;
                        printf("kratithike h thesi: %d\n\n",th1);
                    }
                    else if (Bus[th1-1]==1){
                        printf("H thesi %d einai krathmenh\n\n",th1);
                    }
                }
                else{
                printf("H epilogh ths thesis pou dwsate den einai egkirh\n\n");
                }
            }

            else if (epilogh==3){
            k=1;
                while ((Bus[k-1]==1)&&k!=a){
 /*��� � ���� ����� �������� ��������� �� ������ ��� ����*/
                    if (k<(a-4)){
 /*�� � ���� ����� ��� ��� ��� ������ �-4 �� �������� �� ��� ���� ������ ������ ��� ���� 1 ���� +3 ���� +1*/
                        if ((k%4)==1){
                            k=k+3;
                        }
                        else if((k%4==0)){
                            k=k+1;
                        }
                    }
                    else  { 	
/*������ �������� ��� ��������� ����*/
                        k=a;
                    }
                }
                if (Bus[k-1]==1){
                    printf("den yparxei kamia kenh thesi sto parathuro\n");
                }
                else{
                    printf("kratithike h thesi sto parathiro: %d\n",k);
                    Bus[k-1]=1;
                }
            }

            else if (epilogh==4){
                printf("dwste ton arithmo ths thesis pou thelete na akyrwsete\n");
                scanf("%d",&d);
                if (d>0&&d<=a){
                    if (Bus[d-1]==1){
                        Bus[d-1]=0;
                        printf("H thesi %d akyrwthike\n",d);
                    }
                    else if (Bus[d-1]==0){
                        printf("den yparxei krathsh gia th thesh %d\n",d);
                    }
                }
                else {
                    printf("H epilogh ths thesis pou dwsate den einai egkirh\n\n");
                }
            }

            else if (epilogh==5){
                printf("dwste ton arithmo ths thesis gia thn opoia thelete na mathete an einai krathmenh\n");
                scanf("%d",&e);
                if (e>0&&e<=a){
                   if (Bus[e-1]==1){
                        printf("H thesi %d einai krathmenh\n\n",e);
                   }
                   else{
                        printf("H thesi %d einai kenh\n\n",e);
                   }
                }
                else{
                    printf("i thesi pou dwste den einai egkirh");
                }
            }

            else if (epilogh==6){
                j=0;
                printf("Oi krathmenes theseis einai oi: ");
                while (j<a){
                    if (Bus[j]==1){
                    printf("%d\t",j+1);
                    }
                j++;
                }
            }

/*��� ��� ������� 7.���� �������� ��� ������ ��� ��� ���� ������� ��� ������� ��������� ��� �� �������� ��� ������ �� ���������*/
            else if (epilogh==7){
                l=0;
                printf("%s\n",a_p);
                do {    
/*���� �� ���� ��� ������ ����������� ��� ��������. �� ����� ���� � ���� ��� �� � ���� ����� ��� �������� � ��� ��������*/
                    if (Bus[l]==0){
                        printf("_ ");
                    }
                    else if(Bus[l]==1){    
/*����� else if ��� ��� else ����� ����� ���� ��� �������������� ����� ������ ����� ��� ������ �������� ��� ������ ���� ���� ���� ����� ��� 0 ��� 1*/
                           printf("* ");
                    }
                    if (l%4==1&&l<a-4){
                        printf("  ");
                    }
                    else if (l%4==3&&l<a-3){
                        printf("\n");
                    }
                    l++;
                }
                while (l<a);
                printf("\n");
            }
/*���� ���� ����� ��� �������(7) ����� ���� ������ ��� ��������� ��� ��������� ��� ��������, ��� ����, ���� ���� ������ ��� 1� ����. ��� ������� �� ��� ����� ���� ��� �� ����� ��� ���� ����� ������ �� ��������� ��� �����. ������ �=��� ���� �� ����� �� �� ��� �������� ����� ��������� ���� ��� ������*/

            else if (epilogh==8){   /*����� ������ �� ��� 8 ���� �� ������� ��� layout.txt*/

                layout=fopen("layout.txt","w");

                int l1=0;
                char asteraki='*',paula='_';
                fprintf(layout,"%s\n",a_p);
                do {
                    if (Bus[l1]==0){
                        fprintf(layout,"%c ",paula);
                    }
                    else if(Bus[l1]==1){
                        fprintf(layout,"%c ",asteraki);
                    }
                    if (l1%4==1&&l1<a-4){
                        fprintf(layout,"  ");
                    }
                    else if (l1%4==3&&l1<a-3){
                        fprintf(layout,"\n");
                    }
                    l1++;
                }
                while (l1<a);
                printf("To arxeio apothikeuthke san layout.txt\n");
                fclose(layout);
            }
            else if (epilogh==0){
                printf("to programma sas termatizetai");
            }
            else {
                printf("Den dwsate swsth epilogh\n");
            }
        }
        while (epilogh!=0);
    }
    else {
        printf("den edwses swsto arithmo thesewn\n");
    }
    return 0;
}

/*������ �� ��������� ������ �����. ��� ����� ���� ��� �� ��� ����� ����� (����� ��� �� �������� ���� 7 �������). 
���� �� �������� �� ���� ������� ��������� ���������� ��� �� ����� �������������� ���� ������ ��� ��� ���� ������ ���� ������� ����. ���� ���� ���� ������������ � ������ ����.  */

