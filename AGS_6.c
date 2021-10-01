#include <stdio.h>
#include <stdlib.h>

typedef struct student {

    char name[10] ;
    int age;
    int degree;
    int section;
}stud;
 stud ref[5];

void printRec(int index){
    printf("Name    : %s\n",ref[index].name);
    printf("Age     : %d\n",ref[index].age);
    printf("Degree  : %d\n",ref[index].degree);
    printf("Section : %d\n",ref[index].section);
};



int main(){


printf("Student 1\n");
    printf("\n");
     printf("Name:\n");
     scanf("%s",&ref[0].name);

         printf("Age:\n");
         scanf("%d",&ref[0].age);

             printf("Degree:\n");
             scanf("%d",&ref[0].degree);

                 printf("Section:\n");
                 scanf("%d",&ref[0].section);

     printf("\n");
     printf("Student 2\n");
        printf("\n");
             printf("Name:\n");
             scanf("%s",&ref[1].name);

                 printf("Age:\n");
                 scanf("%d",&ref[1].age);

                     printf("Degree:\n");
                     scanf("%d",&ref[1].degree);

                         printf("Section:\n");
                         scanf("%d",&ref[1].section);
        printf("\n");
             printf("Student 3\n");
        printf("\n");
             printf("Name:\n");
             scanf("%s",&ref[2].name);

                 printf("Age:\n");
                 scanf("%d",&ref[2].age);

                     printf("Degree:\n");
                     scanf("%d",&ref[2].degree);

                         printf("Section: \n");
                         scanf("%d",&ref[2].section);
        
             printf("/nStudent 4\n\n");
                 printf("Name:\n");
                 scanf("%s",&ref[3].name);

                     printf("Age:\n");
                     scanf("%d",&ref[3].age);

                         printf("Degree:\n");
                         scanf("%d",&ref[3].degree);

                             printf("Section: \n");
                             scanf("%d",&ref[3].section);

        
 int index;

 printf("Enter The Student ID\n");
 scanf("%d\n",&index);
 printRec(index);


}
