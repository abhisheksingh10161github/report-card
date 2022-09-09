//how to make report card in C

# include <stdio.h>
# include <unistd.h>

int main()

{
    puts("--------------------------\n\n");
    puts("Jawahar Navodaya Vidyalaya");
    usleep(2000000);
    puts("   Annual Report Card\n");

    char name[50], std[20], sec[5];
    printf("Name : ");
    scanf("%[^\n]%*c", name); 
    
    printf("Standard : ");
    scanf("%[^\n]%*c", std); 
    
    printf("Section : ");
    scanf("%[^\n]%*c", sec); 
    
    printf("\n\nMarks Secured out of 100");
    int maths, sci, ssc, hindi, eng;
    
    printf("\nMathematics : ");
    scanf("%d", &maths);
    
    printf("English : ");
    scanf("%d", &eng);
    
    printf("Hindi : ");
    scanf("%d", &hindi);
    
    printf("Science : ");
    scanf("%d", &sci);
    
    printf("Social Science : ");
    scanf("%d", &ssc);

    int totalMarks, grade;
    totalMarks = maths+sci+ssc+hindi+eng;

    puts("\n\ngenerating total marks...");
    usleep(2000000);

    printf("\n\nTotal marks secured : %d\n", totalMarks);

    if(totalMarks>=450 && totalMarks<=500)
    {
        printf("Grade A");
    }

    else if(totalMarks>=400 && totalMarks<=449)
    {
        printf("Grade B");
    }
    
    else if(totalMarks>=350 && totalMarks<=399)
    {
        printf("Grade C");
    }

    else if(totalMarks>=300 && totalMarks<=349)
    {
        printf("Grade D");
    }

    else if(totalMarks>=200 && totalMarks<=299)
    {
        printf("Grade E");
    }

    else if(totalMarks>=0 && totalMarks<200)
    {
        printf("Grade F");
    }
    
    puts("\n\n--------------------------");

    return 0;
}