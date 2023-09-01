#include <stdio.h>
#include <math.h> 

int main()
{
    int a, b, c;
    int root1, root2, imaginary;
    int discriminant;

    printf("Enter values of a, b, c of quadratic equation (aX^2 + bX + c): ");
    scanf("%d%d%d", &a, &b, &c);
    discriminant = (b * b) - (4 * a * c);


    
    switch(discriminant > 0)
    {
        case 1:
            
            root1 = (-b + sqrt(discriminant)) / (2 * a);
            root2 = (-b - sqrt(discriminant)) / (2 * a);

            printf("Two distinct and real roots exists: %.2d and %.2d", 
                    root1, root2);
            break;

        case 0:
            
            switch(discriminant < 0)
            {
                case 1:
                    
                    root1 = root2 = -b / (2 * a);
                    imaginary = sqrt(-discriminant) / (2 * a);

                    printf("Two distinct complex roots exists: %.2d + i%.2d and %.2d - i%.2d", 
                            root1, imaginary, root2, imaginary);
                    break;

                case 0:
                    
                    root1 = root2 = -b / (2 * a);

                    printf("Two equal and real roots exists: %.2f and %.2f", root1, root2);

                    break;
            }
    }

    return 0;
}
