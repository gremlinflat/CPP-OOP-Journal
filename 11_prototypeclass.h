#include <string>
class student
{
public:
    std::string namepublic;
private:
    std::string nameprivate;

public:
    student(const char* name); //prototype of constructor
    void showpublic();
    void showprivate();
};
