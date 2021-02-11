#include <stdio.h>

int main(){
    signed int pin;

    printf("%s","Masukkan PIN: ");
    scanf("%d",&pin);
    
    if(pin == 65535){
          system("echo \"Hi, here is your flag\"; cat flag.txt");
    }
    else{
        printf("%s","PIN salah\n");
    }

    return 0;
}
