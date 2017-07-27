#include <bits/stdc++.h>

using namespace std;

//Implement the class Box
//l,b,h are integers representing the dimensions of the box

// The class should have the following functions :

// Constructors:
// Box();
// Box(int,int,int);
// Box(Box);


// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)


class Box {

public:

    Box():l(0),b(0),h(0) {

    }

    Box(int l, int b, int h){
        this->l = l;
        this->b = b;
        this->h = h;
    }

    Box(const Box& bx) {
        this->l = bx.l;
        this->b = bx.b;
        this->h = bx.h;
    }


    long getLength()const {
        return l;
    }

    long getBreadth()const {
        return b;
    }

    long getHeight()const {
        return h;
    }


     long long CalculateVolume() {
        return static_cast<long long>(l*b*h);
    }


    bool operator <(const Box& bx){
        if(this->l < bx.l){
            return true;
        } else if((this->b < bx.b) && (this->l == bx.l)) {
            return true;
        } else if((this->h < bx.h)&&(this->b==bx.b)&&(this->l==bx.l)){
            return true;
        } else {
            return false;
        }
    }


    friend ostream &operator<<( ostream &output, const Box &bx ) {
        output << bx.l<<" "<<bx.b<<" "<<bx.h;
        return output;
    }

private:
    long l,b,h;

};


void check2()
{
    int n;
    cin>>n;
    Box temp;
    for(int i=0;i<n;i++)
    {
        int type;
        cin>>type;
        if(type ==1)
        {
            cout<<temp<<endl;
        }
        if(type == 2)
        {
            int l,b,h;
            cin>>l>>b>>h;
            Box NewBox(l,b,h);
            temp=NewBox;
            cout<<temp<<endl;
        }
        if(type==3)
        {
            int l,b,h;
            cin>>l>>b>>h;
            Box NewBox(l,b,h);
            if(NewBox<temp)
            {
                cout<<"Lesser\n";
            }
            else
            {
                cout<<"Greater\n";
            }
        }
        if(type==4)
        {
            cout<<temp.CalculateVolume()<<endl;
        }
        if(type==5)
        {
            Box NewBox(temp);
            cout<<NewBox<<endl;
        }

    }
}

int main()
{
    check2();
    return 0;
}
