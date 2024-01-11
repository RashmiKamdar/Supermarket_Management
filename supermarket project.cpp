#include<iostream>
#include<string.h>
using namespace std;
class market

{
public:
    char name[50];
    int phone_number;
    void get_data()
    {
        cout<<"Enter your name:"<<endl;
        cin>> name;
        cout<<"Enter your contact number:"<<endl;
        cin>>phone_number;
    }
 void come() {
    cout<<"Enjoy..."<<endl;
 }
   };
   class Explore: public market
   {
       public:
     void explore(){
    cout<<"Shopping...";
     }
   };

int main()
{
    market M;
    M.get_data();
    Explore e1;
    e1.come();
    e1.explore();
    int pr,spr,bi,p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,n11,x,y,x1,y1,x2,y2,x3,y3,x4,y4,x5,y5,x6,y6,x7,y7,x8,y8,x9,y9,x10,y10,
        fv,fv1,fv2,fv3,fv4,fv5,fv6,fv7,f,f1,f2,f3,f4,f5,f6,a,a1,a2,a3,a4,a5,a6,b,b1,b2,b3,b4,b5,b6,
        c,ch1,ch2,ch3,ch4,ch5,c1,c2,c3,c4,c5,m1,m2,m3,m4,m5,l1,l2,l3,l4,l5,sp2,dr,sdr,sdr1,sdr2,sdr3,sdr4,sdr5,r1,r2,r3,r4,r5,s1,s2,s3,s4,s5,d1,d2,d3,
        d4,d5,cd,cd1,j1,o1,bp,pd,pd1,pd2,pd3,pe,P,P1,P2,sc,sc1,sc2,sc3;

    //First Main Switch Case

    cout<<"\n \n***PRODUCTS***"<<endl;
    cout<<"1.Groceries"<<endl;
    cout<<"2.Summer Special"<<endl;
    cout<<"3.Beauty Products"<<endl;
    cout<<"Enter the Product number which you want to buy:"<<endl;
    cin>>pr;   //pr=product
    switch(pr)
    {
    case 1:   //sub class of grocery
    {
        cout<<"1.Biscuits"<<endl;
        cout<<"2.Fruits and Vegetables"<<endl;
        cout<<"3.Chocolates"<<endl;
        cout<<"Enter the number of sub-product you want to buy:"<<endl;
        cin>>spr;  //subproduct

        switch(spr)
        {
        case 1: //sub class of biscuits
        {
            cout<<"Press 1 for Monaco"<<endl;
            cout<<"Press 2 for Oreo"<<endl;
            cout<<"Press 3 for KrackJack"<<endl;
            cout<<"Press 4 for Parle G"<<endl;
            cout<<"Press 5 for Marie Gold"<<endl;
            cout<<"Press 6 for Bour Bon"<<endl;
            cout<<"Press 7 for Jim Jam"<<endl;
            cout<<"Press 8 for Gooday"<<endl;
            cout<<"Press 9 for Dark Fantasy"<<endl;
            cout<<"Press 10 for Hide n Seek"<<endl;
            cout<<"Press 11 for Nice"<<endl;
            cout<<"Select the biscuit u want to buy:"<<endl;
            cin>>bi;   //biscuits
            switch (bi)
            {
            case 1:
            {
                cout<<"TENSION KYUN LENEKA MONACO KHANEKA"<<endl;
                cout<<"Press 1 for 10 Rupees Packet:"<<endl;
                cout<<"Press 2 for 20 Rupees Packet:"<<endl;
                cout<<"Selected packet is:"<<endl;
                cin>>p1;         //packet 1
                switch(p1)
                {
                case 1:
                {
                    cout<<"How many Packets u want to buy:"<<endl;
                    cin>>n1;  //num 1 input
                    int x=10;
                    y=n1*x;
                    cout<<y<<endl;
                    cout<<"Your price for biscuit is :"<<y<<endl;
                    cin>>n1;
                    break;
                }
                break;
                case 2:
                {
                    cout<<"How many Packets u want to buy:"<<endl;
                    cin>>n1;
                    int x=20;
                    y=n1*x;
                    cout<<y<<endl;
                    cout<<"Your price for biscuit is :"<<y<<endl;
                    cin>>n1;
                    break;
                }
                break;
                }
                break;
            }
            break;
            {
                case 2:
                {
                    cout<<"TWIST,LICK,DUNK"<<endl;
                   cout<<"Press 1 for 10 Rupees Packet:"<<endl;
                cout<<"Press 2 for 20 Rupees Packet:"<<endl;
                    cout<<"Selected packet is:"<<endl;
                    cin>>p2;   //packet 2
                    switch(p2)
                    {
                    case 1:
                    {
                        cout<<"How many Packets u want to buy:"<<endl;
                        cin>>n2;   //num 2 input
                        int x1=10;
                        y1=n2*x1;
                        cout<<y1<<endl;
                        cout<<"Your price for biscuit is :"<<y1<<endl;

                        break;
                    }
                    break;

                    case 2:
                    {
                        cout<<"How many Packets u want to buy:"<<endl;
                        cin>>n2;
                        int x1=20;
                        y1=n2*x1;
                        cout<<y1<<endl;
                        cout<<"Your price for biscuit is :"<<y1<<endl;
                        break;

                    }
                    break;
                    }
                    break;
                }
                break;
            }
            break;
                //3
            {
                case 3:
                {
                    cout<<"SWEET BHI SALTY BHI"<<endl;
                   cout<<"Press 1 for 10 Rupees Packet:"<<endl;
                cout<<"Press 2 for 20 Rupees Packet:"<<endl;
                    cout<<"Selected packet is:"<<endl;
                    cin>>p3;   //packet 3
                    switch(p3)
                    {
                    case 1:
                    {
                        cout<<"How many Packets u want to buy:"<<endl;
                        cin>>n3;
                        int x2=10;
                        y2=n3*x2;   //num input 3
                        cout<<y2<<endl;
                        cout<<"Your price for biscuit is :"<<y2<<endl;

                        break;
                    }
                    break;
                    case 2:
                    {
                        cout<<"How many Packets u want to buy:"<<endl;
                        cin>>n3;
                        int x2=20;
                        y2=n3*x2;
                        cout<<y2<<endl;
                        cout<<"Your price for biscuit is :"<<y2<<endl;
                        break;
                    }
                    break;
                    }
                    break;
                }
                break;
            }
            break;
            {
                case 4:
                {
                    cout<<"PARLE G -Bharat ka apna Biscuit"<<endl;
                   cout<<"Press 1 for 10 Rupees Packet:"<<endl;
                cout<<"Press 2 for 20 Rupees Packet:"<<endl;
                    cout<<"Selected packet is:"<<endl;
                    cin>>p4;  //packet 4
                    switch(p4)
                    {
                    case 1:
                    {
                        cout<<"How many Packets u want to buy:"<<endl;
                        cin>>n4;    //num input 4
                        int x3=10;
                        y3=n4*x3;
                        cout<<y3<<endl;
                        cout<<"Your price for biscuit is :"<<y3<<endl;

                        break;
                    }
                    break;
                    case 2:
                    {
                        cout<<"How many Packets u want to buy:"<<endl;
                        cin>>n4;
                        int x3=20;
                        y3=n4*x3;
                        cout<<y3<<endl;
                        cout<<"Your price for biscuit is :"<<y3<<endl;
                        break;

                    }
                    break;
                    }
                    break;
                }
                break;
            }
            break;
            {
                case 5:
                {
                    cout<<"BRITANNIA MARIE HO JAAYE"<<endl;
                   cout<<"Press 1 for 10 Rupees Packet:"<<endl;
                cout<<"Press 2 for 20 Rupees Packet:"<<endl;
                    cout<<"Selected packet is:"<<endl;
                    cin>>p5;    //packet 5
                    switch(p5)
                    {
                    case 1:
                    {
                        cout<<"How many Packets u want to buy:"<<endl;
                        cin>>n5;    //num input 5
                        int x4=10;
                        y4=n5*x4;
                        cout<<y4<<endl;
                        cout<<"Your price for biscuit is :"<<y4<<endl;
                        break;
                    }
                    break;
                    case 2:
                    {
                        cout<<"How many Packets u want to buy:"<<endl;
                        cin>>n5;
                        int x4=20;
                        y4=n5*x4;
                        cout<<y4<<endl;
                        cout<<"Your price for biscuit is :"<<y4<<endl;
                        break;

                    }
                    break;
                    }
                    break;
                }
                break;
            }
            break;
            {
                case 6:
                {
                    cout<<"‘Thoda Aur Chocolaty’ and ‘Thoda Aur Crunchy’."<<endl;
                    cout<<"Press 1 for 10 Rupees Packet:"<<endl;
                cout<<"Press 2 for 20 Rupees Packet:"<<endl;
                    cout<<"Selected packet is:"<<endl;
                    cin>>p6;   //packet 6
                    switch(p6)
                    {
                    case 1:
                    {
                        cout<<"How many Packets u want to buy:"<<endl;
                        cin>>n6;         //num input 6
                        int x5=10;
                        y5=n6*x5;
                        cout<<y5<<endl;
                        cout<<"Your price for biscuit is :"<<y5<<endl;

                        break;
                    }
                    break;
                    case 2:
                    {
                        cout<<"How many Packets u want to buy:"<<endl;
                        cin>>n6;
                        int x5=20;
                        y5=n6*x5;
                        cout<<y5<<endl;
                        cout<<"Your price for biscuit is :"<<y5<<endl;
                        break;

                    }
                    break;
                    }
                    break;
                }
                break;
            }
            break;
            {
                case 7:
                {
                    cout<<"NAUGTHY JAM = JIM JAM"<<endl;
                    cout<<"Press 1 for 10 Rupees Packet:"<<endl;
                cout<<"Press 2 for 20 Rupees Packet:"<<endl;
                    cout<<"Selected packet is:"<<endl;
                    cin>>p7;   //packet 7
                    switch(p7)
                    {
                    case 1:
                    {
                        cout<<"How many Packets u want to buy:"<<endl;
                        cin>>n7;  //num input 7
                        int x6=10;
                        y6=n7*x6;
                        cout<<y6<<endl;
                        cout<<"Your price for biscuit is :"<<y6<<endl;

                        break;
                    }
                    break;
                    case 2:
                    {
                        cout<<"How many Packets u want to buy:"<<endl;
                        cin>>n7;
                        int x6=20;
                        y6=n7*x6;
                        cout<<y6<<endl;
                        cout<<"Your price for biscuit is :"<<y6<<endl;
                        break;

                    }
                    break;
                    }
                    break;
                }
                break;
            }
            break;
            {
                case 8:
                {
                    cout<<"Kaju, Badam, Pista, Butter se bhara – Good Day yaani acha acha"<<endl;
                   cout<<"Press 1 for 10 Rupees Packet:"<<endl;
                cout<<"Press 2 for 20 Rupees Packet:"<<endl;
                    cout<<"Selected packet is:"<<endl;
                    cin>>p8;  //packet 8
                    switch(p8)
                    {
                    case 1:
                    {
                        cout<<"How many Packets u want to buy:"<<endl;
                        cin>>n8;   //num input 8
                        int x7=10;
                        y7=n8*x7;
                        cout<<y7<<endl;
                        cout<<"Your price for biscuit is :"<<y7<<endl;

                        break;
                    }
                    break;
                    case 2:
                    {
                        cout<<"How many Packets u want to buy:"<<endl;
                        cin>>n8;
                        int x7=20;
                        y7=n8*x7;
                        cout<<y7<<endl;
                        cout<<"Your price for biscuit is :"<<y7<<endl;
                        break;

                    }
                    break;
                    }
                    break;
                }
                break;
            }
            break;
            {
                case 9:
                {
                    cout<<"Great Choice"<<endl;
                   cout<<"Press 1 for 10 Rupees Packet:"<<endl;
                cout<<"Press 2 for 20 Rupees Packet:"<<endl;
                    cout<<"Selected packet is:"<<endl;
                    cin>>p9; //packet 9
                    switch(p9)
                    {
                    case 1:
                    {
                        cout<<"How many Packets u want to buy:"<<endl;
                        cin>>n9;   //num input 9
                        int x8=10;
                        y8=n9*x8;
                        cout<<y8<<endl;
                        cout<<"Your price for biscuit is :"<<y8<<endl;

                        break;
                    }
                    break;
                    case 2:
                    {
                        cout<<"How many Packets u want to buy:"<<endl;
                        cin>>n9;
                        int x8=20;
                        y8=n9*x8;
                        cout<<y8<<endl;
                        cout<<"Your price for biscuit is :"<<y8<<endl;
                        break;

                    }
                    break;
                    }
                    break;
                }
                break;
            }
            break;
            {
                case 10:
                {
                    cout<<"Great Choice"<<endl;
                   cout<<"Press 1 for 10 Rupees Packet:"<<endl;
                cout<<"Press 2 for 20 Rupees Packet:"<<endl;
                    cout<<"Selected packet is:"<<endl;
                    cin>>p10;  //packet 10
                    switch(p10)
                    {
                    case 1:
                    {
                        cout<<"How many Packets u want to buy:"<<endl;
                        cin>>n10;
                        int x9=10;
                        y9=n10*x9;  //num input 10
                        cout<<y9<<endl;
                        cout<<"Your price for biscuit is :"<<y9<<endl;

                        break;
                    }
                    break;
                    case 2:
                    {
                        cout<<"How many Packets u want to buy:"<<endl;
                        cin>>n10;
                        int x9=20;
                        y9=n10*x9;
                        cout<<y9<<endl;
                        cout<<"Your price for biscuit is :"<<y9<<endl;
                        break;

                    }
                    break;
                    }
                    break;
                }
                break;
            }
            break;
            {
                case 11:
                {
                    cout<<"Great Choice"<<endl;
                  cout<<"Press 1 for 10 Rupees Packet:"<<endl;
                cout<<"Press 2 for 20 Rupees Packet:"<<endl;
                    cout<<"Selected packet is:"<<endl;
                    cin>>p11; //packet 11
                    switch(p11)
                    {
                    case 1:
                    {
                        cout<<"How many Packets u want to buy:"<<endl;
                        cin>>n11;  //num input 11
                        int x10=10;
                        y10=n11*x10;
                        cout<<y10<<endl;
                        cout<<"Your price for biscuit is :"<<y10<<endl;

                        break;
                    }
                    break;
                    case 2:
                    {
                        cout<<"How many Packets u want to buy:"<<endl;
                        cin>>n11;
                        int x10=20;
                        y10=n11*x10;
                        cout<<y10<<endl;
                        cout<<"Your price for biscuit is :"<<y10<<endl;
                        break;

                    }
                    break;
                    }
                    break;
                }
                break;
            }
break;

            }
            break;
        }
        break;
        case 2:
        {
            cout<<"Apples"<<endl;
            cout<<"Mango"<<endl;
            cout<<"Banana"<<endl;
            cout<<"Lady Finger"<<endl;
            cout<<"Potato"<<endl;
            cout<<"Beans"<<endl;
            cout<<"Capsicum"<<endl;
            cin>>fv; //fruits and vegetables
            switch(fv)
            {
            case 1:
            {
                cout<<"An apple a day keeps the doctor away"<<endl;
                cout<<"Press 1 for 500g for Rs.70"<<endl;
                cout<<"Press 2 for 1 kg for Rs.120"<<endl;
                cout<<"Enter Quantity"<<endl;
                cin>>fv1;   //fruits and vegetables 1
                switch(fv1)
                {
                case 1:
                {
                    cout<<"How many apples do you want to buy?"<<endl;
                    cin>>f;  //fruits
                    int a=70 ;
                    b=f*a;
                    cout<<"The rates of apples is:"<<b<<endl;
                    break;
                }
                break;
                case 2:
                {
                    cout<<"How many apples do you want to buy?"<<endl;
                    cin>>f;
                    int a=120;
                    b=f*a;
                    cout<<"The rates of apples is:"<<b<<endl;
                    break;
                }
                break;
                }
                break;
            }
            break;
            {
                case 2:
                {
                    cout<<"Mango Frooti - Fresh and Juicy"<<endl;
                    cout<<"Press 1 for Half Dozen for Rs.220"<<endl;
                    cout<<"Press 2 for 1 Dozen for Rs.400"<<endl;
                    cout<<"Enter Quantity"<<endl;
                    cin>>fv2; //fruits and vegetables 2
                    switch(fv2)
                    {
                    case 1:
                    {
                        cout<<"How many mangoes do you want to buy?"<<endl;
                        cin>>f1;  //fruit 1
                        int a1=220 ;
                        b1=f1*a1;
                        cout<<"The rates of mangoes is:"<<b1<<endl;
                        break;
                    }
                    case 2:
                    {
                        cout<<"How many mangoes do you want to buy?"<<endl;
                        cin>>f1;
                        int a1=400;
                        b1=f1*a1;
                        cout<<"The rates of mango is:"<<b1<<endl;
                        break;
                    }
                    break;
                    }
                    break;
                    {
                        case 3:
                        {
                            cout<<"Na-Na-Na BANANA"<<endl;
                            cout<<"Press 1 for Half Dozen for Rs.20"<<endl;
                            cout<<"Press 2 for 1 Dozen for Rs.40"<<endl;
                            cout<<"Enter Quantity"<<endl;
                            cin>>fv3; //fruits and vegetables 3
                            switch(fv3)
                            {
                            case 1:
                            {
                                cout<<"How many bananas do you want to buy?"<<endl;
                                cin>>f2;  //fruits 2
                                int a2=20 ;
                                b2=f2*a2;
                                cout<<"The rates of bananas is:"<<b2<<endl;
                                break;
                            }
                            break;
                            case 2:
                            {
                                cout<<"How many bananas do you want to buy?"<<endl;
                                cin>>f2;
                                int a2=40;
                                b2=f2*a2;
                                cout<<"The rates of banana is:"<<b2<<endl;
                                break;
                            }
                            break;
                            }
                            break;
                        }
                        break;
                    }
                    break;
                    {
                        case 4:
                        {
                            cout<<"Your choice is ladyfinger"<<endl;
                            cout<<"Press 1 to buy 250g for Rs.10"<<endl;
                            cout<<"Press 2 to buy 500g for Rs.20"<<endl;
                            cout<<"Press 3 to buy 750g for Rs.30"<<endl;
                            cout<<"Press 4 to buy 1kg for Rs.40"<<endl;
                            cout<<"Enter Quantity"<<endl;
                            cin>>fv4;  //fruits and vegetables 4
                            switch(fv4)
                            {
                            case 1:
                            {
                                cout<<"How much ladyfinger do you want to buy?"<<endl;
                                cin>>f3; //fruits 3
                                int a3=10 ;
                                b3=f3*a3;
                                cout<<"The rates of ladyfinger is:"<<b3<<endl;
                                break;
                            }
                            case 2:
                            {
                                cout<<"How many ladyfinger do you want to buy?"<<endl;
                                cin>>f3;
                                int a3=20;
                                b3=f3*a3;
                                cout<<"The rates of ladyfinger is:"<<b3<<endl;
                                break;
                            }
                            case 3:
                            {
                                cout<<"How much ladyfinger do you want to buy?"<<endl;
                                cin>>f3;
                                int a3=30 ;
                                b3=f3*a3;
                                cout<<"The rates of ladyfinger is:"<<b3<<endl;
                                break;
                            }
                            case 4:
                            {
                                cout<<"How many ladyfinger do you want to buy?"<<endl;
                                cin>>f3;
                                int a3=40;
                                b3=f3*a3;
                                cout<<"The rates of ladyfinger is:"<<b3<<endl;
                                break;
                            }
                            break;
                            }
                            break;
                        }
                        break;
                    }
                    break;
                    {
                        case 5:
                        {
                            cout<<"Your choice is potato"<<endl;
                            cout<<"Press 1 for buying 500g for Rs.12"<<endl;
                            cout<<"Press 2 for buying 1kg for Rs.25"<<endl;
                            cout<<"Enter Quantity"<<endl;
                            cin>>fv5; //fruits and vegetables 5
                            switch(fv5)
                            {
                            case 1:
                            {
                                cout<<"How many potato do you want to buy?"<<endl;
                                cin>>f4;
                                int a4=12 ;
                                b4=f4*a4;
                                cout<<"The rates of potato is:"<<b4<<endl;
                                break;
                            }
                            break;
                            case 2:
                            {
                                cout<<"How many potato do you want to buy?"<<endl;
                                cin>>f4;
                                int a4=25;
                                b4=f4*a4;
                                cout<<"The rates of potato is:"<<b4<<endl;
                                break;
                            }
                            break;
                            }
                            break;
                        }
                        break;
                    }
                    break;
                    {
                        case 6:
                        {
                            cout<<"Your choice is beans"<<endl;
                            cout<<"Press 1 to buy 500g of beans for Rs.25"<<endl;
                            cout<<"Press 2 to buy 1kg of beans for Rs.50"<<endl;
                            cout<<"Enter Quantity"<<endl;
                            cin>>fv6; //fruits and vegetables 6
                            switch(fv6)
                            {
                            case 1:
                            {
                                cout<<"How many beans do you want to buy?"<<endl;
                                cin>>f5;   //fruits 5
                                int a5=25 ;
                                b5=f5*a5;
                                cout<<"The rates of beans is:"<<b5<<endl;
                                break;
                            }
                            case 2:
                            {
                                cout<<"How many beans do you want to buy?"<<endl;
                                cin>>f5;
                                int a5=50;
                                b5=f5*a5;
                                cout<<"The rates of beans is:"<<b5<<endl;
                                break;
                            }
                            break;
                            }
                            break;
                        }
                        break;
                    }
                    break;
                    {
                        case 7:
                        {
                            cout<<"Your choice is capsicum"<<endl;
                            cout<<"Press 1 for 500g of capsicum for Rs.40"<<endl;
                            cout<<"Press 2 for 1kg of capsicum for Rs.80"<<endl;
                            cout<<"Enter Quantity"<<endl;
                            cin>>fv7;  //fruits and vegetables 7
                            switch(fv7)
                            {
                            case 1:
                            {
                                cout<<"How many capsicum do you want to buy?"<<endl;
                                cin>>f6; //fruits 6
                                int a6=40;
                                b6=f6*a6;
                                cout<<"The rates of capsicum is:"<<b6<<endl;
                                break;
                            }
                            case 2:
                            {
                                cout<<"How many capsicum do you want to buy?"<<endl;
                                cin>>f6;
                                int a6=80;
                                b6=f6*a6;
                                cout<<"The rates of capsicum is:"<<b6<<endl;
                                break;
                            }
                            break;
                            }
                            break;
                        }
                        break;
                    }
                    break;
                }
                break;
            }
            break;
            }
            break;
        }
        case 3:
        {
            cout<<"1.Fruit N Nut"<<endl;
            cout<<"2.5-Star"<<endl;
            cout<<"3.Kit Kat"<<endl;
            cout<<"4.Gems"<<endl;
            cout<<"5.Nutties"<<endl;
            cout<<"Enter the chocolate you want to have:"<<endl;
            cin>>c;
            switch(c)
            {
            case 1:
            {
                cout<<"Your choice is fruit n nut"<<endl;
                cout<<"Press 1 to buy Fruit N nut for Rs.40"<<endl;
                cout<<"Enter number of fruit n nuts you want to buy?"<<endl;
                cin>>ch1;   //chocolate 1
                switch(ch1)
                {
                case 1:
                {
                    cout<<"How many Fruit N Nuts you want to buy?"<<endl;
                    cin>>c1;  //choco 1
                    int m1=40;
                    l1=c1*m1;
                    cout<<"The rate of fruit n nut is:"<<l1<<endl;
                    break;
                }
                break;
                }
                {
                    case 2:
                    {
                        cout<<"Great Choice"<<endl;
                        cout<<"Press 1 for 5-Star which is for Rs.5"<<endl;
                        cout<<"Press 2 for 5-Star which is for Rs.10"<<endl;
                        cout<<"Enter number of 5-Stars you want to buy?"<<endl;
                        cin>>ch2;  //chocolate 2
                        switch(ch2)
                        {
                        case 1:
                        {
                            cout<<"How many 5-Star you want to buy?"<<endl;
                            cin>>c2;  //choco 2
                            int m2=5;
                            l2=c2*m2;
                            cout<<"The rate of 5-star is:"<<l2<<endl;
                            break;
                        }
                        case 2:
                        {
                            cout<<"How many 5-Star you want to buy?"<<endl;
                            cin>>c2;
                            int m2=10;
                            l2=c2*m2;
                            cout<<"The rate of 5-star is:"<<l2<<endl;
                            break;
                        }
                        break;
                        }
                        break;
                    }
                    break;
                }
                break;
                {
                    case 3:
                    {
                        cout<<"Great Choice"<<endl;
                        cout<<"Press 1 for Kit Kat of Rs.5"<<endl;
                        cout<<"Press 2 for Kit Kat of Rs.10"<<endl;
                        cout<<"Enter number of Kit Kats you want to buy?"<<endl;
                        cin>>ch3;  //chocolate 3
                        switch(ch3)
                        {
                        case 1:
                        {
                            cout<<"How many Kit-Kat you want to buy?"<<endl;
                            cin>>c3;  //choco 3
                            int m3=5;
                            l3=c3*m3;
                            cout<<"The rate of Kit Kat is:"<<l3<<endl;
                            break;
                        }
                        case 2:
                        {
                            cout<<"How many Kit-Kat you want to buy?"<<endl;
                            cin>>c3;
                            int m3=10;
                            l3=c3*m3;
                            cout<<"The rate of Kit-Kat is:"<<l3<<endl;
                            break;
                        }
                        break;
                        }
                        break;
                    }
                    break;
                }
                break;
                {
                    case 4:
                    {
                        cout<<"Your choice is Gems"<<endl;
                        cout<<"Press 1 for 5 Rs. Gems "<<endl;
                        cout<<"Press 2 for 10 Rs. Gems "<<endl;
                        cout<<"Enter number of gems you want to buy?"<<endl;
                        cin>>ch4;  //chocolate 4
                        switch(ch4)
                        {
                        case 1:
                        {
                            cout<<"How many Gems you want to buy?"<<endl;
                            cin>>c4;  //choco 4
                            int m4=5;
                            l4=c4*m4;
                            cout<<"The rate of Gems is:"<<l4<<endl;
                            break;
                        }
                        case 2:
                        {
                            cout<<"How many Gems you want to buy?"<<endl;
                            cin>>c4;
                            int m4=10;
                            l4=c4*m4;
                            cout<<"The rate of Gems is:"<<l4<<endl;
                            break;
                        }
                        break;
                        }
                        break;
                    }
                    break;
                }
                break;
                {
                    case 5:
                    {
                        cout<<"Your choice is nutties"<<endl;
                        cout<<"Press 1 for Nutties which is for Rs.45"<<endl;
                        cout<<"Enter number of chocolates you want to buy?"<<endl;
                        cin>>ch5;  //chocolate 5
                        switch(ch5)
                        {
                        case 1:
                        {
                            cout<<"How many Nutties you want to buy?"<<endl;
                            cin>>c5;   //choco 5
                            int m5=45;
                            l5=c5*m5;
                            cout<<"The rate of Nutties is:"<<l5<<endl;
                            break;
                        }
                        break;
                        }
                        break;
                    }
                    break;
                }
                break;
            }
            break;
            }
            break;
        }
break;
        }
break;
        case 2:
        {
            cout<<"Press 0 for Soft drinks"<<endl;
            cout<<"Press 1 for Cold Drinks"<<endl;
            cout<<"Pick up the drink which you would like to have ?"<<endl;
            cin>>dr;   //drink
            switch(dr)
            {
            case 0:
            {
                cout<<"Press 1 for Thumps Up"<<endl;
                cout<<"Press 2 for Sprite"<<endl;
                cout<<"Press 3 for Miranda"<<endl;
                cout<<"Press 4 for 7 up"<<endl;
                cout<<"Press 5 for Mountain Dew"<<endl;
                cout<<"Enter the soft drink"<<endl;
                cin>>sdr;   //soft drink
                switch(sdr)
                {
                case 1:
                {
                    cout<<"Your choice is thumps up"<<endl;
                    cout<<"Press 1 for 200 ml of thumps up which is for RS.20"<<endl;
                    cout<<"Press 2 for 1.25 l of thumps up which is for RS.65"<<endl;
                    cout<<"Press 3 for 2.25 l of thumps up which is for RS.130"<<endl;
                    cout<<"Enter number of softdrinks you want to buy"<<endl;
                    cin>>sdr1;
                    switch(sdr1)
                    {
                    case 1:
                    {
                        cout<<"How many thumps up bottles you want to buy?"<<endl;
                        cin>>s1;
                        int d1=20;
                        r1=s1*d1;
                        cout<<"The rate of thumps up is:"<<r1<<endl;
                        break;
                    }
                    break;
                    case 2:
                    {
                        cout<<"How many thumps up bottles you want to buy?"<<endl;
                        cin>>s1;
                        int d1=65;
                        r1=s1*d1;
                        cout<<"The rate of thumps up is:"<<r1<<endl;
                        break;
                    }
                    break;
                    case 3:
                    {
                        cout<<"How many thumps up bottles you want to buy?"<<endl;
                        cin>>s1;
                        int d1=130;
                        r1=s1*d1;
                        cout<<"The rate of thumps is:"<<r1<<endl;
                        break;
                    }
                    break;
                    }
                    break;
                }
                break;
                }
                break;
                {
                    case 2:
                    {
                        cout<<"Your choice is sprite"<<endl;
                        cout<<"Press 1 for 200 ml sprite which is for RS.20"<<endl;
                        cout<<"Press 2 for 1.25 l sprite which is for RS.65"<<endl;
                        cout<<"Press 3 for 2.25 l sprite which is for RS.130"<<endl;
                        cout<<"Enter number of softdrinks you want to buy"<<endl;
                        cin>>sdr2;
                        switch(sdr2)
                        {
                        case 1:
                        {
                            cout<<"How many sprite bottles you want to buy?"<<endl;
                            cin>>s2;
                            int d2=20;
                            r2=s2*d2;
                            cout<<"The rate of sprite is:"<<r2<<endl;
                            break;
                        }
                        break;
                        case 2:
                        {
                            cout<<"How many sprite bottles you want to buy?"<<endl;
                            cin>>s2;
                            int d2=65;
                            r2=s2*d2;
                            cout<<"The rate of sprite is:"<<r2<<endl;
                            break;
                        }
                        break;
                        case 3:
                        {
                            cout<<"How many sprite bottles you want to buy?"<<endl;
                            cin>>s2;
                            int d2=130;
                            r2=s2*d2;
                            cout<<"The rate of sprite is:"<<r2<<endl;
                            break;
                        }
                        break;
                        }
                        break;
                    }
                    break;
                }
                break;
                {
                    case 3:
                    {
                        cout<<"Your choice is mirinda"<<endl;
                        cout<<"Press 1 for 200 ml mirinda which is for RS.20"<<endl;
                        cout<<"Press 2 for 1.25 l mirinda which is for RS.65"<<endl;
                        cout<<"3.2.25 l for RS.130"<<endl;
                        cout<<"Enter number of softdrinks you want to buy"<<endl;
                        cin>>sdr3;
                        switch(sdr3)
                        {
                        case 1:
                        {
                            cout<<"How many miranda bottles you want to buy?"<<endl;
                            cin>>s3;
                            int d3=20;
                            r3=s3*d3;
                            cout<<"The rate of miranda is:"<<r3<<endl;
                            break;
                        }
                        break;
                        case 2:
                        {
                            cout<<"How many miranda bottles you want to buy?"<<endl;
                            cin>>s3;
                            int d3=65;
                            r3=s3*d3;
                            cout<<"The rate of miranda is:"<<r3<<endl;
                            break;
                        }
                        break;
                        case 3:
                        {
                            cout<<"How many miranda bottles you want to buy?"<<endl;
                            cin>>s3;
                            int d3=130;
                            r3=s3*d3;
                            cout<<"The rate of miranda is:"<<r3<<endl;
                            break;
                        }
                        break;
                        }
                        break;
                    }
                    break;
                }
                break;
                {
                    case 4:
                    {
                        cout<<"Your choice is 7 up"<<endl;
                        cout<<"Press 1 for 200 ml 7 up which is for RS.20"<<endl;
                        cout<<"Press 2 for 1.25 l 7 up which is for RS.65"<<endl;
                        cout<<"Press 3 for 2.25 l 7 up which is for RS.130"<<endl;
                        cout<<"Enter number of softdrinks you want to buy"<<endl;
                        cin>>sdr4;
                        switch(sdr4)
                        {
                        case 1:
                        {
                            cout<<"How many 7 up bottles you want to buy?"<<endl;
                            cin>>s4;
                            int d4=20;
                            r4=s4*d4;
                            cout<<"The rate of 7 up is:"<<r4<<endl;
                            break;
                        }
                        break;
                        case 2:
                        {
                            cout<<"How many 7 up bottles you want to buy?"<<endl;
                            cin>>s4;
                            int d4=65;
                            r4=s4*d4;
                            cout<<"The rate of 7 up is:"<<r4<<endl;
                            break;
                        }
                        break;
                        case 3:
                        {
                            cout<<"How many 7 up bottles you want to buy?"<<endl;
                            cin>>s4;
                            int d4=130;
                            r4=s4*d4;
                            cout<<"The rate of 7 up is:"<<r4<<endl;
                            break;
                        }
                        break;
                        }
                        break;
                    }
                    break;
                }
                break;
                case 5:
                {
                    cout<<"Your choice is Mountain Dew"<<endl;
                    cout<<"Press 1 for 200 ml mountain dew which is for RS.20"<<endl;
                    cout<<"Press 2 for 1.25 l mountain dew which is for RS.65"<<endl;
                    cout<<"Press 3 for 2.25 l mountain dew which is for RS.130"<<endl;
                    cout<<"Enter number of softdrinks you want to buy"<<endl;
                    cin>>sdr5;
                    switch(sdr5)
                    {
                    case 1:
                    {
                        cout<<"How many Mountain Dew bottles you want to buy?"<<endl;
                        cin>>s5;
                        int d5=20;
                        r5=s5*d5;
                        cout<<"The rate of 7 up is:"<<r5<<endl;
                        break;
                    }
                    break;
                    case 2:
                    {
                        cout<<"How many Mountain Dew bottles you want to buy?"<<endl;
                        cin>>s5;
                        int d5=65;
                        r5=s5*d5;
                        cout<<"The rate of Mountain Dew is:"<<r5<<endl;
                        break;
                    }
                    break;
                    case 3:
                    {
                        cout<<"How many Mountain Dew bottles you want to buy?"<<endl;
                        cin>>s5;
                        int d5=130;
                        r5=s5*d5;
                        cout<<"The rate of Mountain Dew is:"<<r5<<endl;
                        break;
                    }
                    break;
                    }
                    break;
                }
                break;
            }
            break;
            case 1:
            {
                cout<<"Press 1 for Pulpy Orange"<<endl;
                cout<<"Press 2 for Amul Kool-Kesar"<<endl;
                cout<<"Press 3 for Smooth"<<endl;
                cout<<"Enter the cold drink u would like to drink"<<endl;
                cin>>cd;
                switch(cd)
                {
                case 1:
                {
                    cout<<"Your choice is pulpy orange"<<endl;
                    cout<<"press 1 for small bottle of fresh pulpy orange which is for Rs.10"<<endl;
                    cout<<"press 2 for large bottle of pulpy orange which is for Rs.20"<<endl;
                    cout<<"Enter no.of cold drinks you want to have?"<<endl;
                    cin>>cd;
                    switch(cd)
                    {
                    case 1:
                    {
                        cout<<"How many bottles of pulpy orange u want to buy?"<<endl;
                        cin>>cd1;
                        int o1=10;
                        j1=cd1*o1;
                        cout<<"The rate of pulpy orange is:"<<j1<<endl;
                        break;
                    }
                    break;
                    case 2:
                        {
                        cout<<"How many bottles of pulpy orange u want to buy?"<<endl;
                        cin>>cd1;
                        int o1=20;
                        j1=cd1*o1;
                        cout<<"The rate of pulpy orange is:"<<j1<<endl;
                        break;
                        }
                    break;
                    }
                    break;
                }
                break;
                 {
                case 2:
                {
                    cout<<"Your choice is amul kool kesar"<<endl;
                    cout<<"Press 1 for small bottle of amul kool-kesar which is for Rs.10"<<endl;
                    cout<<"Press 2 for large bottle of amul kool-kesar which is for Rs.20"<<endl;
                    cout<<"Enter no.of cold drinks you want to have?"<<endl;
                    cin>>cd;
                    switch(cd)
                    {
                    case 1:
                    {
                        cout<<"How many bottles of amul kool u want to buy?"<<endl;
                        cin>>cd1;
                        int o1=10;
                        j1=cd1*o1;
                        cout<<"The rate of amul-kool is:"<<j1<<endl;
                        break;
                    }
                    break;
                    case 2:
                        {
                        cout<<"How many bottles of amul kool u want to buy?"<<endl;
                        cin>>cd1;
                        int o1=20;
                        j1=cd1*o1;
                        cout<<"The rate of amul-kool is:"<<j1<<endl;
                        break;
                        }
                    break;
                    }
                    break;
                }
                break;
                }
                break;
                case 3:
                {
                    cout<<"Your choice is smooth"<<endl;
                    cout<<"press 1 for small bottle of smooth which is for Rs.10"<<endl;
                    cout<<"press 2 for large bottle of smooth which is for Rs.20"<<endl;
                    cout<<"Enter no.of cold drinks you want to have?"<<endl;
                    cin>>cd;
                    switch(cd)
                    {
                    case 1:
                    {
                        cout<<"How many bottles of smooth u want to buy?"<<endl;
                        cin>>cd1;
                        int o1=10;
                        j1=cd1*o1;
                        cout<<"The rate of smooth is:"<<j1<<endl;
                        break;
                    }
                    break;
                    case 2:
                        {
                             cout<<"How many bottles of smooth u want to buy?"<<endl;
                        cin>>cd1;
                        int o1=20;
                        j1=cd1*o1;
                        cout<<"The rate of smooth is:"<<j1<<endl;
                        break;
                        }
                    break;
                    }
                    break;
                }
                break;

            }
            break;
            }
            break;
        }
        break;
                    case 3:
        {
            cout<<"Press 1 for Powder"<<endl;
            cout<<"Press 2 for Perfume"<<endl;
            cout<<"Press 3 for Shampoo + Conditioner"<<endl;
            cout<<"Enter the beauty product you would like to have?"<<endl;
            cin>>bp;
            switch(bp)
            {

case 11:
    {
      cout<<"Press 1 for Ponds"<<endl;
      cout<<"Press 2 for Yardley"<<endl;
      cout<<"Press 3 for Johnsons Baby"<<endl;
      cout<<"Enter the powder you want to buy?"<<endl;
      cin>>pd;
      switch(pd)
      {
      case 1:
        {
            cout<<"How many bottles of ponds powder you want to buy?"<<endl;
            cin>>pd1;
            int p3=30;
            pd2=pd1*30;
            cout<<"The total cost of powder bottle is:"<<pd2<<endl;
            break;
        }
        break;

      break;
    {
      case 2:
        {
            cout<<"How many bottles of yardley powder you want to buy?"<<endl;
            cin>>pd1;
            int p3=60;
            pd2=pd1*60;
            cout<<"The total cost of yardley is:"<<pd2<<endl;
            break;
        }
        break;
      }
      break;
      {
      case 3:
        {
            cout<<"How many bottles of johnsons baby powder you want to buy?"<<endl;
            cin>>pd1;
            int p3=45;
            pd2=pd1*45;
            cout<<"The total cost of johnsons baby is:"<<pd2<<endl;
            break;
        }
break;
      }
break;
    }
break;
    }
    break;
      case 2:
        {
            cout<<"Press 1 for Charlie"<<endl;
            cout<<"Press 12 for Brut"<<endl;
            cout<<"Press 113 for Black Orchid"<<endl;
            cout<<"Enter the perfume you want to buy?"<<endl;
            cin>>pe;

            switch(pe)
            {
            case 1:
                {
                      cout<<"How many bottles of charlie perfume do you want to buy?"<<endl;
                      cin>>P;
                      int P2=100;
                      P1=P*100;
                      cout<<"The total cost of charlie perfume is:"<<P1<<endl;
                      break;
                }
                break;
            }
            break;
            {
            case 12:
                {
                      cout<<"How many bottles of Brut perfume do you want to buy?"<<endl;
                      cin>>P;
                      int P2=50;
                      P1=P*50;
                      cout<<"The total cost of brut perfume is:"<<P1<<endl;
                      break;
                }
                break;
            }
            break;
             {
            case 113:
                {
                      cout<<"How many bottles of Black Orchid perfume do you want to buy?"<<endl;
                      cin>>P;
                      int P2=150;
                      P1=P*150;
                      cout<<"The total cost of Black Orchid perfume is:"<<P1<<endl;
                      break;
                }
                break;
            }
            break;
        }
break;
            case 3:
                {
                    cout<<"Press 11 for Lakme"<<endl;
                    cout<<"Press 21 for Pantene"<<endl;
                    cout<<"Press 33 for Loreal"<<endl;
                    cout<<"Enter the shampoo and conditioner you want to buy:"<<endl;
                    cin>>sc;
                    switch(sc)
                    {
                    case 11:
                        {
                            cout<<"How many bottles of lakme shampoo and conditioner do you want to buy?"<<endl;
                            cin>>sc1;
                            int sc2=120;
                            sc3=sc1*120;
                            cout<<"The total cost of lakme shampoo and conditioner is:"<<sc3<<endl;
                            break;
                        }
                        break;
                    }
                    break;
                     {
                    case 21:
                        {
                            cout<<"How many bottles of Pantene shampoo and conditioner do you want to buy?"<<endl;
                            cin>>sc1;
                            int sc2=110;
                            sc3=sc1*110;
                            cout<<"The total cost of Pantene shampoo and conditioner is:"<<sc3<<endl;
                            break;
                        }
                        break;
                    }
                    break;
                     {
                    case 33:
                        {
                            cout<<"How many bottles of Loreal shampoo and conditioner do you want to buy?"<<endl;
                            cin>>sc1;
                            int sc2=130;
                            sc3=sc1*130;
                            cout<<"The total cost of Loreal shampoo and conditioner is:"<<sc3<<endl;
                            break;
                        }
                        break;
                    }
                    break;
                }
                break;
        }
        break;
        }
        break;
    }
    break;
    }
    break;
}
cout<<"\n \n \n Thank You For Shopping With Us"<<endl;

cout<<"\n \n VISIT AGAIN"<<endl;
}








