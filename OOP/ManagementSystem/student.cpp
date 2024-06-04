#include <iostream>
#include <string>
#include<limits>

using namespace std;
class Book
{
  private:
  string title;
  string author;
  double ISBN;
  bool available;
  string description;
 


  public:
  void setTitle(string t)
  {
    title =t;
  }
  void setAuthor(string a)
  {
    author  = a;
  }
  void setISBN(double n)
  {
    ISBN =n;
  }
  void setAvailable(bool av)
  { 

    available = av;

  }
  void setDescription(string d)
  {
    description = d;
  }
  string getTitle()
  {
    return title;
  }
  string getAuthor()
  {
    return author;
  }
  double getISBN()
  {
    return ISBN;
  }
  string getAvailable()
  {
    return available? "Available" : "Checked out";
  }
  string getDescription()
  {
    return description;
  }
  void borrowBook()
  {
    if(available)
    {
     available = false;
    
      cout<<"You have borrowed the book."<<endl;
    }
    else
    {
      cout<<"Book is checked out."<<endl;
    }
   }
  
  void returnBook()
  {
    if(! available)
    {
      available = true;
      cout<<"You have returned the book."<<endl;
    }
    else{
      cout<<"The book is already in the library.";
    }
  }

};
void addBook(Book library[], int &numBooks)
{
  if (numBooks >= 100)
  {
    cout<<"Library is full. Cannot add more books."<<endl;
    return ;
  }
  Book book;
  string bookName , authorName;
  string bookDescription;
  double isbn;
  cout<<"Enter book title: ";
    getline(cin, bookName);
    cout<<"Enter book author: ";
    getline(cin , authorName);
    cout<<"Enter book ISBN: ";
    cin>>isbn;
     cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout<<"Enter book's decsription: ";
    getline(cin, bookDescription);
    
    book.setTitle(bookName);
    book.setAuthor(authorName);
    book.setISBN(isbn);
    book.setAvailable(true);
    book.setDescription(bookDescription);

   library[numBooks] = book;
   numBooks++;
    cout<<"Book added to the library."<<endl;
}


// to remove book from the list of books in library.
void removeBook(Book library[], int &numBooks)
{
  if(numBooks == 0)
  {
    cout<<"No books to remove."<< endl;
    return ;
  }

  double isbn;
  cout<<"Enter book ISBN: ";
  cin>>isbn;

l
  // previous input operations are cleared out hte buffer so that it could not affect the next input operations.
  cin.ignore(numeric_limits<streamsize>::max(), '\n');
  for(int i =0;i<numBooks;i++)
  {
    if(library[i].getISBN() == isbn)
    {  library[i].~Book();
         for(int j =i ; j< numBooks-1; j++)
      {
        library[j] = library[j+1];
      }
      numBooks--;
      cout<<"Book removed from library."<<endl;
      return ;
    }
  }
  
 
}


// to search book from the library with isbn , booktitle and author name.
void searchBook(Book library[], int &numBooks)
{
  // double isbn;
  // string bookName;
  string authorName;
// cout<<"Enter book ISBN: ";
// cin>>isbn;
// cout<<"Enter book title: ";
// getline(cin, bookName );

cout<<"Enter author name: ";
getline(cin , authorName);
bool found = false;
for(int i= 0; i<numBooks;i++)
{
  if(library[i].getAuthor()== authorName)
  {
    found = true;
      cout<<endl;
      cout<<"Book Information."<<endl;
      cout<<"Title of book : "<<library[i].getTitle()<<endl;
      cout<<"Author of the book : "<<library[i].getAuthor()<<endl;
      cout<<"ISBN of book: "<<library[i].getISBN()<<endl;
      cout<<"Book's Description: "<<library[i].getDescription()<<endl;
      cout<<"Availability: "<<library[i].getAvailable()<<endl;
      cout<<endl;
  }
}
if(! found)
{
  cout<<"Book not found."<<endl;
}


// for(int i= 0; i<numBooks;i++)
// {
//   if(library[i].getTitle()==bookName)
//   {
//       cout<<endl;
//       cout<<"Book Information."<<endl;
//       cout<<"Title of book : "<<library[i].getTitle()<<endl;
//       cout<<"Author of the book : "<<library[i].getAuthor()<<endl;
//       cout<<"ISBN of book: "<<library[i].getISBN()<<endl;
//       cout<<"Book's Description: "<<library[i].getDescription()<<endl;
//       cout<<"Availability: "<<library[i].getAvailable()<<endl;
//       cout<<endl;
//   }
// }

// for(int i=0;i<numBooks;i++)
// {
//   if(library[i].getISBN()==isbn)
//   {
//     cout<<endl;
//     cout<<"Book information."<<endl;

//       cout<<"Title of book : "<<library[i].getTitle()<<endl;
//       cout<<"Author of the book : "<<library[i].getAuthor()<<endl;
//       cout<<"ISBN of book: "<<library[i].getISBN()<<endl;
//        cin.ignore(numeric_limits<streamsize>::max(), '\n');
//       cout<<"Book's Description: "<<library[i].getDescription()<<endl;
//       cout<<"Availability: "<<library[i].getAvailable()<<endl;        
//       cout<<endl;
//   }
}
void borrowBook(Book library[], int &numBooks)
{
  double isbn;
  cout<<"Enter isbn: ";
  cin>>isbn;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
  for(int i =0;i<numBooks;i++)
  {
    if(library[i].getISBN()==isbn)
    {
      library[i].borrowBook();
      return ;
    }

  }
  cout<<"Book not found."<<endl;
}

void returnBook(Book library[], int numBooks)
{
   double isbn;
   cout<<"Enter isbn: ";
   cin>>isbn;
     cin.ignore(numeric_limits<streamsize>::max(), '\n');
   for(int i= 0; i<numBooks;i++)
   {
    if(library[i].getISBN()==isbn)
    {
      library[i].returnBook();
      return ;
    }
   }
   cout<<"Book not found."<<endl;
}


int main()
{

 Book library[100];
 int numBooks = 0;
  int ch;
  bool running = true;
  cout<<"Welcome to the library Management system!"<<endl;
  while(running){
  cout<<"Menu"<<endl;
  cout<<"1. Add book"<<endl;
  cout<<"2. Remove book"<<endl;
  cout<<"3. Search for book"<<endl;
  cout<<"4. Borrow the book"<<endl;
  cout<<"5. Return the book."<<endl;
  cout<<"6. Exit"<<endl;
  cout<<"Enter your choice: "; cin>>ch;
   cin.ignore(numeric_limits<streamsize>::max(), '\n');
  switch(ch)
  {
    case 1:
    addBook(library, numBooks);
    break;

    case 2:
    removeBook(library, numBooks);
    break;

    case 3:
    searchBook(library, numBooks);
    break;

    case 4:
    borrowBook(library, numBooks);
    break;

    case 5:
    returnBook(library, numBooks);
    break;

    case 6:
    cout<<"Thank you for using the library management system."<<endl;
    running = false;
    break;
    

    default:
    cout<<"\n Choose valid choice."<<endl;
    break;
  }
  } 
  return 0;
}
