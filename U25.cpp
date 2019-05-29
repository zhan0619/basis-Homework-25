#include <stdio.h>

#include <stdlib.h>

int main(void)

{


	printf("輸出整個陣列的值\n");

	

	printf("結果：\n");

    int *u[4];

    int t[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};

    int l; 

    u[0]=t[0];

    u[1]=t[1];

    u[2]=t[2];

    u[3]=t[3];



    for (l=0; l<3; l++)

       printf("%d   ", *(u[0]+l));

       printf("\n");

	   

    for (l=0; l<3; l++)

       printf("%d   ", *(u[1]+l));

       printf("\n");

       

    for (l=0; l<3; l++)

       printf("%d   ", *(u[2]+l));

       printf("\n");   

    

	for (l=0; l<3; l++)

       printf("%d   ", *(u[3]+ l));

       printf("\n");

    

    system("pause"); 

    return 0; 

}
