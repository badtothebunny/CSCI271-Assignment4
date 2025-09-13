#include <iostream>
#include <math.h>
using namespace std;
//This program analyzes stock data and helps the user decide whether or not to buy those stocks.
//Author: Maria Psomas
int main()
 {
int sum=0,cnt=0,c;
float av, price, preprice, max=0, min=100000, width, sum2, mean;
/*Here I'm obtaining the first price from the user before beginning the loop.*/
cout<<"Enter price:";
cin>>price;
while (price!=-1)
	{
		//I'm creating a sum of all the prices and counting it in order to calculate the average.
		sum+=price;
		cnt++;
		preprice=price;
		cout<<"Enter price (-1 terminates):"<<endl;
		cin>>price;
		//Here, I'm determining the minimum and maximum price by constantly comparing it to the variables max and min.
		if (max<price)
			max=price;
		if (min>price && price !=-1)
			min=price;
		if(price!=-1)
			{
				c=preprice-price;
				sum2+=c*c;
			}
	}
	//Here, I'm calculating the average price, along with the fluctation width and mean.
	av=sum/cnt;
	width=max-min;
	cnt-=1;
	mean=sqrt(sum2/cnt);
	cout<<"Average price is: \t"<<av<<endl<<"Fluctuation width: \t"<<width<<endl<<"Fluctuation mean: \t"<<mean<<endl;
	if (price<av && width<(1/3*av)|| mean<(1/3*av))
		cout<<"You should buy the stock.";
	else
		cout<<"You should not buy the stock.";
}
