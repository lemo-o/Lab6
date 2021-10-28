/*
So the only thing that doesn't work is that when you input 1 for side length, the square is a little bit broken. The way I could fix that 
is by either adding more logic or fixing the original string function that makes the square in the first place. 
My return also doesn't quite work. It works in most cases, just not those edge cases.
I also just presumed that the user would put in the correct inputs, theres no error checking in that respect. 
*/

#include<iostream>
using namespace std;
// *** Prototypes of functions ****
int get_side();
char get_symbol();
int print_rectangle(int,int,char);
int main(){
  int side1, side2, num_symbols;
  char c;
  side1 = get_side();
  side2 = get_side();
  c = get_symbol();
  num_symbols = print_rectangle(side1,side2,c);
  cout << num_symbols << " characters were printed.\n\n";
}

//*** put your functions here ****

int get_side()
{
    int h = 0;
    bool loopbreaker = false;
    do{
    cout << "Please enter a side length between 1 and 10"<< endl;
    cin >> h;
    if(h < 1 || h > 10)
    {
    cout << "Invalid input" << endl;
    }
    else
    {
        loopbreaker = true;
    }
    }
    while(loopbreaker == false);
    return h;
}

char get_symbol()
{
    char h;
    cout << "Enter a symbol that you would like to use" << endl;
    cin >> h;
    return h;
}

int print_rectangle(int a, int b, char c)
{

    //middle
    //logic to square the rectangle
    //this is incredibly ugly and I would like to make it better, but oh well, it works good enough
    int h = 0;
    if(b == a)
    {h=0;}
    if(a > b)
    {

        if(b<=2)
        {
            h=a;
        }
        else
        {
            h = a-b;
        }
    }
    if(b > a)
    {
        if(a<2)
        {
            h =-2;
        }
        else
        {
            h = b-a;
        }
    }
    //top
    cout << string(a, c);
    cout << endl;
    //middle
    //across then down
    for(int i = 0; i < a; i++)
    {
        cout << c;
        cout << string(b-h-2, ' ');
        cout << c << endl;
    }
    //bottom
    cout << string(a, c);
    cout << endl;
    return a *4;
}