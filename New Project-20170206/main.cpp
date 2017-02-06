#include <iostream>

using namespace std;

class Shape
{
    public:
        void setWidth(int w)
        {
            width = w;
        }
        void setHeight(int h)
        {
            height = h;
        }
        
    protected:
        int width;
        int height;
};

class PaintCost
{
    public:
        int getCost(int area)
        {
            return area * 70;
        }
};

class Rectangle:public Shape, public PaintCost
{
    public:
        int getArea()
        {
            return(width * height);
        }
};



class Line
{
    public:
        void setLength( double len );
        double getLength( void );
        Line();
        ~Line();
        
    private:
        double length;
};

Line::Line( void )
{
    cout << "Object is being created" << endl;
}

Line::~Line( void )
{
    cout << "Object is being deleted" << endl;
}

double Line::getLength( void )
{
    return length;
}

void Line::setLength( double len )
{
    length = len;
}

class Box
{
    protected:
        double width;
};

class SmallBox:Box
{
    public:
        void setSmallWidth( double wid );
        double getSmallWidth( void );
};

double SmallBox::getSmallWidth( void )
{
    return width;
}

void SmallBox::setSmallWidth( double wid)
{
    width = wid;
}

int main()
{
   SmallBox smallbox;
   Line line;
   Box *ptrBox;
   
   
   smallbox.setSmallWidth(5.0);
   cout << "width of smallbox: " << smallbox.getSmallWidth() << endl;
   
   line.setLength(6.0);
   cout << "Length of line :" << line.getLength() << endl;

    Rectangle Rect;
    int area;
    
    Rect.setWidth(5);
    Rect.setHeight(7);
    
    area = Rect.getArea();
    cout << "Total area: " << Rect.getArea() << endl;
    
    cout << "Total cost: " << Rect.getCost(area) << endl;
    
    return 0;
}

