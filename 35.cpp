#include <iostream.h>
#include <string.h>



using namespace std;
/*int MATCH(int a, int b, int avb, int bva)
{
                       cout<<"Введiть рахункок(через пробiл) - ";
                       cin>>a>>b;
                       if (a>b)
                      { avb=3;return avb;}
                       else if(a==b)
                           { avb=1;return avb;
                            bva=1;return bva;}
                            else {bva=3;return bva;}
                  
                  
    
    }*/


main()

{ 
      setlocale(LC_ALL,"Russian");
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
      int AvCh=0,AvMU=0,AvMC=0,ChvA=0,ChvMU=0,ChvMC=0,MUvA=0,MUvCh=0,MUvMC=0,MCvA=0,MCvCh=0,MCvMU=0;
      int A,Ch,MU,MC;
      int n, k=0, Arsenal, Chealse, ManU,ManC;
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////      
          
                   cout<<"| Команда | Arsenal |  Chealse  |   MU  |  MC  |"<<endl;
       cout<<"|---------+---------+-----------+-------+------|"<<endl;
       cout<<"|Arsenal  |    X    |     "<<AvCh<<"     |   "<<AvMU<<"   |   "<<AvMC<<"  |"<<endl;
       cout<<"|---------+---------+-----------+-------+------|"<<endl;
       cout<<"|Chealse  |    "<<ChvA<<"    |     X     |   "<<ChvMU<<"   |   "<<ChvMC<<"  |"<<endl;
       cout<<"|---------+---------+-----------+-------+------|"<<endl;
       cout<<"|MU       |    "<<MUvA<<"    |     "<<MUvCh<<"     |   X   |   "<<MUvMC<<"  |"<<endl;
       cout<<"|---------+---------+-----------+-------+------|"<<endl; 
       cout<<"|MC       |    "<<MCvA<<"    |     "<<MCvCh<<"     |   "<<MCvMU<<"   |   X  |"<<endl;
  
          cout<<endl<<"|1| Arsenal-Chealse"<<endl;
          cout<<"|2| Arsenal-MU"<<endl;
          cout<<"|3| Arsenal-MC"<<endl;
          cout<<"|4| Chealse-Arsenal"<<endl;
          cout<<"|5| Chealse-MU"<<endl;
          cout<<"|6| Chealse-MC"<<endl;
          cout<<"|7| MU-Arsenal"<<endl;
          cout<<"|8| MU-Chealse"<<endl;
          cout<<"|9| MU-MC"<<endl;
          cout<<"|10| MC-Arsenal"<<endl;
          cout<<"|11| MC-Chealse"<<endl;
          cout<<"|12| MC-MU"<<endl;
          cout<<"(1-ша команда - рядок, 2-га - стовпчик в таблицi)"<<endl;
          
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////                 
          while(k!=12&&cout<<endl<<"Виберiть матч: "&&cin>>n)
          {
        switch(n){
                  case 1:{
                       cout<<"Введiть рахункок(через пробiл) - ";
                       cin>>A>>Ch;
                       if (A>Ch)
                       AvCh=3+AvCh;
                       else if(A==Ch)
                           { AvCh=1+AvCh;
                            ChvA=1+ChvA;}
                            else ChvA=3+ChvA;
                  
                  
                  break;}
                  
                  case 2:{
                       cout<<"Введiть рахункок(через пробiл) - ";
                       cin>>A>>MU;
                       if (A>MU)
                       AvMU=3;
                       else if(A==MU)
                           { AvMU=1+AvMU;
                            MUvA=1+ MUvA;}
                            else MUvA=3+ MUvA;break;}
                            
                   case 3:{cout<<"Введiть рахункок(через пробiл) - ";
                       cin>>A>>MC;
                       if (A>MC)
                       AvMC=3+AvMC;
                       else if(A==MC)
                           { AvMC=1+AvMC;
                            MCvA=1+ MCvA;}
                            else MCvA=3+ MCvA;break;}
                  
                  
                   case 4:{cout<<"Введiть рахункок(через пробiл) - ";
                       cin>>Ch>>A;
                       if (Ch>A)
                       ChvA=3+ChvA;
                       else if(Ch==A)
                           { ChvA=1+ChvA;
                            AvCh=1+AvCh;}
                            else AvCh=3+AvCh;break;}
                  
                  
                   case 5:{cout<<"Введiть рахункок(через пробiл) - ";
                       cin>>Ch>>MU;
                       if (Ch>MU)
                       ChvMU=3+ChvMU;
                       else if(Ch==MU)
                           { ChvMU=1+ChvMU;
                            MUvCh=1+MUvCh;}
                            else MUvCh=3+MUvCh;break;}
                  
                  
                   case 6:{cout<<"Введiть рахункок(через пробiл) - ";
                       cin>>Ch>>MC;
                       if (Ch>MC)
                       ChvMC=3+ChvMC;
                       else if(Ch==MC)
                           { MCvCh=1+MCvCh;
                            ChvMC=1+ChvMC;}
                            else MCvCh=3+MCvCh;break;}
                  
                  
                   case 7:{cout<<"Введiть рахункок(через пробiл) - ";
                       cin>>MU>>A;
                       if (MU>A)
                       MUvA=3+MUvA;
                       else if(MU==A)
                           { MUvA=1+MUvA;
                            AvMU=1+ AvMU;}
                            else AvMU=3+ AvMU;break;}
                  
                  
                   case 8:{cout<<"Введiть рахункок(через пробiл) - ";
                       cin>>MU>>Ch;
                       if (MU>Ch)
                       MUvCh=3+MUvCh;
                       else if(MU==Ch)
                           { MUvCh=1+MUvCh;
                            ChvMU=1+ChvMU;}
                            else ChvMU=3+ChvMU;break;}
                  
                  
                   case 9:{cout<<"Введiть рахункок(через пробiл) - ";
                       cin>>MU>>MC;
                       if (MU>MC)
                       MUvMC=3+MUvMC;
                       else if(MU==MC)
                           { MUvMC=1+MUvMC;
                            MCvMU=1+MCvMU;}
                            else MCvMU=3+MCvMU;break;}
                  
                  
                   case 10:{cout<<"Введiть рахункок(через пробiл) - ";
                       cin>>MC>>A;
                       if (MC>A)
                       MCvA=3+MCvA;
                       else if(MC==A)
                           { MCvA=1+MCvA;
                            AvMC=1+ AvMC;}
                            else AvMC=3+ AvMC;break;}
                  
                   case 11:{cout<<"Введiть рахункок(через пробiл) - ";
                       cin>>MC>>Ch;
                       if (MC>Ch)
                       MCvCh=3+MCvCh;
                       else if(MC==Ch)
                           { MCvCh=1+MCvCh;
                            ChvMC=1+ChvMC;}
                            else ChvMC=3+ChvMC;break;}
                  
                   case 12:{cout<<"Введiть рахункок(через пробiл) - ";
                       cin>>MC>>MU;
                       if (MC>MC)
                       MCvMU=3+MCvMU;
                       else if(MC==MU)
                           { MCvMU=1+MCvMU;
                            MUvMC=1+MUvMC;}
                            else MUvMC=3+MUvMC;break;}
                  
                  
                   default: cout<<"Такого матчу немае в перелiку!"; }
                   
                   system("cls");
                   
//////////////////////////////////////////////////////////////////////////////////////////////////////////////              
                  cout<<"                   |Для виходу з програми натиснiть q|"<<endl<<endl;
                   cout<<"| Команда | Arsenal |  Chealse  |   MU  |  MC  |"<<endl;
       cout<<"|---------+---------+-----------+-------+------|"<<endl;
       cout<<"|Arsenal  |    X    |     "<<AvCh<<"     |   "<<AvMU<<"   |   "<<AvMC<<"  |"<<endl;
       cout<<"|---------+---------+-----------+-------+------|"<<endl;
       cout<<"|Chealse  |    "<<ChvA<<"    |     X     |   "<<ChvMU<<"   |   "<<ChvMC<<"  |"<<endl;
       cout<<"|---------+---------+-----------+-------+------|"<<endl;
       cout<<"|MU       |    "<<MUvA<<"    |     "<<MUvCh<<"     |   X   |   "<<MUvMC<<"  |"<<endl;
       cout<<"|---------+---------+-----------+-------+------|"<<endl; 
       cout<<"|MC       |    "<<MCvA<<"    |     "<<MCvCh<<"     |   "<<MCvMU<<"   |   X  |"<<endl;
////////////////////////////////////////////////////////////////////////////////////////////////////////////

          cout<<endl<<endl<<"|1| Arsenal-Chealse";if(n==1) cout<<" +";
          cout<<endl<<"|2| Arsenal-MU";if(n==2) cout<<" +";
          cout<<endl<<"|3| Arsenal-MC";if(n==3) cout<<" +";
          cout<<endl<<"|4| Chealse-Arsenal";if(n==4) cout<<" +";
          cout<<endl<<"|5| Chealse-MU";if(n==5) cout<<" +";
          cout<<endl<<"|6| Chealse-MC";if(n==6) cout<<" +";
          cout<<endl<<"|7| MU-Arsenal";if(n==7) cout<<" +";
          cout<<endl<<"|8| MU-Chealse";if(n==8) cout<<" +";
          cout<<endl<<"|9| MU-MC";if(n==9) cout<<" +";
          cout<<endl<<"|10| MC-Arsenal";if(n==10) cout<<" +";
          cout<<endl<<"|11| MC-Chealse";if(n==11) cout<<" +";
          cout<<endl<<"|12| MC-MU";if(n==12) cout<<" +";
          cout<<endl<<"(1-ша команда - рядок, 2-га - стовпчик в таблицi)"<<endl;
          k++;
          
///////////////////////////////////////////////////////////////////////////////////////////////////////////////                  
                  }
                  Arsenal=AvCh+AvMU+AvMC;
                  Chealse=ChvA+ChvMU+ChvMC;
                  ManU=MUvA+MUvCh+MUvMC;
                  ManC=MCvA+MCvCh+MCvMU;
                  cout<<endl<<"Очки Arsenal: "<<Arsenal;
                  cout<<endl<<"Очки Chelsea: "<<Chealse;
                  cout<<endl<<"Очки MU: "<<ManU;
                  cout<<endl<<"Очки MC: "<<ManC;
                  
                  
                  if(Arsenal>Chealse&&Arsenal>ManU&&Arsenal>ManC)
                  cout<<endl<<endl<<"Чемпiон - Arsenal";
                  if(Chealse>Arsenal&&Chealse>ManU&&Chealse>ManC)
                  cout<<endl<<endl<<"Чемпiон - Chealse";
                  if(ManU>Arsenal&&ManU>Chealse&&ManU>ManC)
                  cout<<endl<<endl<<"Чемпiон - MU";
                  if(ManC>Arsenal&&ManC>Chealse&&ManC>ManU)
                  cout<<endl<<endl<<"Чемпiон - MC";
                  
     
     cout<<endl<<endl<<endl;
     system("pause");
      
      
}
