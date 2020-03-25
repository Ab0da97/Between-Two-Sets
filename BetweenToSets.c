#include <stdio.h>
#include <stdlib.h>

int main()
{
   int OnesSize , SecondsSize , OnesIndecator = 0 , SecondsIndecator = 0 , FinalIndecator = 0 ;
   register int i , j ;
   scanf("%d %d",&OnesSize , &SecondsSize);
   int FirstArr [OnesSize] , SecondArr [SecondsSize];
   for(i=0;i<OnesSize;i++)
   {
       scanf("%d",&FirstArr[i]);
   }
      for(i=0;i<SecondsSize;i++)
   {
       scanf("%d",&SecondArr[i]);
   }
  
   for(i=FirstArr[OnesSize-1];i<=SecondArr[0];i++)
   {
       //the problem was here 
       OnesIndecator = 0 ;wi 
       for(j=0;j<OnesSize;j++)
       {
           if(i%FirstArr[j]==0)
           {
             OnesIndecator ++ ;
           }
       }

       if(OnesIndecator==OnesSize)
       {
           // and here 
           SecondsIndecator = 0;
           for(j=0;j<SecondsSize;j++)
           {
               if(SecondArr[j]%i==0)
               {
                   SecondsIndecator ++ ;
               }
           }
           if(SecondsIndecator== SecondsSize)
           {
               FinalIndecator ++ ;
              // printf("%d\n",i);
           }
       }
   }
   printf("%d",FinalIndecator);
    return 0;
}
