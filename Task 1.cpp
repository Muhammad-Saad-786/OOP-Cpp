#include<iostream>
using namespace std;
class Book{
	private:
		string title;
		string author;
		int ISBN;
		int bookCount;
		string tempSearch;
	public:
		Book() {}
		
		void addBook()
		{
			cout << "Enter Book Title \n";
			cin >> title;
			cout << "Enter Book Author \n";
			cin >> author;
			cout << "Enter Book ISBN \n";
			cin >> ISBN;
			cout << "Enter Number of Books \n";
			cin >> bookCount;
		}
		
		string getTitle()
		{
			return title;
		}
		
		string getAuthor()
		{
			return author;
		}
		int getIsbn()
		{
			return ISBN;
		}
		int getBookCount()
		{
			return bookCount;
		}
		
};

class Library{
	private:
		int size;
		Book *b;
	public:
		
		Library(int num) : size(num) 
		{
			b = new Book[size];
		}
		
		void addBooks()
		{
			for(int i = 0; i <size; i++)
			{
				cout << "Enter Details for Book : " << i + 1 << endl;
				b[i].addBook();
			}
		}
	
		
	
		void display()
		{
			for(int i = 0; i <size; i++)
			{
				cout << "Details of Book : " << i +1 << endl;
				cout << endl;
				cout << "Book Name : " << b[i].getTitle() << endl;
				cout << "Book Author : " << b[i].getAuthor() << endl;
				cout << "Book ISBN : " << b[i].getIsbn() << endl;
				cout << "Total Number of Books : " << b[i].getBookCount() << endl;
				cout << endl;
			}
		}
		
		void searchBookByTitle() const {
        string title;
        cout << "Enter the title to search: ";
        cin >> title;
        
        bool found = false;
        for(int i = 0; i <=size; ++i) {
            if(b[i].getTitle() == title) {
                cout << "Book found!" << endl;
                cout << "Details:" << endl;
                cout << "Title: " << b[i].getTitle() << endl;
                cout << "Author: " << b[i].getAuthor() << endl;
                cout << "ISBN: " << b[i].getIsbn() << endl;
                cout << "Count: " << b[i].getBookCount() << endl;
                found = true;
                break;
            }
        }
        if(!found) {
            cout << "Book not found!" << endl;
        }
    }
	
};

int main()
{
	int numBooks;
	cout << "Enter numbers of books \n";
	cin >> numBooks;
	Library l(numBooks);
	l.addBooks();
	l.display();
	l.searchBookByTitle();

	
	
	
	
	
	return 0;
}
