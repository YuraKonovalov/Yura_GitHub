#include <iostream.h>
#include <math.h>


void CHAS (float *A,float D,int n, float h)
{
     float s=1,g=9.8,PI=3.14159,x,V,t,OV;
     
     
     
     
   if(D<1||n<1||h<1)
   cout<<"\n�������: ������i �i����i ���i!";
   else {
   for(int i=0;i<n;i++)
   s=s*A[i];
   
   
  if(n*s>=D)
  cout<<"\n�������: �� ����������� ����� nd<D!";
  else
  {
      
      x=h/n;
      V=sqrt(2*g*x);
      OV=PI*((D*D)/4)*(h-x);
      t=OV/V;
  
  cout<<"���, �� ���� �i���� ���� ���������� �� �������� ������ =  "<<t<<" c�����";
  if(t>=60)
  cout<<"\n(��������� "<<(int)t/60<<" ������)";
  
  }}
}



main()
{//gdfgdfhdghghgfhdg
      setlocale(LC_ALL,"Russian");
      int n; float D,h,;
   
       cout<<"����i�� �i���i��� �����i� � �i��i: ";
      cin>>n;
      float A[n];
      for(int i=0;i<n;i++)
     { cout<<"�i����� "<<i+1<<"-�� �������(��) = ";
      cin>>A[i];}
      
      cout<<"����i�� �i����� �i���(��) =  ";
      cin>>D;
      cout<<"\n����i�� ������ �i���(��) = ";
      cin>>h;
   
       CHAS(A,D,n,h);

   
      cout<<endl<<endl<<endl;
      system("pause");
}
