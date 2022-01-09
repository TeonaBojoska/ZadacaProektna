
#include<iostream>
using namespace std;

void pecati(int vis[],int tez[],int n);
float prosecna_visina(int vis[],int n);
float prosecna_tezina(int tez[],int n);
void pecati_vis10(int vis[],int tez[],int n);
void pecati_tezina10(int vis[],int tez[],int n);
int maskimalna_visina(int vis[],int n);
int minimalna_visina(int vis[],int n);
void visina_minimalna0_15(int vis[],int tez[],int n);
void visina_maksimalna_20(int vis[],int tez[],int n);
int maskimalna_tezina(int tez[],int n);
int minimalna_tezina(int tez[],int n);
void tezina_minimalna0_15(int vis[],int tez[],int n);
void tezina_maksimalna_20(int vis[],int tez[],int n);


int main()
{
    int n,i,izbor;
    float pv,pt;
    int maxv,maxt,minv,mint;
    cout<<"\n Broj Igraci :  ";
    cin>>n;

    int vis[n],tez[n];
    
    

    for(i=0;i<n;i++)
    {
    cout<<"\n ////  Se vnesuva "<<i+1<<" kosarkar //// "<<endl;

       do
       {
       cout<<"\n Vnesete visina : =  ";
       cin>>vis[i];

       if(vis[i]<150 || vis[i]>200)
          cout<<"\n Napravivte greska 150 -200 ........."<<endl;
       }while(vis[i]<150 || vis[i]>200);
       
       cout<<"\n Vnesete tezina : = ";
       cin>>tez[i];
    }

    do
    {     

         cout<<"\n ----------------------------------------------";
         cout<<"\n                      M E N I                  ";
         cout<<"\n ----------------------------------------------";
         cout<<"\n 1.  Prosecna Visina ";
         cout<<"\n ----------------------------------------------";
         cout<<"\n 2.  Prosecna Tezina";
         cout<<"\n ----------------------------------------------";
         cout<<"\n 3.  Visina +/- 10 santimetri ";
         cout<<"\n ----------------------------------------------";
         cout<<"\n 4.  Tezina +/- 10 kilogrami ";
         cout<<"\n ----------------------------------------------";
         cout<<"\n 5.  Maksimalna visina";
         cout<<"\n ----------------------------------------------";
         cout<<"\n 6.  Minimalna visina";
         cout<<"\n ----------------------------------------------";
         cout<<"\n 7.  Maksimalna tezina";
         cout<<"\n ----------------------------------------------";
         cout<<"\n 8.  Minimalna Tezina";
         cout<<"\n ----------------------------------------------";
         cout<<"\n 9.  Vizina od 0 - 15 % od minimalnata ";
         cout<<"\n ----------------------------------------------";
         cout<<"\n 10. Tezina od 0 - 15 % od minimalnata ";
         cout<<"\n ----------------------------------------------";
         cout<<"\n 11. Vizina od -20 - 0 % od maksimalnata ";
         cout<<"\n ----------------------------------------------";
         cout<<"\n 12. Tezina od -20 - 0 % od maksimalnata ";
         cout<<"\n ----------------------------------------------";
         cout<<"\n 13. Pecati kosarkari";
         cout<<"\n ----------------------------------------------";
         cout<<"\n 0.  Izlez";
         cout<<"\n ----------------------------------------------";
         cout<<"\n\n Vnesete izbor : ";
         cin>>izbor;

         switch(izbor)
         {
            case 1:{

                 pecati(vis,tez,n);
                 pv=prosecna_visina(vis,n);
                 cout<<"\n ----------------------------------------------";
                 cout<<"\n Prosecnata visina : "<<pv;
                 cout<<"\n ----------------------------------------------"<<endl;
                 break;
                 }
            case 2:{

                 pecati(vis,tez,n);
                 pt=prosecna_tezina(tez,n);
                 cout<<"\n ///////////////////////////////////////////////////";
                 cout<<"\n Prosecnata tezina : "<<pt;
                 cout<<"\n ///////////////////////////////////////////////////"<<endl;
                 break;
                 }
            case 3:{
                 pecati_vis10(vis,tez,n);
                 break;
                 }
            case 4:{
                 pecati_tezina10(vis,tez,n);
                 break;
                 }
            case 5:{
                 maxv=maskimalna_visina(vis,n);
                 pecati(vis,tez,n);
                 cout<<"\n ///////////////////////////////////////////////////";
                 cout<<"\n Maksimalnata visina e : "<<maxv;
                 cout<<"\n ///////////////////////////////////////////////////"<<endl;
                 break;
                 }
            case 6:{
                 minv=minimalna_visina(vis,n);
                 pecati(vis,tez,n);
                 cout<<"\n ///////////////////////////////////////////////////";
                 cout<<"\n Minimalnata visina e : "<<minv;
                 cout<<"\n ///////////////////////////////////////////////////"<<endl;
                 break;                 
                 }
            case 7:{
                 maxt=maskimalna_tezina(tez,n);
                 pecati(vis,tez,n);
                 cout<<"\n ///////////////////////////////////////////////////";
                 cout<<"\n Maksimalnata tezina e : "<<maxt;
                 cout<<"\n ///////////////////////////////////////////////////"<<endl;
                 break;
                 }
            case 8:{
                 mint=minimalna_tezina(tez,n);
                 pecati(vis,tez,n);
                 cout<<"\n ///////////////////////////////////////////////////";
                 cout<<"\n Minimalnata tezina e : "<<mint;
                 cout<<"\n ///////////////////////////////////////////////////"<<endl;
                 break;
                 }
            case 9:{
                 visina_minimalna0_15(vis,tez,n);
                 break;
                 }
            case 10:{
                 tezina_minimalna0_15(vis,tez,n);
                 break;
                 }
            case 11:{
                 visina_maksimalna_20(vis,tez,n);
                 break;
                 }
            case 12:{
                 tezina_maksimalna_20(vis,tez,n);
                 break;
                 }
            case 13:{
                 pecati(vis,tez,n);
                 break;
                 }
            case 0:break;
            default:cout<<" GRESKA ! ! ! ! ";
         }
    }while(izbor!=0);     
    system("pause");
    return 0;
}

void pecati(int vis[],int tez[],int n)
{
     int i;
     cout<<"\n ========================================================"<<endl;
     cout<<"\n                    K O S A R K A R I                    "<<endl;
     cout<<"\n ========================================================"<<endl;
     for(i=0;i<n;i++)
     {
        cout<<"\n"<<i+1<<" Kosarkar ima visina "<<vis[i]<<" santimetri i teza "<<tez[i]<<" kilogrami"<<endl;
     }
 }

float prosecna_visina(int vis[],int n)
 {
      int i,s=0;
      float ps;
      for(i=0;i<n;i++)
          s=s+vis[i];            
      ps=(float)s/n;
      return ps;
 }

float prosecna_tezina(int tez[],int n)
{
      int i,s=0;
      float ps;
      for(i=0;i<n;i++)
          s=s+tez[i];            
      ps=(float)s/n;
      return ps;
}

void pecati_vis10(int vis[],int tez[],int n)
{
     float ps;
     int i;
     ps=prosecna_visina(vis,n);
     cout<<"\n ///////////////////////////////////////////////////"<<endl;
     cout<<"\n        K O S A R K A R I - >  +/- 10 od visata       "<<endl;
     cout<<"\n ///////////////////////////////////////////////////"<<endl;
     for(i=0;i<n;i++)
     {
          if(vis[i]>=((int)ps-10) && vis[i]<=((int)ps+10))
               cout<<"\n"<<i+1<<" Kosarkar ima visina "<<vis[i]<<" santimetri i teza "<<tez[i]<<" kilogrami"<<endl;  
     }
}   

void pecati_tezina10(int vis[],int tez[],int n)
{
     float ps;
     int i;
     ps=prosecna_tezina(tez,n);
     cout<<"\n ///////////////////////////////////////////////////"<<endl;
     cout<<"\n        K O S A R K A R I - >  +/- 10 od tezata       "<<endl;
     cout<<"\n ///////////////////////////////////////////////////"<<endl;
     for(i=0;i<n;i++)
     {
          if(tez[i]>=((int)ps-10) && tez[i]<=((int)ps+10))
               cout<<"\n"<<i+1<<" Kosarkar ima visina "<<vis[i]<<" santimetri i teza "<<tez[i]<<" kilogrami"<<endl;  
     }
}        

int maskimalna_visina(int vis[],int n)
{
    int max,i;
    max=vis[0];
    for(i=0;i<n;i++)
    if(vis[i]>max)
       max=vis[i];
    return max;
}

int minimalna_visina(int vis[],int n)
{ 
    int min,i;
    min=vis[0];
    for(i=0;i<n;i++)
    if(vis[i]<min)
       min=vis[i];
    return min;    
}

void visina_minimalna0_15(int vis[],int tez[],int n)
{
     int i,min;
     float pvis;
     min=minimalna_visina(vis,n);
     cout<<"\n ///////////////////////////////////////////////////"<<endl;
     cout<<"\n        K O S A R K A R I - >  +/- 10 od vis       "<<endl;
     cout<<"\n ///////////////////////////////////////////////////"<<endl;
     for(i=0;i<n;i++)
     {
        pvis=vis[i]*15/100;
        if(vis[i]>=min && vis[i]<=(int)pvis)
            cout<<"\n"<<i+1<<" Kosarkar ima visina "<<vis[i]<<" santimetri i teza "<<tez[i]<<" kilogrami"<<endl;  
     }
}

void visina_maksimalna_20(int vis[],int tez[],int n)
{
     int i,max;
     float pvis;
     max=maskimalna_visina(vis,n);
     cout<<"\n ///////////////////////////////////////////////////"<<endl;
     cout<<"\n        K O S A R K A R I - >  0-20%  od vis       "<<endl;
     cout<<"\n ///////////////////////////////////////////////////"<<endl;
     for(i=0;i<n;i++)
     {
        pvis=vis[i]*20/100;
        if(vis[i]>=(int)pvis && vis[i]<=max)
            cout<<"\n"<<i+1<<" Kosarkar ima visina "<<vis[i]<<" santimetri i teza "<<tez[i]<<" kilogrami"<<endl;  
     }
}

int maskimalna_tezina(int tez[],int n)
{
    int max,i;
    max=tez[0];
    for(i=0;i<n;i++)
    if(tez[i]>max)
       max=tez[i];
    return max;
}

int minimalna_tezina(int tez[],int n)
{ 
    int min,i;
    min=tez[0];
    for(i=0;i<n;i++)
    if(tez[i]<min)
       min=tez[i];
    return min;    
}

void tezina_minimalna0_15(int vis[],int tez[],int n)
{
     int i,min;
     float pvis;
     min=minimalna_tezina(tez,n);
     cout<<"\n ///////////////////////////////////////////////////"<<endl;
     cout<<"\n        K O S A R K A R I - >  +/- 10 od tez      "<<endl;
     cout<<"\n ///////////////////////////////////////////////////"<<endl;
     for(i=0;i<n;i++)
     {
        pvis=tez[i]*15/100;
        if(tez[i]>=min && tez[i]<=(int)pvis)
            cout<<"\n"<<i+1<<" Kosarkar ima visina "<<vis[i]<<" santimetri i teza "<<tez[i]<<" kilogrami"<<endl;  
     }
}

void tezina_maksimalna_20(int vis[],int tez[],int n)
{
     int i,max;
     float pvis;
     max=maskimalna_tezina(tez,n);
     cout<<"\n ///////////////////////////////////////////////////"<<endl;
     cout<<"\n        K O S A R K A R I - >  0-20% - tez       "<<endl;
     cout<<"\n ///////////////////////////////////////////////////"<<endl;
     for(i=0;i<n;i++)
     {
        pvis=tez[i]*20/100;
        if(tez[i]>=(int)pvis && tez[i]<=max)
            cout<<"\n"<<i+1<<" Kosarkar ima visina "<<vis[i]<<" santimetri i teza "<<tez[i]<<" kilogrami"<<endl;  
     }
}
