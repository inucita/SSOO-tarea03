#include <iostream>    
#include <fstream>
#include <queue>            
#include <future>
#include <thread>         
#include <chrono>         
#include <csignal>
#include <unistd.h>
//prototipo
void signal_handler( int signal_num );

int main(){
    long int c = 0, a = 0, b = 1, ax =-1,i=1;
    int pHijo = fork();

	std::signal(SIGUSR1, signal_handler);
    std::signal(SIGUSR2, signal_handler);
	std::signal(SIGINT, signal_handler); 
    std::signal(SIGTSTP, signal_handler); 
    std::signal(SIGQUIT, signal_handler);
    
    while(i<=50) {
        if (pHijo == 0){ 
            ax+=2;
                std::this_thread::sleep_for(std::chrono::seconds(1));
                std::cout << "Valor Impar: " << ax << " - PID = " << getpid() << "\n";  
        }
        else{ 
            c = a + b;
            a = b;
            b = c;
            std::this_thread::sleep_for(std::chrono::seconds(1));
            std::cout << "Valor Fibonacci: " << c  << " - PPIDE = " << getpid() << std::endl;
        }
        i++;
    }
    exit(EXIT_SUCCESS);
}

void signal_handler( int signal_num ) { 
    switch (signal_num){
    case  SIGINT://señal de ctrl-c
        std::cout << "Detención no permitida" << std::endl;
        break;
    case SIGTSTP://señal de ctrl-z
         std::cout << "Detención no permitida" << std::endl;
        break;
    case SIGQUIT://señal de ctrl-\ 
         std::cout << "Detención no permitida" << std::endl;
        break;
    case SIGUSR1:
        exit(EXIT_SUCCESS);
        break;
    case SIGUSR2:
        exit(EXIT_SUCCESS);
        break;
    default:
        break;
    }
} 
