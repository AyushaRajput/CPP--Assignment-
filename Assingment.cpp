#include <iostream>
using namespace std;
//Base class Book
class Book{
  public:
  void book () {
    cout<<"It is easy to understand"<<endl;
  }
};
// class Novel derived from Book
class Novel : public Book {
  public:
  void novel ()
  {
    cout<<"You will definitely learn something from it"<<endl;
  }
};
//class The story of my life from Novel
class Autobiography: public Novel{
  public:
  void autobiography()
  {
    cout<<"The story of my life is a autobiographical novel"<<endl;
  }
};

int main() 
{
    Autobiography mystory ;
    mystory.autobiography();
    mystory.novel();
    mystory.book();
    
    return 0;
}