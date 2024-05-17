#include <stdio.h>
//https://www.w3resource.com/c-programming-exercises/basic-declarations-and-expressions/c-programming-basic-exercises-3.php
int main(void){
    for(int i =0;i<7;i++){
        if(i==0||i==3){
            int j = 6;
            if(i==3)
                j--;
            for(j;j>0;j--)
                printf("#");
            printf("\n");
            continue;
        }
        printf("#\n");
    }
    for(int i =0;i<9;i++){
        if(i==0||i==8){
            for(int j=0;j<11;j++){
                if(j<3){
                    printf(" ");
                }else if(j<9){
                    printf("#");
                }else{
                    printf(" ");
                }
            }
            printf("\n");
            continue;
        }else if(i==1||i==7){
            for(int j=0;j<11;j++){
                if(j<1){
                    printf(" ");
                }else if(j<3){
                    printf("#");
                }else if(j<9){
                    printf(" ");
                }else{
                    printf("#");
                }
            }
            printf("\n");
            continue;
        }else{
            printf("#\n");
        }
    }
    return 0;
}
