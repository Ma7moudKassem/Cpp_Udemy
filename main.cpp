#include<iostream>

using namespace std;
int main () {
//    int x , y ;
//    cout<<"enter first number:";
//    cin>> x;
//    cout<<"enter second number:";
//    cin>> y;
//    cout<<"x="<<x<<"\t";
//    cout<<"y="<<y<<endl;
//    cout<<"sum="<<x/y;

//----------------program to show even and oop numbers ----------------//

/*
int x ;
cout<<"Enter Your Number:";
cin>>x;

if(x%2 == 0)
{
    cout<<"This Number is Even";
} else{
    cout<<"This Number is Opp";
}
 */

//----------------------------------------------------//

/*
int x,y;
cout<<"Enter height:";
cin>>x;
cout<<"Enter width:";
cin>>y;
cout<<"Space="<<x*y<<"CM^2";
*/

//----------------------------------------------------------//

// -------------------------------Assignment operators------------------//
//int x=2;
//x++;
//cout<<"x="<<x;

//int x=5 ;
//x++;
//cout<<"x="<<x++; --------> output x =0

//int x=5 ;
//++x;
//cout<<"x="<<++x; --------> output x=6
//
//int x =3 ;
//x=x+2;
//cout<<"x="<<x;
//


//    int x =3 ;
//    x+=2;
//    cout<<"x="<<x;


// --------------------------------if statements---------------------------------//

//int x;
//cout<<"Enter your number:";
//cin>>x;
//
//if(x%2==0)
//{
//    cout<<"this number is even";
//}
//else
//{
//    cout<<"this number is oop";
//}

//int x ;
//cout<<"Enter your number:";
//cin>>x;
//
//if(x>0)
//{
//    cout<<"Positive";
//}
//else if(x<0)
//{
//    cout<<"Nagitive";
//}else
//{
//    cout<<"Zero";
//}

//int x ;
//cout<<"Enter your number:";
//cin >>x;
//x>0 ? cout<<"positive" : cout<< "nagitive";

// ---------------------------Switch Statement ------------------مهم جدا جدا//

//int x ;
//cout<<"Enter Your Number";
//cin>>x;
//
//    switch(x)
//    {
//        case 0: cout<<"0"; break;
//        case 1: cout<<"1";break;
//        case 2: cout<<"2";break;
//        case 3: cout<<"3";break;
//        default: cout<<"noun";break;
//    }



//int x ,y , result;
//char op ;
//cout<<"Enter First Number";
//cin>>x;
//cout<<"Enter Second Number";
//cin>>y;
//cout<<"What is Operation you want to do?";
//cin>>op;
//    switch (op) {
//        case '+': cout<<"X+Y = "<<x+y;break;
//        case '-': cout<<"X-Y = "<<x-y;break;
//        case '*': cout<<"X*Y = "<<x*y;break;
//        case '%': cout<<"X%Y = "<<x%y;break;
//        case '/': cout<<"X/Y = "<<x/y;break;
//        default:cout<<"noun";break;
//    }

//    int x ,y , result = 0;
//    char op;
//    cout<<"Enter Two Number";
//    cin>>x>>y;
//    cout<<"Enter op";
//    cin>> op;
//    result = (op == '+') ? x+y : (op == '-') ? x-y : (op == '*') ? x*y :(op == '/') ? x/y : x%y ;
//    cout<<"Result:"<<result;

// ----------------------------loop-------------------------//
//* while

//int i=0;
//while(i<5)
//{
//    cout<<"i = "<<i<<endl;
//    i++;
//}
//
//    int i = 1;
//    while (i<10){
//        cout<<"I = "<<i<<endl;
//        i++;
//    }

//int i = 0;
//    while (i>10)
//    {
//        cout<<"i="<<i<<endl;
//        i++;
//    }

// * do while

//int i=0;
//do{
//    cout<<"i="<<i<<endl;
//    i++;
//} while (i>10);

//* for statement

//for(int i=0;i<10;i++)
//{
//    cout<<"Hello"<<endl;
//}
//

// nested loops

//int x=1;
//    while (x<10)
//    {
//        int y =1;
//        while (y<10)                            // by while
//        {
//            cout<<x<<"*"<<y<<"="<<x*y<<endl;
//            y++;
//        }
//        x++;
//    }

//for(int x =1;x<=10;x++)
//{
//    for(int y =1 ; y<=10;y++)                  // by for
//    {
//        cout<<x<<"*"<<y<<"="<<x*y<<endl;
//    }
//}

// degree app


//    while (true)
//    {
//
//        int degree;
//        cout<<"Enter your degree:";
//        cin>>degree;
//
//        if(degree >100 || degree < 0) {
//            return  0 ;
//        }
//
//        if(degree>= 90){
//            if(degree>=95)
//            {
//                cout<<"+A\n";
//            } else{cout<<"-A\n";}
//        }
//        else if(degree>= 80){cout<<"B\n";}
//        else if(degree>= 70){cout<<"C\n";}
//        else if(degree>= 60){cout<<"D\n";}
//        else if(degree>= 50){cout<<"F\n";}
//        else{cout<<"Unknown\n";}
//
//    }

return 0 ;

}
