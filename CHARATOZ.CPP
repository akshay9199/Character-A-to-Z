#include<iostream.h>
#include<conio.h>
#include<dos.h>
void main()
{
clrscr();
int n,i,j;

char ch;
cout<<"Enter the size of Character and see the magic";
cin>>n;
int m=2*n-n/2;

for(int p=65;p<91;p++)
{
char ch;
ch=p;
switch(ch)
{
case 'A':    //for A
for(i=1;i<=n;i++)
{
  for(j=1;j<=n;j++)
  {
  if((j==1&&i>1)||((i==1)&&(j>1&&j<n))||((j==1)&&(i>1&&i<n/2+1))||((i==n/2+1)&&(j<=n))||((j==n)&&(i>1&&i<=n)))
   { cout<<"*";}
  else
 { cout<<" ";}
  }
cout<<endl;
}
break;
case 'B':   //for B
for(i=1;i<=n;i++)
{
  for(j=1;j<=n;j++)
  {
  if((j==1&&(i<n))||((i==1)&&(j>1&&j<n))||((i==n)&&j<n)||((j==1)&&(i>1&&i<n/2+1))||((i==n/2+1)&&(j<=n))||((j==n)&&(i>1&&i<n/2+1))||((j==n)&&((i>n/2)&&(i<n))))
   { cout<<"*";}
  else
 { cout<<" ";}
  }
cout<<endl;
}
   break;
case 'C':        //for C
for(i=1;i<=n;i++)
{
  for(j=1;j<=n;j++)
  {
  if((j==1&&i>1&&i<n)||(i==1&&j>1&&j<n)||(i==n&&j>1&&j<n)||(j==n&&i>1&&i<n/2)||(j==n&&i>n/2+2&&i<n))
    cout<<"*";
  else
  cout<<" ";
  }
cout<<endl;
}
 break;
case 'D':    //for D
for(i=1;i<=n;i++)
{
  for(j=1;j<=n;j++)
  {
  if(((i==1)&&(j<n))||((j==1)&&(i>=1&&i<=n))||((i==n)&&(j<n))||((j==n)&&(i>1&&i<n)))
   { cout<<"*";}
  else
 { cout<<" ";}
  }
cout<<endl;
}
 break;
case 'E':    //for E
for(i=1;i<=n;i++)
{
  for(j=1;j<=n;j++)
  {
  if((i==1)||(j==1)||(i==n))
 { cout<<"*";}
 else if(i==n/2+1)
 { cout<<"*";}
  else
 { cout<<" ";}
  }
cout<<endl;
}

  break;
case 'F':  //for F
for(i=1;i<=n;i++)
{
  for(j=1;j<=n;j++)
  {
  if((i==1)||(j==1))
 { cout<<"*";}
 else if(i==n/2+1)
 { cout<<"*";}
  else
 { cout<<" ";}
  }
cout<<endl;
}

  break;
case 'G':  //for G
for(i=1;i<=n;i++)
{
  for(j=1;j<=n;j++)
  {
  if(((i==1)&&(j>1&&j<n))||((j==1)&&(i>1&&i<n))||((i==n)&&(j>1&&j<n))||((j==n)&&(i>n/2&&i<n))||(i==n/2+1)&&(j>n/2))
   { cout<<"*";}
  else
 { cout<<" ";}
  }
cout<<endl;
}
   break;
case 'H':      //for H
for(i=1;i<=n;i++)
{
  for(j=1;j<=n;j++)
  {
  if((j==1)||(j==n)||(i==n/2+1))
 { cout<<"*";}
 else
 { cout<<" ";}
  }
cout<<endl;
}

   break;
case 'I':        //for I
for(i=1;i<=n;i++)
{
  for(j=1;j<=n;j++)
  {
  if((i==1)||(i==n)||(j==n/2+1))
 { cout<<"*";}
  else
 { cout<<" ";}
  }
cout<<endl;
}


  break;
case 'J':    //for J
for(i=1;i<=n;i++)
{
  for(j=1;j<=n;j++)
  {
  if((i==1)||(j==n/2+1)||((i==n)&&(j>1&&j<n/2+1))||(j==1)&&((i>n/2+2)&&i<n))
 { cout<<"*";}
  else
 { cout<<" ";}
  }
cout<<endl;
}

  break;
case 'K':    //for K
for(i=1;i<=n;i++)
{
  for(j=1;j<=n;j++)
  {
  if((j==1)||(i+j==n&&i<n/2+1)||(i==n/2+1&&j==n/4+1)||(i>n/2&&i-j==1))
   { cout<<"*";}
  else
 { cout<<" ";}
  }
cout<<endl;
}


   break;
case 'L':   //for L
for(i=1;i<=n;i++)
{
  for(j=1;j<=n;j++)
  {
  if((i==n)||(j==1))
 { cout<<"*";}
  else
 { cout<<" ";}
  }
cout<<endl;
}

   break;
case 'M':  //for M
for(i=1;i<=n;i++)
{
  for(j=1;j<=n;j++)
  {

  if((j==n)||(j==1)||((i==j)&&(i<n/2+1))||((i+j==n+1)&&(i<=n/2+1)))
   { cout<<"*";}
  else
 { cout<<" ";}
  }
cout<<endl;
}


   break;
case 'N':    //for N
for(i=1;i<=n;i++)
{
    for(j=1;j<=n;j++)
    {
    if((j==1)||(j==n)||(i==j))
    {
    cout<<"*";
    }
    else
    cout<<" ";
    }
 cout<<endl;
}

   break;
case 'O': //for O
for(i=1;i<=n;i++)
{
  for(j=1;j<=n;j++)
  {
  if(((i==1)&&(j>1&&j<n))||((j==1)&&(i>1&&i<n))||((i==n)&&(j>1&&j<n))||((j==n)&&(i>1&&i<n)))
   { cout<<"*";}
  else
 { cout<<" ";}
  }
cout<<endl;
}

   break;
case 'P': //for P
for(i=1;i<=n;i++)
{
  for(j=1;j<=n;j++)
  {
  if((j==1)||((i==1)&&(j>1&&j<n))||((j==1)&&(i>1&&i<n/2+1))||((i==n/2+1)&&(j<n))||((j==n)&&(i>1&&i<n/2+1)))
   { cout<<"*";}
  else
 { cout<<" ";}
  }
cout<<endl;
}

  break;
case 'Q':  //for Q
for(i=1;i<=n;i++)
{
  for(j=1;j<=n;j++)
  {
  if(((i==1)&&(j>1&&j<n))||((j==1)&&(i>1&&i<n))||((i==n)&&(j>1&&j<n-1))||((j==n)&&(i>1&&i<n-1))||((i>=n/2+1)&&(j>=n/2+1)&&(i==j))&&(j<=n))
   { cout<<"*";}
  else
 { cout<<" ";}
  }
cout<<endl;
}

  break;
case 'R':  //for R
for(i=1;i<=n;i++)
{
  for(j=1;j<=n;j++)
  {
	    if((i>=n/2+1&&j>=n/2+1&&i==j)||(j==1)||((i==1)&&(j>1&&j<n))||((j==1)&&(i>1&&i<n/2+1))||((i==n/2+1)&&(j<n))||((j==n)&&(i>1&&i<n/2+1)))
	       { cout<<"*";}
  else
 { cout<<" ";}
  }
cout<<endl;
}
  break;
case 'S':  //for S
for(i=1;i<=n;i++)
{
  for(j=1;j<=n;j++)
  {
  if((j==1&&(i>1&&i<n/2+1))||((i==1)&&(j>1&&j<n))||(i==n)&&((j>1)&&j<n)||((j==1)&&(i>1&&i<n/2+1))||(i==n/2+1)&&(j>1&&(j<n))||((j==n)&&(i>n/2+1)&&(i<n))||((j==n)&&((i>n/2+14)&&(i<n))))
   { cout<<"*";}
  else
 { cout<<" ";}
  }
cout<<endl;
}
  break;
case 'T':  //for T
for(i=1;i<=n;i++)
{
  for(j=1;j<=n;j++)
  {
  if((i==1)||(j==n/2+1))
 { cout<<"*";}
  else
 { cout<<" ";}
  }
cout<<endl;
}

  break;
case 'U':      //for U
for(i=1;i<=n;i++)
{
  for(j=1;j<=n;j++)
  {
  if(((j==1)&&(i>1&&i<n))||((i==n)&&(j>1&&j<n))||((j==n)&&(i>1&&i<n)))
   { cout<<"*";}
  else
 { cout<<" ";}
  }
cout<<endl;
}
   break;
case 'V': //for V

for(i=1;i<=m;i++)
{
  for(j=1;j<=m;j++)
  {
    if(((i==j)&&i<=m/2+1&&j<=m/2+1)||((i+j==m+1)&&(i<=m/2+1)))
   { cout<<"*";}
  else
 { cout<<" ";}
  }
cout<<endl;
}

   break;
case 'W':   //for W
for(i=1;i<=n;i++)
{
  for(j=1;j<=n;j++)
  {
   if(((i==j)&&(i>n/2))||(i+j==n+1&&i>n/2)||(j==1)||(j==n))
   { cout<<"*";}
  else
 { cout<<" ";}
  }
cout<<endl;
}

   break;
case 'X': //for X
for(i=1;i<=n;i++)
{
  for(j=1;j<=n;j++)
  {
  if((i==j)||(i+j==n+1))
  {
  cout<<"*";
  }
  else
  cout<<" ";
  }
cout<<endl;
}

 break;
case 'Y':       //for Y
for(i=1;i<=n;i++)
{
  for(j=1;j<=n;j++)
  {
  if(((i==j)&&(i<n/2+1))||(i+j==n+1))
  {
  cout<<"*";
  }
  else
  cout<<" ";
  }
cout<<endl;
}
  break;
case 'Z':   //for Z
for(i=1;i<=n;i++)
{
  for(j=1;j<=n;j++)
  {
  if((i==1)||(i==n)||(i+j==n+1))
  {
  cout<<"*";
  }
  else
  cout<<" ";
  }
cout<<endl;
}

 break;
default :
cout<<"Bogus input";
   break;
}

delay(1000);
clrscr();
}

getch();
}