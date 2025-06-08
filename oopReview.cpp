#include<iostream>
using namespace std;

class Book {
    private:
        string title;
        string author;
        int pages;

    public:
        
        // Getters and Setters
        void setTitle(string aTitle){
            title = aTitle;
        }

        string getTitle(){
            return title;
        }

        void setAuthor(string aAuthor){
            author = aAuthor;
        }

        string getAuthor(){
            return author;
        }

        void setPages(int aPages){
            pages = aPages;
        }

        int getPages(){
            return pages;
        }


        Book(){
            
        }
        Book(string aTitle, string aAuthor, int aPages){
            setTitle(aTitle);
            setAuthor(aAuthor);
            setPages(aPages);
        }
};

class HardCover : public Book{
    public:

    void setMaterial(string aMaterial){
        material = aMaterial;

    }

    string getMaterial(){
        return material;
    }


    HardCover(string aTitle, string aAuthor, int aPages, string aMaterial)
    :Book(aTitle,aAuthor,aPages)
    {   
        setMaterial(aMaterial);
    }
    
    private:
    
    string material;


};
int main(){
    Book myBook("harry Potter","JK Rowling",500);
    HardCover secondBook("10 rings","shang shi",500,"rubber");
    
  

    std::cout << myBook.getTitle() << std::endl;

    return 0;
}