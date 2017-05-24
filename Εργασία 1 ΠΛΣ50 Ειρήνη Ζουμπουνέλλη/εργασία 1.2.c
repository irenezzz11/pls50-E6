//ergasia1  pls50  eirini zoumpounelli  thema 2
//ΕΡΓΑΣΙΑ1 ΠΛΣ50 ΕΙΡΗΝΗ ΖΟΥΜΠΟΥΝΕΛΛΗ ΘΕΜΑ 2

#include <stdio.h>
#include <math.h>

const float pi=3.14159265;  //δήλωσα το π σταθερά
/*Εδώ είναι οι συναρτήσεις υπολογισμού της περιμέτρου για κάθε σχήμα ξεχωριστά έξω από τη main*/
float p_tetragwnou(float x){
    x=4*x;
    return x;
}
float p_parallhlogrammou(float x,float y){
    x=2*x+2*y;
    return x;
}
float p_othogonioutrigwnou(float x,float y){
    x=x+y+sqrt(x*x+y*y);
    return x;
}
float p_kykloy(float x){
    x=2*pi*x;
    return x;
}

int main()

{
float e, a, b, perimetros;

do
{
    printf("Epelexe to sxhma tou opoiou thes na ypologiseis thn perimetro:\n gia tetragwno patise 1 \n gia parallhlogrammo 2 \n gia orthogvnio trigvno 3 \n gia kyklo 4 \n gia exodo 0 \n");
    scanf("%f", &e);
        if (e==1){
            printf("\n dwse thn pleyra toy tetragvnou \n");
            scanf("%f", &a);
                if (a<=0){
                    printf("\n edwses lathos\n\n");
/*ελέγχει αν ο χρήστησ εδωσε αρνητικό αριθμό ή 0 και αν ναι ζητάει σχήμα από την αρχή*/
                }
                else {
                    perimetros=p_tetragwnou(a);
                    printf("\n h perimetros toy tetragwnou einai:  %f\n\n",perimetros);
                }
        }
        else if (e==2){
            printf("\n dwse tis pleyres toy parallhlogrammoy \n");
            scanf("%f%f",&a,&b);
                if (a<=0|| b<=0 ){
                    printf("\n edwses lathos\n\n");
/*ελέγχει αν ο χρήστησ εδωσε αρνητικό αριθμό ή 0 και αν ναι ζητάει σχήμα από την αρχή*/
                }
                else{
                    perimetros=p_parallhlogrammou(a,b);
                    printf("\n h perimetros toy parallhlogrammoy einai:    %f\n\n",perimetros);
                }
        }
        else if (e==3){
            printf("\n dwse tis kathetes pleyres toy orthogwniou trigwnou \n");
            scanf("%f%f",&a,&b);
                if (a<=0||b<=0){
                    printf("\n edwses lathos\n\n");
/*ελέγχει αν ο χρήστησ εδωσε αρνητικό αριθμό ή 0 και αν ναι ζητάει σχήμα από την αρχή*/
                }
                else{
                    perimetros=p_othogonioutrigwnou(a,b);
                    printf("\n h perimetros toy orthogwniou trigwnou einai:    %f\n\n",perimetros);
                }
        }
        else if (e==4){
            printf("\n dwse thn aktina tou kuklou \n");
            scanf("%f",&a);
                if (a<=0){
                    printf("\n edwses lathos\n\n");
/*ελέγχει αν ο χρήστησ εδωσε αρνητικό αριθμό ή 0 και αν ναι ζητάει σχήμα από την αρχή*/
                }
                else {
                    perimetros=p_kykloy(a);
                    printf("\n h perimetros toy kuklou einai:  %f\n\n",perimetros);
                }
        }
        else if (e==0)
            printf("epileksate exodo apo to programma\n");
        else {
            printf("h epilogh poy dwsate den einai swsth\n");
        }
    }
    while (e!=0);
return 0;
}

/*Το πρόγραμμα έτρεχε χωρίς πρόβλημα. Δεν κατάλαβα την υπόδειξη. Εννοούσατε οτι δεν πρέπει να μπει κενό σε αυτήν την άσκηση εδω;*/
