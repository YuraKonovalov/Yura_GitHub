#include <iostream.h>
#include <math.h>


void CHAS (float *A,float D,int n, float h)
{
     float s=1,g=9.8,PI=3.14159,x,V,t,OV;
     
     
     
     
   if(D<1||n<1||h<1)
   cout<<"\nПомилка: вказанi вiд’емнi данi!";
   else {
   for(int i=0;i<n;i++)
   s=s*A[i];
   
   
  if(n*s>=D)
  cout<<"\nПомилка: Не виконуеться умова nd<D!";
  else
  {
      
      x=h/n;
      V=sqrt(2*g*x);
      OV=PI*((D*D)/4)*(h-x);
      t=OV/V;
  
  cout<<"Час, за який рiвень води опуститься до нижнього отвора =  "<<t<<" cекунд";
  if(t>=60)
  cout<<"\n(приблизно "<<(int)t/60<<" хвилин)";
  
  }}
}



main()
{//gdfgdfhdghghgfhdg
      setlocale(LC_ALL,"Russian");
      int n; float D,h,;
   
       cout<<"Введiть кiлькiсть отворiв у вiдрi: ";
      cin>>n;
      float A[n];
      for(int i=0;i<n;i++)
     { cout<<"Дiаметр "<<i+1<<"-го елемент(см) = ";
      cin>>A[i];}
      
      cout<<"Введiть дiаметр вiдра(см) =  ";
      cin>>D;
      cout<<"\nВведiть висоту вiдра(см) = ";
      cin>>h;
   
       CHAS(A,D,n,h);

   
      cout<<endl<<endl<<endl;
      system("pause");
}
