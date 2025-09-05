#include<stdio.h>
int main(){
    float s1, s2, s3, s4, s5, s6, per;

    printf("Enter marks of 6 subjects:\n");
    scanf("%f %f %f %f %f %f", &s1, &s2, &s3, &s4, &s5, &s6);

    per = (s1 + s2 + s3 + s4 + s5 + s6) / 6.0;

    if(per >= 60){
        printf("Grade A\n");
    }
    else if(per >= 50){
        printf("Grade B\n");
    }
    else if(per >= 40){
        printf("Grade C\n");
    }
    else{
        printf("Failed\n");
    }

    return 0;
}
