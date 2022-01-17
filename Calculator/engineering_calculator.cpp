#include "iostream.h"
#include "conio.h"
#include "math.h"

int a;
float b, c;
bool e = false;

void resetscreen()
{
  clrscr();

  cout << "Engineering Calculator ...\n\nOperators :\n\n";

  cout << "\t1: +\t2: -\t3: %\t4: *\t5: /\n\n\t6: Sin\t7: Cos\t8: Tan\t9: Cot\n\n";
  cout << "\t10: 1/x\t11: x^2\t12: x^y\n\n\t13: sqtr(x)\t14: sqrt(x, y)\n\n\t15: log(x, 10)\n\n\t-1: Exit\t0: Reset Screen\n\n";

}


int calc()
{
  cout << "\n\nEnter Operator Code : ";


  a = b = c = 0;

  cin >> a;

  switch(a)
  {
    case -1 : return a;

    case 0 : return a;

    case 1 : {
              cout << "\n'A + B' , Enter A and B ( Seprate with Space ) : ";
              cin >> b >> c;
              cout << "\n" << b << " + " << c << " = " << (b + c);

              calc();
             }
     break;

    case 2 : {
              cout << "\n'A - B' , Enter A and B ( Seprate with Space ) : ";
              cin >> b >> c;
              cout << "\n" << b << " - " << c << " = " << (b - c);

              calc();
             }
     break;

    case 3 : {
              cout << "\n'A % B' , Enter A and B ( Seprate with Space ) : ";
              cin >> b >> c;
              cout << "\n" << b << " % " << c << " = " << (b / c);

              calc();
             }
     break;

    case 4 : {
              cout << "\n'A * B' , Enter A and B ( Seprate with Space ) : ";
              cin >> b >> c;
              cout << "\n" << b << " * " << c << " = " << (b * c);

              calc();
             }
     break;

    case 5 : {
              cout << "\n'A / B' , Enter A and B ( Seprate with Space ) : ";
              cin >> b >> c;
              cout << "\n" << b << " / " << c << " = " << (b / c);

              calc();
             }
     break;

    case 6 : {
              cout << "\n'Sin(X)' , Enter X : ";
              cin >> b;
              cout << "\nSin(" << b << ") = " << sin(b);

              calc();
             }
     break;

    case 7 : {
              cout << "\n'Cos(X)' , Enter X : ";
              cin >> b;
              cout << "\nCos(" << b << ") = " << cos(b);

              calc();
             }
     break;

    case 8 : {
              cout << "\n'Tan(X)' , Enter X : ";
              cin >> b;
              cout << "\nTan(" << b << ") = " << tan(b);

              calc();
             }
     break;

    case 9 : {
              cout << "\n'Cot(X)' , Enter X : ";
              cin >> b;
              cout << "\nCot(" << b << ") = " << (1/tan(b));

              calc();
             }
     break;

    case 10 : {
              cout << "\n'1/X' , Enter X : ";
              cin >> b;
              cout << "\n1 / " << b << " = " << (1/b);

              calc();
             }
     break;

    case 11 : {
              cout << "\n'X ^ 2' , Enter X : ";
              cin >> b;
              cout << "\n" << b << " ^ 2 = " << pow(b, 2);

              calc();
             }
     break;

    case 12 : {
              cout << "\n'A ^ B' , Enter A and B ( Seprate with Space ) : ";
              cin >> b >> c;
              cout << "\n" << b << " ^ " << c << " = " << pow(b, c);

              calc();
             }
     break;

    case 13 : {
              cout << "\n'Sqrt(X)' , Enter X : ";
              cin >> b;
              cout << "\nSqrt(" << b << ") = " << sqrt(b);

              calc();
             }
     break;

    case 14 : {
              cout << "\n'Sqrt(A, B)' , Enter A and B ( Seprate with Space ) : ";
              cin >> b >> c;
              cout << "\nSqrt(" << b << ", " << c << ") = " << pow(b, (1/c));

              calc();
             }
     break;

    case 15 : {
              cout << "\n'Log(X, 10)' , Enter X : ";
              cin >> b;
              cout << "\nLog(" << b << ", 10) = " << log(b);

              calc();
             }
     break;

    default : {
               cout << "\nInvalid Operator Code !\n";
               calc();
              }
  }

  return 1;

}



void main()
{

 int r;

 while(1)
 {
  resetscreen();

  r = calc();

  if( r == -1 )
   break;

  if( r == 0 )
   continue;

 }

}
