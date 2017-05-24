//ergasia1  pls50  eirini zoumpounelli  thema 1
//ΕΡΓΑΣΙΑ! ΠΛΣ50 ΕΙΡΗΝΗ ΖΟΥΜΠΟΥΝΕΛΛΗ ΘΕΜΑ 1

#include <stdio.h>

int main()
{
    char symbol;
    float a,b,lisi;
    printf("dwse arithmo praxi arithmo me ena keno anamesa\n"); 
/*το πρόγραμμα κάνει το ίδιο ακόμη και αν δε βάλω κενο ανάμεσα*/
    scanf("%f %c %f", &a,&k,&b);

    if (symbol=='+'){
        lisi=a+b;
        printf("h lisi einai: %f",lisi);
    }
    else if (symbol=='-'){
        lisi=a-b;
        printf("h lisi einai: %f",lisi);
    }
    else if (symbol=='*'){
        lisi=a*b;
        printf("h lisi einai: %f",lisi);
    }
    else if (symbol=='/'&& b!=0){
        lisi=a/b;
        printf("h lisi einai: %f",lisi);
    }
    else{
        printf("lathos");
    }
return 0;
}

/*το πρόγραμμα τερματίζει αφού γίνει η πράξη*/

/*#include<stdio.h>
// Δεύτερη λύση για το ίδο πρόγραμμα με τη χρήση της switch
int main(){
	float a,b,result=0;
	char symbol;
	printf("dwse arithmo praxi arithmo\n");
	scanf("%f %c %f",&a,&symbol,&b);
	switch(symbol){
		case '+' : result= a+b;
		printf("h lisi einai: %f\n", result);
		break;
		case '-' : result= a-b;
		printf("h lisi einai: %f\n", result);
		break;
		case '*' : result=a*b;
		printf("h lisi einai: %f\n", result);
		break;
		case '/' : if(b!=0) {
		result= a/b;
		printf("h lisi einai: %f\n", result);
		}
		else printf("lathos");
		break;
	}

}
*/

/*Το πρόγραμμα έτρεχε χωρίς πρόβλημα. Έχω δυο τρόπους για να λυθεί αυτή η άσκηση*/
