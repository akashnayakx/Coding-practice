//https://www.codechef.com/problems/COPS


#include <iostream>
#include <vector>
//#include <cstdef>

using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int arr[101]={0};
        int count1=0;
        int M,x,y;
        cin>>M>>x>>y;

        int pos;
        int dis=x*y;


        for(int i=0; i<M; i++)
        {
            cin>>pos;
            arr[pos]={1};


            //for back
            for(int j=1; j<=dis; j++)
            {
                if((pos-j)>0)
                    arr[pos-j]=1;  //cover the traveled element with 1
                else
                    break;
            }

            //for front
            for(int j=pos+1; j<=(pos+dis); j++)
            {
                if(j<=100)
                    arr[j]=1;     //cover the traveled element with 1
            }

          }

          for(int i=0; i<101; i++)
          {
                if(arr[i]==0)
                count1++;
          }

          cout<<count1-1<<endl;

     }


    return 0;



}




