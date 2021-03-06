#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[])
{

    float temp;

    if (argc==1) printf("Error, print temperature\n"); /* Check print */

    if (argc==2)

    {
        temp = atof(argv[1]);
        if (temp == 0){
                printf("Error, print like this:\n100 c or 100\n"); /* If characters were entered instead of numbers */
        }
        else{
        if (temp<-273.15)
            printf("C: Error, less than absolute zero\n\n");
            else
            printf("%s\n%.2f%s\n%.2f%s\n\n", "C:", temp + 273.15, " K", temp * 1.8 + 32, " F");
        if (temp<0)
            printf("K: Error, less than absolute zero\n\n");
            else
        printf("%s\n%.2f%s\n%.2f%s\n\n", "K:", temp - 273.15, " C", (temp - 273.15) * 1.8 + 32, " F");
        if (temp<-459.67)
            printf("F: Error, less than absolute zero\n\n");
            else
        printf("%s\n%.2f%s\n%.2f%s\n", "F:", (temp - 32)*0.55555555, " C", 0.555555555*(temp - 32) + 273.15, " K");
        }
    }


    if (argc==3)
   {
        temp = atof(argv[1]);
        if (temp == 0){
                printf("Error, print like this:\n100 c or 100\n"); /* If characters were entered instead of numbers */
        }
        else {
            if (strcmp(argv[2], "C")==0 || strcmp(argv[2], "c")==0 || strcmp(argv[2], "K")==0 || strcmp(argv[2], "k")==0 || strcmp(argv[2], "F")==0 || strcmp(argv[2], "f")==0){ /* Proverka na vvod pravilnoi shkali*/
        if (strcmp(argv[2], "C")==0 || strcmp(argv[2], "c")==0)
        {
            if (temp<-273.15)
                printf("Error, less than absolute zero");
            else
                printf("%.2f%s\n%.2f%s\n", temp + 273.15, " K", temp * 1.8 + 32, " F");
        }
        if (strcmp(argv[2], "K")==0 || strcmp(argv[2], "k")==0)
        {
            if (temp<0)
                printf("Error, less than absolute zero");
            else
                printf("%.2f%s\n%.2f%s\n", temp - 273.15, " C", (temp - 273.15) * 1.8 + 32, " F");
        }
        if (strcmp(argv[2], "F")==0 || strcmp(argv[2], "f")==0)
        {
        if (temp<-459.67)
                printf("Error, less than absolute zero");
            else
                printf("%.2f%s\n%.2f%s\n", (temp - 32)*0.5555555, " C", 0.55555555*(temp - 32) + 273.15, " K");
        }
        }
            else printf("Error, unknown scale\n"); /* If scale is wrong */
        }
    }
    if (argc>3) printf("Error, print like this:\n100 c\n"); /* Check print */


    return 0;
    }
