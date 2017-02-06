/*
#include <iostream>

using namespace std;

class Box
{
    public:
        double length;
        double breadth;
        double height;
        
        double getVolume(void);
        double setLength(double len);
        double setBreadth(double bre);
        double setHeight(double hei);
};

double Box::getVolume()
{
    return length * height * breadth;
};

double Box::setLength(double len)
{
    length = len;
};

double Box::setHeight(double hei)
{
    height = hei;
}

double Box::setBreadth(double bre)
{
    breadth = bre;
}

int main()
{
   cout << "Hello World" << endl; 
   Box Box1;
   Box Box2;
   double volume = 0.0;
   
   Box1.setHeight(5.0);
   Box1.setLength(6.0);
   Box1.setBreadth(7.0);

   Box2.setHeight(10.0);
   Box2.setLength(12.0);
   Box2.setBreadth(13.0);
   
   volume = Box1.getVolume();
   cout << "Box1 volume " << "is " << volume << endl;
   volume = Box2.getVolume();
   cout << "Box2 volume " << "is " << volume << endl;

   return 0;
}
*/
