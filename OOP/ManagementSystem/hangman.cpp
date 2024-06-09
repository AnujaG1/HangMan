#include<iostream>
#include<cstdlib>
#include<string>
#include<fstream>
#include<ctime>
using namespace std;

bool win = false;

//define functions
string RandomWord(int);
int RandomNumber(int);
void Design(int);
void PrintWord(string word, string guessedLetters) ;

int main()
{
    int choice;
    int live = 7;
    string letter;
    string word;
    string guessedLetters = "";
   
    cout<<"Hangman Game"<<endl;
    cout<<" Choose your level: \n 1) Easy\n 2) Medium \n 3)Hard\n-->";
    cin>>choice;
    
    //Validate input
    while (choice < 1 || choice >3)
    {
      cout<<"You have entered a wrong number, renter your level...\n";
      cout<<" Choose your level: \n 1) Easy\n 2) Medium \n 3)Hard\n-->";
      cin >> choice;
    }
    word = RandomWord(choice);
        if (word.empty()) {
        cout << "Failed to read the word list or the word list is empty." << endl;
        return 1;
    }

   
    bool help = false;
    while(live >0)
    {
        win = true;
        Design(live);
        PrintWord(word, guessedLetters);
        if(help)
        {
            win = false;
            help = false;
        }
        if(win)
             break;
        cout<<"\n\n If you want to know the first letter write 'Help' [Your lives will decrease!]"<<endl;
        cout<<"\n\nLetters guesses: "<<guessedLetters <<endl;
        cout<<"\n\nEter a letter: ";
        cin>> letter;
       
         // Check if the input is valid
        if (letter.length() == 1) {
            guessedLetters += letter[0];
            if (word.find(letter) != string::npos) {
                continue;
            } else {
                live--;
            }
        } else if (letter == "Help" || letter == "help") {
            help = true;
            live--;
            cout << "-->\"" << word[0] << "\"<--" << endl;
            guessedLetters += word[0];
        } else {
            cout << "Invalid input. Please enter a single letter." << endl;
        }
    }
    if(live == 0) //if we have finished our lives
    {
       Design(live);
        cout<< "\n\n\n\t\t\t >>>You lose!<<<\n\n";
        cout<<"The word was: "<<word<<endl;
    }
    if(live>0) // If we complete the word rigtly
    {  
        cout<<"\n\n\n\t\t\t >>>You Win<<<\n\n";
        cout<<"The word was: "<<word<<endl;
    }
    return 0;
}

//get a random word from the wordlist depending on the level chosen
string RandomWord(int choice)
 {
    int randomNum = RandomNumber(choice);
    int counter = 1;
    string line, word;
    ifstream file("/home/anuja/Desktop/C++/OOP/ManagementSystem/Wordlist.txt");
    if (!file.is_open()) {
        cout << "Unable to open the file." << endl;
        return "";
    }
  

    while(getline(file, line))
    {
        if(randomNum == counter)
        {
            word = line;
            break;
        }
        counter++;
    }
    file.close();
    return word;
 }

// get a random number to get the word, it depends on the chosen level
int RandomNumber( int choice)
{
    srand(time(NULL));
    int random;
    if(choice == 1)
    {
        random = rand() % 8 + 1;
    }
    if(choice == 2)
    {
        random = rand() % 8 + 9;
    }
    if(choice == 3)
    {
        random = rand() % 8 + 17;
    }
    return random;

}
 
 //design the hangman depending on lives
 void Design(int live)
 { system("clear"); 
    switch(live)
    {
        case 0:
        cout<<"\t\t\t|--------|"<<endl;
        cout<<"\t\t\t|        0"<<endl;
        cout<<"\t\t\t|       /|\\"<<endl;
        cout<<"\t\t\t|        |"<<endl;
        cout<<"\t\t\t|       / \\"<<endl;
        cout<<"\t\t\t|"<<endl;
        cout<<"\t\t\t|_"<<endl;
        break;

        case 1:
        cout<<"\t\t\t|--------|"<<endl;
        cout<<"\t\t\t|        0"<<endl;
        cout<<"\t\t\t|       /|\\"<<endl;
        cout<<"\t\t\t|        |"<<endl;
        cout<<"\t\t\t|         \\"<<endl;
        cout<<"\t\t\t|"<<endl;
        cout<<"\t\t\t|_"<<endl;
        break;
        
        case 2:
        cout<<"\t\t\t|--------|"<<endl;
        cout<<"\t\t\t|        0"<<endl;
        cout<<"\t\t\t|       /|\\"<<endl;
        cout<<"\t\t\t|        |"<<endl;
        cout<<"\t\t\t|          "<<endl;
        cout<<"\t\t\t|"<<endl;
        cout<<"\t\t\t|_"<<endl;
        break;

        case 3:
        cout<<"\t\t\t|--------|"<<endl;
        cout<<"\t\t\t|        0"<<endl;
        cout<<"\t\t\t|       /|\\"<<endl;
        cout<<"\t\t\t|         "<<endl;
        cout<<"\t\t\t|          "<<endl;
        cout<<"\t\t\t|"<<endl;
        cout<<"\t\t\t|_"<<endl;
        break;
        
        case 4:
        cout<<"\t\t\t|--------|"<<endl;
        cout<<"\t\t\t|        0"<<endl;
        cout<<"\t\t\t|        |\\"<<endl;
        cout<<"\t\t\t|         "<<endl;
        cout<<"\t\t\t|          "<<endl;
        cout<<"\t\t\t|"<<endl;
        cout<<"\t\t\t|_"<<endl;
        break;
        
        case 5:
        cout<<"\t\t\t|--------|"<<endl;
        cout<<"\t\t\t|        0"<<endl;
        cout<<"\t\t\t|        |  "<<endl;
        cout<<"\t\t\t|         "<<endl;
        cout<<"\t\t\t|          "<<endl;
        cout<<"\t\t\t|"<<endl;
        cout<<"\t\t\t|_"<<endl;
        break;

        case 6:
        cout<<"\t\t\t|--------|"<<endl;
        cout<<"\t\t\t|        0"<<endl;
        cout<<"\t\t\t|          "<<endl;
        cout<<"\t\t\t|         "<<endl;
        cout<<"\t\t\t|          "<<endl;
        cout<<"\t\t\t|"<<endl;
        cout<<"\t\t\t|_"<<endl;
        break;

        case 7:
        cout<<"\t\t\t|--------|"<<endl;
        cout<<"\t\t\t|          "<<endl;
        cout<<"\t\t\t|          "<<endl;
        cout<<"\t\t\t|         "<<endl;
        cout<<"\t\t\t|          "<<endl;
        cout<<"\t\t\t|"<<endl;
        cout<<"\t\t\t|_"<<endl;
        break;

        default:
        break;
    }
 }

 //print chosen right letters or '-'
 void PrintWord(string word, string guessedLetters) {
    for(size_t i=0; i < word.size();i++)
    {
        if (guessedLetters.find(word.at(i)) != string::npos)
        {
            cout<<word.at(i)<<" ";
        }
        else {
            cout<<"_";
            win = false;
        }
    }
 }

