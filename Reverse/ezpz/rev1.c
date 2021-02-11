#include <stdio.h>

void ignore_me_init_buffering() {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stdin, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
}

int main(int argc, char* argv[]){
    ignore_me_init_buffering();
    signed int pin;
    
    printf("Masukkan PIN mu : ");
    scanf("%d",&pin);
    
    if(pin == 65535){
          system("echo \"Hi, here is your flag\"; cat flag.txt");
    }
    else{
        printf("%s","PIN salah\n");
    }

    return 0;
}
