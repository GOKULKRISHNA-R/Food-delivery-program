#include <iostream>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

using namespace std ;

void text1();
void text2();
void text3();
void text4();
void text5();
void hotel_owner();
int particular_hotel_owner(int x);
void costumer();
int particular_customer(int z);
void check_user_details();
void company_account_details();
void hard_code_assign();
void rewardpts(int y,int t,int z);

class hotel 
{
    // 1 -> authentic
    // 2 -> fastfood
    // 3 -> normal
    public :
        string name_of_item[20] , category_of_item[20] ;
        string owner_name , hotel_address , hotel_name ;
        int food_item_code[20] , category_of_hotel , item_quantity[20] , offer_on_item[20];
        float discount_on_bill[3] , item_price[20] ;
        int number_of_items[3] , reward_points ;
}o[3];

class customer
{
    // 1 -> elite
    // 2 -> special
    // 3 -> normal
    public :
        string name ;
        int customer_category , reward_points  ;
        float billvalue=0 , delivery_charge_to_our_company=0 , bill_rate_without_discount=0 , wallet;
}c[3];

int main()
{
    while(1)
    {
        hard_code_assign();
        int firstchoice;
        text1();
        cout<<"\n---CHOOSE---"<<endl;
        cin>>firstchoice;
        switch (firstchoice)
        {
        case 1 :
            hotel_owner();
            break;
        case 2 :
            costumer();
            break;
        case 3 :
            check_user_details();
            break;
        case 4 :
            company_account_details();
            break;
        case 5 :
            return 0;
            break;
        default:
            cout<<"**CHOOSE A CHOICE WITHIN 5**"<<endl;
            break;
        }
    }
    return 0 ;
}

void hard_code_assign ()
{
    // 1 -> authentic
    // 2 -> fastfood
    // 3 -> normal  
    o[0].hotel_name = "ANJAPPAR(authentic)";
    o[0].hotel_address = "MADURAI";
    o[0].owner_name = "GOKUL KRISHNA";
    o[0].category_of_hotel=1;
    o[1].hotel_name = "MUNIYANDI VILAS" ;
    o[1].hotel_address = "CHENNAI";
    o[1].owner_name = "MOHANA KRISHNA";
    o[1].category_of_hotel=3;
    o[2].hotel_name = "HOT CHINESE(fast food)";
    o[2].hotel_address = "SALEM";
    o[2].owner_name = "MAHALAKSHMI";
    o[2].category_of_hotel=2;
    // 1 -> elite
    // 2 -> special
    // 3 -> normal
    c[0].name = "RAJU(elite)--MADURAI";
    c[0].customer_category=1;
    c[0].wallet = 1000 ;
    c[1].name = "ARUNA(special)--SALEM";
    c[1].customer_category=2;
    c[1].wallet = 1000 ;
    c[2].name = "KANI--CHENNAI";
    c[2].customer_category=3;
    c[2].wallet = 1000 ;
}

void text1()
{
    cout<<"\n#############################"<<endl;
    cout<<"#~~~~ WELCOME TO ZOTATO ~~~~#"<<endl;
    cout<<"#~1 FOR RESTAURANT OWNER    #"<<endl;
    cout<<"#~2 FOR CUSTOMER            #"<<endl;
    cout<<"#~3 CHECKING USER DETAILS   #"<<endl;
    cout<<"#~4 COMPANY ACCOUNT DETAILS #"<<endl;
    cout<<"#~5 EXITTING                #"<<endl;
    cout<<"#############################"<<endl;
}

void text2()
{
    for(int i=0 ; i<3 ; i++)
    {
        cout<<i+1<<"."<<o[i].hotel_name<<" : "<<o[i].owner_name<<endl;
    }
}

void text3()
{
    cout<<"\n###############################"<<endl;
    cout<<"#~1 TO ADD ITEM               #"<<endl;
    cout<<"#~2 TO EDIT ITEM              #"<<endl;
    cout<<"#~3 PRINT REWARDS             #"<<endl;
    cout<<"#~4 TO MAKE DISCOUNT ON BILLS #"<<endl;
    cout<<"#~5 EXITTING                  #"<<endl;
    cout<<"###############################"<<endl;
}

void text4()
{
    cout<<"\n###################################"<<endl;
    cout<<"#~~ CHOOSE AN ATTRIBUTE TO EDIT ~~#"<<endl;
    cout<<"#~1 NAME                          #"<<endl;
    cout<<"#~2 PRICE                         #"<<endl;
    cout<<"#~3 QUANTITY                      #"<<endl;
    cout<<"#~4 OFFER                         #"<<endl;
    cout<<"###################################"<<endl;
}

void text5()
{
    cout<<"\n###########################"<<endl;
    cout<<"#~~~~  CUSTOMER MENU  ~~~~#"<<endl;
    cout<<"#~1 TO SELECT RESTAURANT  #"<<endl;
    cout<<"#~2 TO CHECKOUT CART      #"<<endl;
    cout<<"#~3 REWARDS WON           #"<<endl;
    cout<<"#~4 EXITING               #"<<endl;
    cout<<"###########################"<<endl;
}

void hotel_owner()
{
    int secondchoice , func_argument ;
    text2();
    cout<<"\n---CHOOSE---"<<endl;
    cin>>secondchoice;
    func_argument = secondchoice;
    switch (secondchoice)
    {
    case 1:
        particular_hotel_owner(func_argument-1);
        break;
    case 2:
        particular_hotel_owner(func_argument-1);
        break;
    case 3:
        particular_hotel_owner(func_argument-1);
        break;
    default:
        cout<<"**CHOOSE A CHOICE WITHIN 3**"<<endl;
        break;
    }
}int particular_hotel_owner(int x)
{
    cout<<"\n~~WELCOME~~"<<o[x].owner_name<<endl;
    o[x].number_of_items[x]=0;
    int  i = 0 ;
    while (1)
    {   
        int thirdchoice;
        text3();
        cout<<"\n---CHOOSE---"<<endl;
        cin>>thirdchoice;
        switch (thirdchoice)
        {
        case 1 :
            {
                o[x].food_item_code[i]=i+1;
                cout<<"FOOD NAME (if you are in need of leaving space use underscore(_)):"<<endl;
                cin>>o[x].name_of_item[i];
                cout<<"FOOD ITEM PRICE :"<<endl;
                cin>>o[x].item_price[i];
                cout<<"FOOD QUANTITY :"<<endl;
                cin>>o[x].item_quantity[i];
                cout<<"FOOD CATEGORY (if you are in need of leaving space use underscore(_)):"<<endl;
                cin>>o[x].category_of_item[i];
                cout<<"OFFER ON THIS ITEM (in percent) :"<<endl;
                cin>>o[x].offer_on_item[i];
                cout<<o[x].food_item_code[i]<<" : "<<o[x].name_of_item[i]<<" : ";
                cout<<o[x].item_price[i]<<" : "<<o[x].offer_on_item[i]<<"% off :"<<o[x].category_of_item[i]<<endl;
                o[x].number_of_items[x]++;
                i++;
            }
            break;
        case 2 :
            {
                if(i<1)
                {
                    cout<<"FIRST ADD THE ITEM "<<endl;
                }else
                {
                    for(int j=0 ; j<i ; j++)
                    {
                        cout<<o[x].food_item_code[j]<<" : "<<o[x].name_of_item[j]<<" : "<<o[x].item_quantity[j]<<"nos : ";
                        cout<<o[x].item_price[j]<<" : "<<o[x].offer_on_item[j]<<"% off :"<<o[x].category_of_item[j]<<endl;
                    }
                    int y ;
                    cout<<"\nCHOOSE ITEM BY CODE "<<endl;
                    cin>>y;
                        text4();
                        int fourthchoice ;
                        cin>>fourthchoice;
                        switch (fourthchoice)
                        {
                        case 1 :
                            {
                                cout<<"ENTER NEW NAME (if you are in need of leaving space use underscore(_)):"<<endl;
                                string t;
                                cin>>t;
                                o[x].name_of_item[y-1]=t;             
                                cout<<o[x].food_item_code[y-1]<<" : "<<o[x].name_of_item[y-1]<<" : "<<o[x].item_quantity[y-1]<<"nos : ";
                                cout<<o[x].item_price[y-1]<<" : "<<o[x].offer_on_item[y-1]<<"% off :"<<o[x].category_of_item[y-1]<<endl;
                            }
                            break;
                        case 2 :
                            {
                                cout<<"ENTER NEW PRICE :"<<endl;
                                int t ;
                                cin>>t;
                                o[x].item_price[y-1]=t;             
                                cout<<o[x].food_item_code[y-1]<<" : "<<o[x].name_of_item[y-1]<<" : "<<o[x].item_quantity[y-1]<<"nos : ";
                                cout<<o[x].item_price[y-1]<<" : "<<o[x].offer_on_item[y-1]<<"% off :"<<o[x].category_of_item[y-1]<<endl;
                            }
                            break;
                        case 3 :
                            {
                                cout<<"ENTER NEW QUANTITY :"<<endl;
                                int t ;
                                cin>>t;
                                o[x].item_quantity[y-1]=t;             
                                cout<<o[x].food_item_code[y-1]<<" : "<<o[x].name_of_item[y-1]<<" : "<<o[x].item_quantity[y-1]<<"nos : ";
                                cout<<o[x].item_price[y-1]<<" : "<<o[x].offer_on_item[y-1]<<"% off :"<<o[x].category_of_item[y-1]<<endl;
                            }
                            break;
                        case 4 :
                            {
                                cout<<"ENTER NEW OFFER :"<<endl;
                                int t ;
                                cin>>t;
                                o[x].offer_on_item[y-1]=t;             
                                cout<<o[x].food_item_code[y-1]<<" : "<<o[x].name_of_item[y-1]<<" : "<<o[x].item_quantity[y-1]<<"nos : ";
                                cout<<o[x].item_price[y-1]<<" : "<<o[x].offer_on_item[y-1]<<"% off :"<<o[x].category_of_item[y-1]<<endl;
                            }
                            break;
                        default:
                            cout<<"**CHOOSE A CHOICE WITHIN 4**"<<endl;
                            break;
                        }
                }
            }
            break;
        case 3 :
            {
                cout<<"YOUR REWARD POINTS : "<<o[x].reward_points<<endl;
            }
            break;
        case 4 :
            {
                if(o[x].category_of_hotel == 3)
                {
                    cout<<"YOUR HOTEL IS NORMAL HOTEL AND SO THIS PART IS NOT ELLIGIBLE"<<endl;
                }else
                {
                    cout<<"OFFER ON BILL VALUE(in percentage) "<<endl;
                    cin>>o[x].discount_on_bill[x];
                    cout<<o[x].discount_on_bill[x]<<"% discount"<<endl;
                }
            }
            break;
        case 5 :
            return 0;
            break;
        default:
            cout<<"**CHOOSE A CHOICE WITHIN 5**"<<endl;
            break;
        }
    }
}

void rewardpts(int y , int t , int z)
{
    int rp1 , rp2 ;
    if(o[t].category_of_hotel==1)
    {
        rp1=y/200;
        rp2=rp1*25;
    }else if(o[t].category_of_hotel==2)
    {
        rp1=y/150;
        rp2=rp1*10;
    }else if(o[t].category_of_hotel==3)
    {
        rp1=y/100;
        rp2=rp1*5;
    }
    o[t].reward_points=rp2;
    c[z].reward_points=rp2;
}

void costumer()
{
    for(int i=0;i<3;i++)
    {
        cout<<i+1<<"."<<c[i].name<<" : "<<endl;
    }
    cout<<"\n---CHOOSE---"<<endl;
    int fifthchoice ;
    cin>>fifthchoice;
    switch (fifthchoice)
    {
    case 1 :
        particular_customer(fifthchoice-1);
        break;
    case 2 :
        particular_customer(fifthchoice-1);
        break;
    case 3 :
        particular_customer(fifthchoice-1);
        break;
    case 4 :
        break;
    default:
        cout<<"**CHOOSE A CHOICE WITHIN 4**"<<endl;
        break;
    }
}

int particular_customer(int z)
{
    cout<<"--WELCOME--"<<c[z].name<<endl;
    int i = 0 ;
    while (1)
    {
        int sixth_choice , t /* t = hotel indicator */ , k[20] , l[20];
        float bill_1=0,bill_2,bill_3,bill_4;
        text5();
        cout<<"\n---CHOOSE---"<<endl;
        cin>>sixth_choice;
        switch (sixth_choice)
        {
        case 1 :
            {
                cout<<"~~CHOOSE RESTRAURENT~~"<<endl;
                for(int i=0 ; i<3 ; i++)
                {
                    cout<<i+1<<"."<<o[i].hotel_name<<endl;
                }
                cin>>t; /* t = hotel indicator */
                while(1)
                {
                    int p;
                    cout<<"TO ADD ITEM \n ENTER 1 \nOR \n ENTER 2"<<endl;
                    cin>>p;
                    if(p==1)
                    {
                        cout<<"IN "<<o[t-1].hotel_name<<endl;
                        for(int j=0 ; j<o[t-1].number_of_items[t-1] ; j++)
                        {
                            cout<<o[t-1].food_item_code[j]<<" : "<<o[t-1].name_of_item[j]<<" : "<<o[t-1].item_quantity[j]<<"nos : ";
                            cout<<o[t-1].item_price[j]<<" : "<<o[t-1].offer_on_item[j]<<"% off :"<<o[t-1].category_of_item[j]<<endl;
                        }
                        cout<<"CHOOSE ITEM BY CODE "<<endl;
                        cin>>k[i];
                        cout<<"ENTER ITEM QUANTITY"<<endl;
                        cin>>l[i];
                        o[t-1].item_quantity[k[i]-1] = o[t-1].item_quantity[k[i]-1] - l[i];
                        cout<<o[t-1].name_of_item[k[i]-1]<<" ~~ "<<l[i]<<"nos "<<endl;
                        cout<<"THIS ITEMS ARE ADDED TO CART\n"<<endl;
                        i++;
                    }
                    else
                        break;
                }
            }   
            break;
        case 2 :
            {
                int f ;
                cout<<"ITEMS IN CART "<<endl;
                for(f=0;f<i;f++)
                {
                    cout<<f+1<<". "<<o[t-1].food_item_code[k[f]-1]<<" : "<<o[t-1].name_of_item[k[f]-1]<<" : "<<l[f]<<"nos : ";
                    cout<<o[t-1].item_price[k[f]-1]<<" : "<<o[t-1].offer_on_item[k[f]-1]<<"% off :";
                    cout<<o[t-1].category_of_item[k[f]-1]<<endl;
                }
                cout<<"1) TO PROCEED "<<endl;
                cout<<"2) TO QUIT "<<endl;
                int h;
                cin>>h;
                if(h == 1)
                {                
                    float bill1;
                    for(int f=0;f<i;f++)
                    { 
                        bill1=(l[f])*(o[t-1].item_price[k[f]-1]-((o[t-1].item_price[k[f]-1])*(o[t-1].offer_on_item[k[f]-1])/100));
                        bill_1+=bill1;
                    }

                    if(o[t-1].category_of_hotel != 3 )
                    {
                        bill_2=(bill_1)-(bill_1*(o[t-1].discount_on_bill[t-1]/100));
                    }else
                    {
                        bill_2=bill_1;
                    }
                    c[z].bill_rate_without_discount+=bill_2;

                    if(o[t-1].category_of_hotel == 1 && bill_2 > 100 )
                    {
                        bill_3=bill_2-50 ;
                    }else
                    {   
                        bill_3=bill_2;
                    }
                    c[z].billvalue+=bill_3;

                    if(c[z].customer_category == 1 && bill_3 > 200 )
                    {
                        bill_4=bill_3-50;
                        cout<<"YOUR BILL VALUE IS "<<bill_4<<"/-"<<endl;
                        cout<<"FREE DELIVERY \n:) ENJOY OUR FOOD :) "<<endl;
                        c[z].delivery_charge_to_our_company+=0;                    
                    }else
                    if(c[z].customer_category == 2 && bill_3 > 200 )
                    {
                        bill_4=bill_3-5;
                        cout<<"YOUR BILL VALUE IS "<<bill_4<<"/-"<<endl;
                        cout<<"IN THIS DELIVERY CHARGE IS 20/- \n:) ENJOY OUR FOOD :) "<<endl;
                        c[z].delivery_charge_to_our_company+=20;                    
                    }else
                    if(c[z].customer_category == 2 && bill_3 <= 200 )
                    {
                        bill_4=bill_3+20;
                        cout<<"YOUR BILL VALUE IS "<<bill_4<<"/-"<<endl;
                        cout<<"IN THIS DELIVERY CHARGE IS 20/- \n:) ENJOY OUR FOOD :) "<<endl;
                        c[z].delivery_charge_to_our_company+=20;                    
                    }else
                    if(c[z].customer_category == 3 )
                    {
                        bill_4=bill_3+40;
                        cout<<"YOUR BILL VALUE IS "<<bill_4<<"/-"<<endl;
                        cout<<"IN THIS DELIVERY CHARGE IS 40/- \n:) ENJOY OUR FOOD :) "<<endl;
                        c[z].delivery_charge_to_our_company+=40;                
                    }
                    rewardpts(bill_4,t-1,z);
                    cout<<"YOUR BILL WILL BE REDUCED FROM YOUR WALLET"<<endl;
                    c[z].wallet -= bill_4 ;
                    cout<<"NOW WALLET BALANCE IS :"<<c[z].wallet<<"/-"<<endl;
                }
                else if(h == 2)
                {
                    for(f=0;f<i;f++)
                    {
                        o[t-1].item_quantity[k[f]-1] += l[f];
                    }
                }
            }
            break;
        case 3 :
            {
                cout<<"YOUR REWARD POINTS : "<<c[z].reward_points<<endl;
                cout<<"CAN YOUR REWARD POINTS IS ADDED TO WALLET then enter 1 else 2"<<endl;
                int rw;
                cin>>rw;
                if(rw == 1)
                {
                    cout<<"YOUR REWARD POINTS "<<c[z].reward_points<<"/- IS ADDED TO WALLET"<<endl;
                    c[z].wallet += c[z].reward_points;     
                    c[z].reward_points = 0;
                    cout<<"WALLET : "<<c[z].wallet<<endl;
                    cout<<"reward : "<<c[z].reward_points<<endl;    
                }
            }
            break;
        case 4 :
            return 0;
            break;
        default:
            cout<<"**CHOOSE A CHOICE WITHIN 4**"<<endl;
            break;
        }
    }
    return 0 ;
}

void check_user_details()
{
    int u,v;
    cout<<"1) CUSTOMER LIST "<<endl;
    cout<<"2) RESTRAURENT LIST "<<endl;
    cin>>u;
    if(u == 1)
    {
        for(int i=0;i<3;i++)
        {
            cout<<i+1<<"."<<c[i].name<<" : "<<endl;
        }
        cout<<"\n---CHOOSE---"<<endl;
        cin>>v;
        cout<<"TOTAL DELIVERY CHARGES :"<<c[v-1].delivery_charge_to_our_company<<endl;
        cout<<"TOTAL CHARGES OF BILL (without discount) :"<<c[v-1].bill_rate_without_discount<<endl;
        cout<<"TOTAL CHARGES OF BILL (paid by coustomer):"<<c[v-1].billvalue<<endl;
    }
}

void company_account_details()
{
    int w=0 ;
    for(int i=0;i<3;i++)
    {
        w+=c[i].delivery_charge_to_our_company;
    }
    cout<<"TOTAL DELIVERY CHARGES COLLECTED : INR "<<w<<"/-"<<endl;
}
