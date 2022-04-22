/*
had to review how to overload << on coursera,
also didn't pay attention to the return type of the CalculateVolume() method.
https://www.hackerrank.com/challenges/box-it/problem?isFullScreen=true
*/
#include<bits/stdc++.h>

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
    private:
        int l, b, h;
    public:
        Box(): l(0), b(0), h(0) {} // default constructor
        Box(int length, int breadth, int height) {
            l = length;
            b = breadth;
            h = height;
        } // constructor with given params
        Box(Box &B) {
            l = B.l;
            b = B.b;
            h = B.h;
        } // copy constructor
        ~Box() {}
        
        int getLength() { return l; }
        int getBreadth() { return b; }
        int getHeight() { return h;}
        long long CalculateVolume() {
            long long i = 1;
            i *= l;
            i *= b;
            i *= h;
            return i;
        }
        
        bool operator<(const Box &B) const {
            if ((l<B.l) || (b<B.b && l==B.l) || (h<B.h && b<B.b && l==B.l)){ return true; }
            else { return false; }
        }
        friend ostream& operator<<(ostream& out, Box& B) {
            char sp = ' ';
            out << B.l << sp << B.b << sp << B.h;
            return out;
        }
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
}
