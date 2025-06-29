#include  <stdio.h>
int  main(void){
    int  height,  length,  width, volume, weight;
    height  =   15;
    length  =   13;
    width   =   12;
    volume  =   height  *   length  *   width;
    weight  =   (volume + 165)/166;

    printf("The volume  is  %d\n", volume);
    printf("The dimensions are %dx%dx%dx\n", height, length, width);
    return 0;
}