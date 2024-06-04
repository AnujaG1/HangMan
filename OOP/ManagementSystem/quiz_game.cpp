#include<iostream>
#include<cstdlib>
#include<string>
#include<iomanip>
#include<random>
#include "termcolor.hpp"

#ifdef _WIN32
  #include <windows.h>
#endif
using namespace std;

struct student
{
    char name[30];
    char roll[30];
    int score,random;
}; 

student s;

void cpp()
{   
    char choice;
    s.score = 0;
    int i = 0,arr[4];
    while(i < 3)
    { 
         back:
        s.random=rand()%3;
        for(int i =0;i<3;i++)
        {
            if(s.random == arr[i]){
                goto back;
            }
        }
        arr[i] = s.random;
        switch(s.random)
        {
            case 0:
            {
                 
                cout <<termcolor::magenta<< i+1 << " What is a correct syntax to output \"Hello World\" in C++?" << endl;
                cout << termcolor::white<<"A. System.out.println(\"Hello World\");" << endl;
                cout << termcolor::white<<"B. Console.WriteLine(\"Hello World\");" << endl;
                cout << termcolor::white<<"C. print(\"Hello World\");" << endl;
                cout << termcolor::white<<"D. cout << \"Hello World\";" << endl;
                cin >> choice;
                if(choice == 'D' || choice == 'd')
                {
                    cout<<termcolor::green << "Correct Answer!" << endl;
                    s.score++;
                }
                else{
                    cout << termcolor::red<<"Incorrect Answer!" << endl;
                }
                cout << endl;
                break;
            }

            case 1: 
      {
                cout << termcolor::magenta<<i+1 << " Which of the following is called insertion/put to operator?" << endl;
                cout <<termcolor::white<< "a) < " << endl;
                cout << termcolor::white<<"b) > " << endl;
                cout << termcolor::white<<"c) << " << endl;
                cout <<termcolor::white<< "d) >> " << endl;
                cin >> choice;
                if (choice == 'c' || choice == 'C')
                {
                    cout << "Correct Answer!" << endl;
                    s.score++;
                }
                else{
                    cout << "Incorrect Answer!" << endl;
                }
                    
                cout << endl;
                break;
            }
 
            case 2:
            { 
   
                cout <<termcolor::magenta<< i+1 << " Which of the following is called extraction/get from operator?" << endl;
                cout <<termcolor::white<< "a) < " << endl;
                cout << termcolor::white<<"b) > " << endl;
                cout << termcolor::white<<"c) << " << endl;
                cout << termcolor::white<<"d) >> " << endl;
                cin >> choice;
                if (choice == 'd' || choice == 'D')
                {
                    cout <<termcolor::green<< "Correct Answer!" << endl;
                    s.score++;
                }
                else{
                    cout <<termcolor::red<< "Incorrect Answer!" << endl;
                }
                cout << endl;
                break;
           }

            default:
                break;
        }
    
        i++;
    }
}

void java()
{
    char choice;
    s.score = 0;
    int i = 0,arr[4];
    while(i < 3)
    {  back:
        s.random=rand()%3;
        for(int i =0;i<3;i++)
        {
            if(s.random == arr[i]){
                goto back;
            }
        }
        arr[i] = s.random;
        switch(s.random)
        {
            case 0:
            {
               cout << termcolor::magenta<<i+1 << " What is a correct syntax to output \"Hello World\" in Java?" << endl;
                cout <<termcolor::white<< "A. System.out.println(\"Hello World\");" << endl;
                cout <<termcolor::white<< "B. Console.WriteLine(\"Hello World\");" << endl;
                cout << termcolor::white<<"C. print(\"Hello World\");" << endl;
                cout << termcolor::white<<"D. cout << \"Hello World\";" << endl;
                cin >> choice;
                if(choice == 'A' || choice == 'a')
                {
                    cout << termcolor::green<<"Correct Answer!" << endl;
                    s.score++;
                }
                else{
                    cout << termcolor::red<<"Incorrect Answer!" << endl;
                }
                cout << endl;
                break;
            }

            case 1: 
            {
                cout << termcolor::magenta<<i+1 << " Which of the following is the entry point of a Java program?" << endl;
                cout <<termcolor::white<< "a) main method" << endl;
                cout << termcolor::white<<"b) start method" << endl;
                cout << termcolor::white<<"c) static method" << endl;
                cout <<termcolor::white<< "d) public method" << endl;
                cin >> choice;
                if (choice == 'a' || choice == 'A')
                {
                    cout << termcolor::green<<"Correct Answer!" << endl;
                    s.score++;
                }
                else{
                    cout << termcolor::red<<"Incorrect Answer!" << endl;
                }
                    
                cout << endl;
                break;
            }
 
            case 2:
            {
                 cout << termcolor::magenta<<i+1 << " Which keyword is used to inherit a class in Java?" << endl;
                cout << termcolor::white<<"a) implements" << endl;
                cout <<termcolor::white<< "b) imports" << endl;
                cout <<termcolor::white<< "c) extends" << endl;
                cout << termcolor::white<<"d) inherits" << endl;
                cin >> choice;
                if (choice == 'c' || choice == 'C')
                {
                    cout <<termcolor::green<< "Correct Answer!" << endl;
                    s.score++;
                }
                else{
                    cout << termcolor::red<<"Incorrect Answer!" << endl;
                }
                cout << endl;
                break;
           }

            default:
                break;
        }
    
        i++;
    }
}

void html()
{
    char choice;
    s.score = 0;
    int i = 0,arr[4];
    while(i < 3)
    {  back:
        s.random=rand()%3;
        for(int i =0;i<3;i++)
        {
            if(s.random == arr[i]){
                goto back;
            }
        }
        arr[i] = s.random;
        switch(s.random)
        {
            case 0:
            {
              cout << termcolor::magenta<<i+1 << " What does HTML stand for?" << endl;
                cout <<termcolor::white<< "A. Hyper Text Markup Language" << endl;
                cout << termcolor::white<<"B. High Text Markup Language" << endl;
                cout << termcolor::white<<"C. Hyper Tabular Markup Language" << endl;
                cout <<termcolor::white<< "D. None of these" << endl;
                cin >> choice;
                if(choice == 'A' || choice == 'a')
                {
                    cout <<termcolor::green<< "Correct Answer!" << endl;
                    s.score++;
                }
                else{
                    cout <<termcolor::red<< "Incorrect Answer!" << endl;
                }
                cout << endl;
                break;  
            }
             #ifdef _WIN32
        system("CLS");
    #else
        system("clear");
    #endif 
            case 1: 
            {
                cout << termcolor::magenta<<i+1 << " Who is making the Web standards?" << endl;
                cout <<termcolor::white<< "a) Mozilla" << endl;
                cout << termcolor::white<<"b) Microsoft" << endl;
                cout << termcolor::white<<"c) The World Wide Web Consortium" << endl;
                cout << termcolor::white<<"d) Google" << endl;
                cin >> choice;
                if (choice == 'c' || choice == 'C')
                {
                    cout <<termcolor::green<< "Correct Answer!" << endl;
                    s.score++;
                }
                else{
                    cout <<termcolor::red<<"Incorrect Answer!" << endl;
                }
                    
                cout << endl;
                break;
            }
          
            case 2:
            {
                
                cout << termcolor::magenta<<i+1 << " Choose the correct HTML element for the largest heading:" << endl;
                cout << termcolor::white<<"a) <heading>" << endl;
                cout << termcolor::white<<"b) <h1>" << endl;
                cout << termcolor::white<<"c) <h6>" << endl;
                cout << termcolor::white<<"d) <head>" << endl;
                cin >> choice;
                if (choice == 'b' || choice == 'B')
                {
                    cout << termcolor::green<<"Correct Answer!" << endl;
                    s.score++;
                }
                else{
                    cout << termcolor::red<<"Incorrect Answer!" << endl;
                }
                cout << endl;
                break;
           
            }

            default:
                break;
        }
    
    i++;
    }
    
}
void result()
{
        cout << termcolor::green<<"Your score: " << s.score << "/3" << endl;
         if (s.score >= 2)
    {
        cout <<termcolor::green<< "You passed the quiz!" << endl;
    }
    else
    {
        cout <<termcolor::red<< "You failed the quiz." << endl;
    }

}


int main()
{
    int choice;
    char press;
    cout <<termcolor::blue<< setw(30) << "****************" << endl;
    cout << termcolor::yellow<<setw(30) << "QUIZ SYSTEM" << endl;
    cout <<termcolor::blue<< setw(30) << "****************" << endl;
    cout << "Enter Name: ";
    cin >> s.name;
    cout << "Roll No: ";
    cin >> s.roll;
     #ifdef _WIN32
        system("CLS");
    #else
        system("clear");
    #endif 
    do 
    {
        #ifdef _WIN32
    #include <windows.h>
#endif
        cout << termcolor::bright_magenta<<"Marks less than 50% will be failed." << endl;
        cout << "Select option which course quiz you want to attend" << endl;
        cout << "1) C++" << endl;
        cout << "2) Java" << endl;
        cout << "3) HTML" << endl;
        cin >> choice;
        switch(choice)
        {
            case 1:
            {
                 #ifdef _WIN32
                    system("CLS");
                #else
                    system("clear");
                #endif 
                cout << "C++ Quiz" << endl;
                cpp();
                 #ifdef _WIN32
        system("CLS");
    #else
        system("clear");
    #endif 
                result();
                break;
            }

            case 2:
            {
                 #ifdef _WIN32
        system("CLS");
    #else
        system("clear");
    #endif 
                cout << "Java Quiz" << endl;
                java();
                 #ifdef _WIN32
        system("CLS");
    #else
        system("clear");
    #endif 
                result();
                break;
            }

            case 3:
            {
                 #ifdef _WIN32
        system("CLS");
    #else
        system("clear");
    #endif 
                cout << "HTML Quiz" << endl;
                html();
                 #ifdef _WIN32
        system("CLS");
    #else
        system("clear");
    #endif 
                result();
                break;
            }
            default:
            {
                cout << "Invalid Input" << endl;
                break;
            }
        }
        
        cout << "Press y to continue or any key to terminate" << endl;
        cin >> press;

    } while(press == 'y' || press == 'Y');

    return 0;
}