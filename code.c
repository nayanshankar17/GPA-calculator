#include<stdio.h>

int main(){
    int n;
    printf("Enter the number of courses: ");
    scanf("%d", &n);
    getchar();

    float value = 0;
    float credits = 0;

    printf("Grade range (S, A, B, C, D, E, F) \n");
    for(int i=0; i<n; i++){
        char grade;
        int v;
        float c;
        printf("Enter the grade and credits in the format (Grade Credits) for course %d: ", i+1);
        scanf("%c %f", &grade, &c);
        getchar();

        switch(grade){
            case 'S':
                v = 10;
                break;
            case 'A':
                v = 9;
                break;
            case 'B':
                v = 8;
                break;
            case 'C':
                v = 7;
                break;
            case 'D':
                v = 6;
                break;
            case 'E':
                v = 5;
                break;
            case 'F':
                v = 0;
                break;
            default:
                printf("Enter a valid grade!!");
                return 1;
        }

        value += (v*c);
        credits += c;
    }

    float gpa = (float)value/credits;
    printf("GPA: %.2f", gpa);

    return 0;
}
