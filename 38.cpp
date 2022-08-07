#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class Furniture
{
private:
    char name[50];
    int price;
protected:
    void setName(char* n)
    {
        strcpy(name,n);
    }
    void setPrice(int p)
    {
        price=p;
    }
public:
    char* getName()
    {
        return(name);
    }
    int getPrice()
    {
        return (price);
    }
};
class chair:protected Furniture
{
private:
    float weight;
protected:
    void setWeight(float w)
    {
        weight=w;
    }
public:
    void setFurniture(char *n,int p,float w)
    {
        setName(n);
        setPrice(p);
        setWeight(w);

    }
    void  getFurniture()
    {
        cout<<"DATA IS: "<<endl;
        cout<<endl<<getName()<<"    "<<getPrice()<<"    "<<weight;
    }
};
int main()
{
    chair c1;
    c1.setFurniture("Chamcham",2000,41);
    c1.getFurniture();
    getch();
}
