#include <stdio.h>

int main() {
 FILE *f;
 int a = 5;
 int b;
 f = fopen("demo","w+");
 fprintf(f,"%d",a);
 fclose(f);
 f = fopen("demo","r+");
 fscanf(f,"%d",&b);
 fclose(f);
 printf("%d\n",b);
}

