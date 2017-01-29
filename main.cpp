#include "linkedlist.h"
#include <string>
#include <iostream>

void printMenu() //prints the options available to the user
{
  std::cout << ".........................................................." << '\n';
  std::cout<<"\n"<<std::endl;
	std::cout<<"Select an action:"<<std::endl;
	std::cout<<"1) insert"<<std::endl;
	std::cout<<"2) Delete"<<std::endl;
	std::cout<<"3) Reverse"<<std::endl;
	std::cout<<"4) Print"<<std::endl;
	std::cout<<"5) Exit"<<std::endl;


}

 int main(int argc, char const *argv[]) {
  /* add data */
  int input;

  linkedlist<int> list;
  list.linkedlist();
  do {
  printMenu();
  std::cin >> input;
    switch (input)
    {
      case 1:
        std::cout << "Choose a number to be added to the list:" << '\n';
        std::cin >> input;
        list.insert(input);
        input = 0;
        break;

      case 2:
        std::cout << "Choose a number to be deleted from the list:" << '\n';
        std::cin >> input;
        list.delete_node(input);
        input = 0;
        break;
      case 3:
        list.reverse();
        input = 0;
        break;
      case 4:
        list.print();
        break;
      case 5:
        std::cout << "exiting..." << '\n';

        break;

      default:
        std::cout << "invalid input" << '\n';
        input = 0;
        break;

    }
    if(input == 5)
    {break;}
  } while(true);
  return 0;
}
