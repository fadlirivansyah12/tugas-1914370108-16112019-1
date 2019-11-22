#include<stdio.h>
int main()
{
    int x,y,z;y=1; z=1;
    printf("silakan input angka faktorialnya ya!! disebelah sini ==>");
    printf(" (n!) =");    //sebagai keterangan saja
    scanf("%i",& x);
    do{ z=(y*z);
    printf("%i x ",y);y++; }
    while (y<x); z=y*z;
    printf("%i ",y );
    printf("% = %i \n",z );
    {
    printf("  'maaf pak tampilannya tidak sesuai dengan bapak yang inginkan..' ");
    return 0;
}
}
