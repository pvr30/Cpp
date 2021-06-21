
/// File Write
#include<stdio.h>
#include<conio.h>
main()
{
    FILE *ptr;
    char n[10];
    ptr=fopen("PVR.txt","w");
      printf("Enter Name\n");
      scanf("%s",n);
      fprintf(ptr,"Name=%s",n);
      fclose(ptr);
getch();
}
