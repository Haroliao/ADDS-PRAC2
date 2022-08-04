#include<iostream>
#include<string>
#include "Human.h"

Human::Human(){

}
char Human::makeMove(){
   std::cout<<"Enter move:";
   std::cin>>choice;
   return choice;
}