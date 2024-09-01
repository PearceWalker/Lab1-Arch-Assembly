#include <stdio.h>
#include <math.h>
#include <string.h>

int main(int argc, char *argv[]){

    double side1, side2, side3; 

    printf("Enter side 1: ");

    scanf("%lf", &side1);

    

    printf("\nEnter side 2: ");

    scanf("%lf", &side2);

   

    printf("\nEnter side 3: ");

    scanf("%lf", &side3);


    double semiperimeter = (side1 + side2 + side3)/2.0;

    double area = sqrt((semiperimeter*(semiperimeter - side1)*(semiperimeter - side2)*(semiperimeter - side3)));

   

    if( side1 + side2 > side3){
        if(side1 + side3 > side2){
            if(side3 + side2 > side1){

                

                if(side1 == side2 && side2 == side3)
                {
                    printf("Equilateral\n");
                }

                else if(side1 == side2 || side2 == side3 || side1 == side3)
                {
                    printf("Isosceles\n");
                }

                else 
                {
                    printf("Scalene\n");
                }   

                printf("AREA: %0.2lf", area);

                
            }
             else{
                    printf("Invalid Triangle");
                 }

        }
         else{
            printf("Invalid Triangle");
             }

    }
    else{
        printf("Invalid Triangle");
    }

    return 0;
}



