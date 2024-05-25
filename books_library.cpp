#include <iostream>
using namespace std;

class Book {
    string bName;
    int ID;
    string author;
    double price;
    bool right;

public:
    // Default constructor
    Book() {
        bName = "";
        ID = 0;
        author = "";
        price = 0.0;
        right = false;
    }

    // Parameterized constructor
    Book(string name, int id, string auth, double pr, bool r) {
        bName = name;
        ID = id;
        author = auth;
        price = pr;
        right = r;
    }

    // Getters
    string getBName() {
        return bName;
    }

    int getID() {
        return ID;
    }

    string getAuthor() {
        return author;
    }

    double getPrice() {
        return price;
    }

    bool getRight() {
        return right;
    }

    // Setters
    void setBName(string name) {
        bName = name;
    }

    void setID(int id) {
        ID = id;
    }

    void setAuthor(string auth) {
        author = auth;
    }

    void setPrice(double pr) {
        price = pr;
    }

    void setRight(bool r) {
        right = r;
    }

    // Display function
    void display() {
        cout << "Book Name: " << bName << endl;
        cout << "ID: " << ID << endl;
        cout << "Author: " << author << endl;
        cout << "Price: " << price << endl;
        cout << "Right to Read: " << (right ? "Yes" : "No") << endl;
    }
};

int main() {
    // Creating an object of the Book class using default constructor
    Book book1;
    book1.setBName("The Alchemist");
    book1.setID(1234);
    book1.setAuthor("Panlo Coelho");
    book1.setPrice(200);
    book1.setRight(true);
    book1.display();

    // Creating an object of the Book class using parameterized constructor
    Book book2("Energize Your Mind", 5678, "Gaur Gopal Das", 235, true);
    book2.display();

    return 0;
}