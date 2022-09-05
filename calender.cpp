#include<iostream>
using namespace std;

int main()
{
    int td,tm,ty,num,n;
    cout<<"Enter today's date in dd mm yyyy format:"<<endl;
    cin>>td>>tm>>ty;
    cout<<"Press the corresponding number to perform the following operation:"<<endl<<"1 : Date calculator"<<endl<<"2 : Age calculator"<<endl<<"3 : Week calculator"<<endl;
    cin>>n;

    switch(n)
    {
      case 1:
      {
        int days;
            cout<<"Welcome!"<<endl<<"Enter the number of days preceeding which you want the date:"<<endl;
            cin>>days;

            while(days>0)
            {
              if((ty%100==0 && ty%400==0))
              {
                num=29;
              }
              else if(ty%100!=0 && ty%4==0)
                num=29;
              else
              {
                num=28;
              }
              int arr[]={31,num,31,30,31,30,31,31,30,31,30,31};
              if((arr[tm-1]-td)>days)
              {
                cout<<td+days<<"/"<<tm<<"/"<<ty<<endl;
                break;
              }
              else
              {
                days=days-(arr[tm-1]-td);
              }
              while(days>0)
              {
                while(tm<12)
                {
                  if(arr[tm]>days)
                  {
                    cout<<days<<"/"<<tm+1<<"/"<<ty<<endl;
                    days=0;
                    break;
                  }
                  else
                  {
                    days=days-arr[tm];
                    tm++;
                  }
                }
                break;  
              }
              tm=tm-11;
              td=0;
              ty++;
              if(days==0)
              break;
            }
            
            break;    
             
      }

      case 2:
      {
        cout<<"Enter your birth date in dd/mm/yyyy format:"<<endl;
        int bd,bm,by,years,months,days;
        cin>>bd>>bm>>by;
        years=ty-by-1;
        months=(12-bm)+(tm-1);
        int arr[]={31,num,31,30,31,30,31,31,30,31,30,31};
        days=(arr[bm-1]-bd+1)+td;
        if(days>30)
        {
          days=days-30;
          months++;
        }
        if(months>12)
        {
          months=months-12;
          years++;
        }
        cout<<years<<" "<<"Years"<<endl<<months<<" "<<"Months"<<endl<<days<<" "<<"Days"<<endl;
        break;
      }

      case 3:
      {
         int dd,j;
         cout<<"Enter no of days after which you want day of week:"<<endl;
    cin>>dd;
    string wk;
    cout<<"Enter today's day of week:"<<endl;
    cin>>wk;

    string week[]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};

    for(int i=0;i<7;i++)
    {
        if(wk==week[i])
        {
            j=i;
        }
    }
    
   while(dd!=0)
   { 
    for(j;j<7;j++)
    {
        if(dd==0)
        {
            cout<<week[j];
            break;
        }
        dd--;
    }
    for(int k=0;k<j;k++)
    {
        if(dd==0)
        {
            cout<<week[k];
            break;
        }
        dd--;
    }
   } 
      }
    }
    return 0;
}
