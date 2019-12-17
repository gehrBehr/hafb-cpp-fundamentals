#include <iostream>
#include <string> //for string objects.
/**
 * @brief Shows how to define and use a string object
 *
 * We will define string variables and then see what operators and
 * functions work with these variables.
 *
 * @return int 0 means function exited with success
 */
int main() {
  // create a variable of type string
  std::string hisName = "John-Jacob Jinglheimerschmit";
  std::string myName = "Adam G.";
  // print it out
  // std::cout << hisName << std::endl;
  // // get a string from a user
  // std::cout << "Enter your full name" << std::endl;
  // getline(std::cin, myName);
  // myName = hisName;
  // std::cout << "Hey " << hisName << "!!! nanananana" << std::endl;

  // add two strings together
  std::string title = "Dr.";
  std::string formal;
  formal = title + " " + myName;
   std::cout << "Hi " << formal << std::endl;

  // // how long is the string
  //  std::cout << "The size of name is  " << myName.size() << std::endl;
  //  std::cout << "The size of title is  " << title.size() << std::endl;
  //  std::cout << "The length of name is  " << myName.length() << std::endl;
  //  std::cout << "The length of title is  " << title.length() << std::endl;



  // // use [] to get an individual character
  //  std::cout << "The first character of name is  " << myName[0] << std::endl;
  //  std::cout << "The third character of name is  " << myName[2] << std::endl;
   
  // // get name and commute information from a user
  // int minutes, miles;
  // // get commute information and name from a user
  // std::cout << "Enter your full name" << std::endl;
  // getline(std::cin, myName);

  // std::cout << "How long is your commute in minutes?" << std::endl;
  // std::cin >> minutes;

  // std::cout << "How long is your commute in miles?" << std::endl;
  // std::cin >> miles;
  
  // std::cout << myName << " has a " << minutes 
  // << " minute, "<< miles <<" mile comute." << std::endl;

  std::string story = "Lorem ipsum dolor sit amet,"
   "consectetur adipiscing elit, sed do eiusmod tempor"
    "incididunt ut labore et dolore magna aliqua."
     "Ut enim ad minim veniam, quis nostrud exercitation"
      "ullamco laboris nisi ut waldo aliquip ex ea commodo"
       "consequat. Duis aute irure dolor in reprehenderit"
        "in voluptate velit esse cillum dolore eu fugiat"
         "nulla pariatur. Excepteur sint occaecat cupidatat"
          "non proident, sunt in culpa qui officia deserunt"
           "mollit anim id est laborum.";

  // the string function find
   std::cout << "Waldo is at location " << story.find("waldo") 
   <<" in the story string." << std::endl;


  // the string function replace
  std::cout << story << std::endl << std::endl;
  std::string blank = "-----";
  std::string waldo = "waldo";

  story.replace(story.find(waldo), blank.length(), blank );
  std::cout << story << std::endl;

  return 0;
}

/*
      "The dragons are flying over the mountains. They are hunting for a "
      "place to settle for the waldo night. What they see is endless horizon."
*/
