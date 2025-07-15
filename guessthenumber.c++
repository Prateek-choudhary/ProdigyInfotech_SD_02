#include<iostream>
#include<cstdlib>
#include<ctime>
int main(){
    srand(time(0));

    int secretNumber = rand() %100 + 1;
    int guess;
    int attempts = 0;
     
    std::cout << "==== Welcome to the Guessing Game! ====\n";
    std::cout << "==== I am thinking of anumber between 1 to 100! ====\n";

    do{
        std::cout<<"\nEnter your guess:\n";
        std::cin>>guess;
        attempts++;
        if(guess>secretNumber){
            std::cout<<"Too high! Try smaller Number.";
        }
        else if(guess<secretNumber){
            std::cout<<"Too low! Try a bigger number.";
        }
        else{
            std::  cout << "🎉 Congratulations! You guessed the number correctly in " 
                 << attempts << " attempt(s)!\n";
        }
    }while(guess!=secretNumber);

    std::cout<<"Thanks for Playing!";
}