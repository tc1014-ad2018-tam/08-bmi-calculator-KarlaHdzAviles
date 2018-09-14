/*this program computes a person's Body Mass Index (BMI).
 *
 * autor: Karla Alexandra Hernandez Aviles
 * fecha: 13/09/2018
 * correo: A01411843@itesm.mx
 * */


#include <stdio.h>
#include <math.h>

int BMICalcMetric (double kg , double m) {//this function calculates IBM in metrical system
        double metric = (kg / (m * m));
        return metric;

}
int BMIcalcimperial(double pound, double ft){ //This Function calculates the IBM in imperial System
    double result,kg,m;
    kg=(pound * 0.453592);
    m=(ft * 0.3048);
    result=kg/(m*m);
    return  result;
    }

double Categories(double BMI){ //This Function identify what is your IBM category
    if (BMI<18.50){
        printf("You are under the normal Height");
    }
    else if(BMI>= 18.50 && BMI<25.00){
        printf("Your´e in the normal Height");
    }
    else if (BMI>=25.00 && BMI<30.00){
        printf("Your´e overweight");
    }
    else if (BMI>=30.00 && BMI<35.00){
        printf("you have low obesity");
    }
    else if (BMI>=35.00 && BMI<40){
        printf("You have obesity");
    }
    else{
        printf("You have Extreme obesity");
    }
}
int main() {
    unsigned int option=0; //Declaration of variables
    double w=0.0, h=0.0, BMI;

    printf("This program will help you to get your BMI. What system would you like to use? "
           "\n 1.Metric units \n 2.Imperial units\n");
    scanf("%i",&option);
    switch(option){
        case 1: //The program does this if the user enter a 1
            do {
                printf("\nGive me your height in Meters");
                scanf("%lf", &h);
            }while(h<=0);
            printf("\nGive me your weight in Kilograms");
            scanf("%lf",&w); //Weight request
            BMI=BMICalcMetric(w,h);
            printf("\nYour IBM is: %lf \n",BMI);
            Categories(BMI);
            break;

        case 2: //The program does this if the user enter a 2
            do {
                printf("\nGive me your height in Fts");
                scanf("%lf", &h);
            }while(h<=0);
            printf("\nGive me your weight in Pounds");
            scanf("%lf",&w);

            BMI=BMIcalcimperial(w,h);
            printf("\nYour BMI is: %lf \n",BMI);
            Categories(BMI);
            break;

        default: //if the user enter another number
            printf("Enter a valid Number");
            break;

    }

    return 0;
}

