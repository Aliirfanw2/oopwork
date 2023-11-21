#include<iostream>
#include <cstring>

using namespace std;
class name
{
private:
    char* firstname;
    char* secondname;
public:
    name(char* first = NULL, char* last = NULL);
    ~name();
    name(const name&);

    void copyname(name&);
    void camalcase();
    void tolower();
    void toupper();
    int namelength();
    void swapname();
    void setfirstname(char*);
    void setsecondname(char*);
    char* getfirstname();
    char* getsecondname();
    void display();
    char* fullname();
    bool isvalidname();
};