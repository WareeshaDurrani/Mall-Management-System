#include<iostream>
#include<string.h>
using namespace std;

class market
{
	public:
		int choice1,choice2,choice3,choice4,choice5;
		int shirtg=0,trouserg=0,piece3g=0,piece2g=0,shirtl=0,trouserl=0,dupatta=0,piece2l=0,
		piece3l=0,sc=0,abaya=0,floralg=0,freshg=0,citrusg=0,aromaticg=0;
		int florall=0,freshl=0,citrusl=0,aromaticl=0,pc=0,bootg=0,heel=0,flat=0,bootl=0;
		int total;
	public:	
		string a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15;
		string a16,a17,a18,a19,a20,a21,a22,a23,a24;
	int intro()
	{
		cout<<"\t\t\t\t\tWelcome to A.W.L Fashion Boutique";
		cout<<"\n\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
		cout<<"\n\n\t\t\t\t\tBuy , Purchase , Enjoy";
	}
};
    //first class inherited in second class
	class marketfull : public market
	{
	public:
	int interface()
{
	for(int a=0;a>-1;a--)
	{
		//First interface
		label1:
		cout<<"\n\n\t\t------------------------\t\t-------------------------";
		cout<<"\n\t\tBuy Gents cloths press 1\t\tBuy Ladies cloths press 2";
		cout<<"\n\t\t------------------------\t\t-------------------------";
		cout<<"\n\n\t\t----------------------\t\t\t-----------------";
		cout<<"\n\t\tBuy Fragrances press 3\t\t\tBuy Shoes press 4";
		cout<<"\n\t\t----------------------\t\t\t-----------------";
		cout<<"\n\n\t\t\t\t\t---------------------------";
		cout<<"\n\t\t\t\t\tTo Generate Reciept press 5";
		cout<<"\n\t\t\t\t\t---------------------------";
		cout<<"\n\n\t\tEnter your choice :";
		cin>>choice1;
		//Gents cloths section
		if(choice1==1)
		{
			for(int b=0;b>-1;b++)
			{
				label2:
			    cout<<"\n\t\tWe have the following items in Gents cloths category:";
			    cout<<"\n\t\t(1) Stitched";
			    cout<<"\n\t\t(2) UnStitched";
			    cout<<"\n\t\t(3) To go Back";
			    cout<<"\n\n\t\tEnter your choice :";
			    cin>>choice2;
  //Gents Stitched cloths section
                if(choice2==1)
			    {
			    	for(int c=0;c>-1;c++)
			    	{
				    cout<<"\n\t\tWe have the following items in Stitched cloths category:";
				    cout<<"\n\t\t(1) Shirts";
		    	    cout<<"\n\t\t(2) Trousers";
		    	    cout<<"\n\t\t(3) 3 Piece";
			        cout<<"\n\t\t(4) To go Back";
			        cout<<"\n\n\t\tEnter your choice :";
			        cin>>choice3;
			        if(choice3==1)
			        {
			        	cout<<"\n\t\tWe have the following items in Shirts category:";
			        	cout<<"\n\t\t(1) White shirt--Rs 700";
			        	cout<<"\n\t\t(2) Grey shirt--Rs 700";
			        	cout<<"\n\t\t(3) Blue shirt--Rs 700";
			        	cout<<"\n\n\t\tEnter your choice :";
			        	cin>>choice4;
			        	shirtg=700;
			        	if(choice4==1)
			        	{
			        		a1="White Shirt";
						}
						if(choice4==2)
						{
							a1="Grey Shirt";
						}
                        if(choice4==3)
						{
							a1="Blue Shirt";
						}
					}
					if(choice3==2)
					{
						cout<<"\n\t\tWe have the following items in Trousers category:";
			        	cout<<"\n\t\t(1) Black Trouser--Rs 500";
			        	cout<<"\n\t\t(2) Blue Trouser--Rs 500";
			        	cout<<"\n\t\t(3) Brown Trouser--Rs 500";
			        	cout<<"\n\n\t\tEnter your choice :";
			        	cin>>choice4;
			        	trouserg=500;
			        	if(choice4==1)
			        	{
			        		a2="Black Trouser";
						}
						if(choice4==2)
						{
							a2="Blue Trouser";
						}
						if(choice4==3)
						{
							a2="Brown Trouser";
						}
					}
					if(choice3==3)
						{
							cout<<"\n\t\tWe have the following items in 3 Piece category:";
                            cout<<"\n\t\t(1) Expensive 3 Piece--Rs 4500";
		    	            cout<<"\n\t\t(2) Affordable 3 Piece--Rs 3000";
		    	            cout<<"\n\n\t\tEnter your choice :";
		    	            cin>>choice4;
		    	            if(choice4==1)
		    	            {
		    	            	piece3g=4500;
		    	            	a3="Expensive 3 Piece";
							}
							if(choice4==2)
							{
								piece3g=3000;
								a3="Affordable 3 Piece";
							}
						}
					if(choice3==4)
					{
						goto label2;
					}
				    }
			    }
			    //Gents unstitched cloths section
			    if(choice2==2)
			    {
			    	for(int c=0;c>-1;c++)
			    	{
                        cout<<"\n\t\tWe have the following items in UnStitched category:";
			    		cout<<"\n\t\t(1) 2 Piece";
			            cout<<"\n\t\t(2) To go Back";
			            cout<<"\n\n\t\tEnter your choice :";
                        cin>>choice3;
			            if(choice3==1)
			            {
			            	cout<<"\n\t\tWe have the following items in 2 Piece category:";
			            	cout<<"\n\t\t(1) 2 Piece--Rs 2000";
		    	            cout<<"\n\t\t(2) 2 Piece--Rs 1700";
		    	            cout<<"\n\n\t\tEnter your choice :";
		    	            cin>>choice4;
		    	            if(choice4==1)
		    	            {
		    	            	piece2g=2000;
		    	            	a4="2 Piece";
							}
							if(choice4==2)
							{
								piece2g=1700;
								a4="2 Piece";
							}
						}
						if(choice3==2)
						{
							goto label2;
						}
}
				}
				if(choice2==3)
				{
					goto label1;
				}
		    }
}
		//Ladies cloths section
		if(choice1==2)
		{
			for(int b=0;b>-1;b++)
			{
				label3:
			    cout<<"\n\t\tWe have the following items in Ladies cloths category:";
			    cout<<"\n\t\t(1) Stitched";
			    cout<<"\n\t\t(2) UnStitched";
			    cout<<"\n\t\t(3) Scarfs";
			    cout<<"\n\t\t(4) Abayas";
			    cout<<"\n\t\t(5) Jewelry";
			    cout<<"\n\t\t(6) To go Back";
			    cout<<"\n\n\t\tEnter your choice :";
			    cin>>choice2;
			    //Ladies stitched cloths section
			    if(choice2==1)
			    {
			    	for(int c=0;c>-1;c++)
{
				    cout<<"\n\t\tWe have the following items in Stitched category:";
				    cout<<"\n\t\t(1) Shirts";
		    	    cout<<"\n\t\t(2) Trousers";
		    	    cout<<"\n\t\t(3) Dupatta";
			        cout<<"\n\t\t(4) To go Back";
			        cout<<"\n\n\t\tEnter your choice :";
			        cin>>choice3;
			        if(choice3==1)
			        {
                        cout<<"\n\t\tWe have the following items in Shirts category:";
			        	cout<<"\n\t\t(1) Red shirt--Rs 700";
			        	cout<<"\n\t\t(2) Blue shirt--Rs 700";
			        	cout<<"\n\t\t(3) Green shirt--Rs 700";
			        	cout<<"\n\n\t\tEnter your choice :";
			        	cin>>choice4;
			        	shirtl=700;
			        	if(choice4==1)
			        	{
			        		a5="Red Shirt";
						}
						if(choice4==2)
			        	{
			        		a5="Blue Shirt";
						}
						if(choice4==3)
{
			        		a5="Green Shirt";
						}
					}
					if(choice3==2)
					{
						cout<<"\n\t\tWe have the following items in Trousers category:";
			        	cout<<"\n\t\t(1) Red Trouser--Rs 500";
			        	cout<<"\n\t\t(2) Blue Trouser--Rs 500";
			        	cout<<"\n\t\t(3) Green Trouser--Rs 500";
			        	cout<<"\n\n\t\tEnter your choice :";
			        	cin>>choice4;
			        	trouserl=500;
                    if(choice4==1)
			        	{
			        		a6="Red Shirt";
						}
						if(choice4==2)
			        	{
			        		a6="Blue Shirt";
						}
						if(choice4==3)
			        	{
			        		a6="Green Shirt";
						}
					}
					if(choice3==3)
					{
						cout<<"\n\t\tWe have the following items in Dupatta category:";
			        	cout<<"\n\t\t(1) Red Dupatta--Rs 300";
			        	cout<<"\n\t\t(2) Blue Dupatta--Rs 300";
			        	cout<<"\n\t\t(3) Green Dupatta--Rs 300";
			        	cout<<"\n\n\t\tEnter your choice :";
			        	cin>>choice4;
			        	dupatta=300;
			        	if(choice4==1)
			        	{
			        		a7="Red Shirt";
						}
						if(choice4==2)
			        	{
			        		a7="Blue Shirt";
						}
                        if(choice4==3)
			        	{
			        		a7="Green Shirt";
						}
					}
					if(choice3==4)
					{
						goto label3;
					}
				    }
			    }
			    //ladies unstitched cloths section
			    if(choice2==2)
			    {
			    	for(int c=0;c>-1;c++)
{
			    		cout<<"\n\t\tWe have the following items in UnStitched category:";
			    		cout<<"\n\t\t(1) 2 Piece";
			    		cout<<"\n\t\t(2) 3 Piece";
			            cout<<"\n\t\t(3) To go Back";
			            cout<<"\n\n\t\tEnter your choice :";
			            cin>>choice3;
			            if(choice3==1)
			            {
			            	cout<<"\n\t\tWe have the following items in 2 Piece category:";
			            	cout<<"\n\t\t(1) Embroidry 2 Piece--Rs 2000";
		    	            cout<<"\n\t\t(2) Printed 2 Piece--Rs 1700";
		    	            cout<<"\n\n\t\tEnter your choice :";
		    	            cin>>choice4;
		    	            if(choice4==1)
  {
		    	            	piece2l=2000;
		    	            	a8="Embroidry 2 piece";
							}
							if(choice4==2)
							{
								piece2l=1700;
								a8="Printed 2 Piece";
	}
						}
						if(choice3==2)
						{
							cout<<"\n\t\tWe have the following items in 3 Piece category:";
			            	cout<<"\n\t\t(1) Embroidry 3 Piece--Rs 2500";
		    	            cout<<"\n\t\t(2) Printed 3 Piece--Rs 2000";
		    	            cout<<"\n\n\t\tEnter your choice :";
		    	            cin>>choice4;
		    	            if(choice4==1)
		    	            {
		    	            	piece3l=2500;
		    	            	a9="Embroidry 3 piece";
							}
							if(choice4==2)
							{
								piece3l=2000;
								a9="Embroidry 3 piece";
							}
						}
						if(choice3==3)
						{
							goto label3;
						}
					}
				}
				//ladies scarf section
				if(choice2==3)
				{
					cout<<"\n\t\tWe have the following items in Scarfs category:";
			        cout<<"\n\t\t(1) Red Scarf--Rs 300";
			       	cout<<"\n\t\t(2) Blue Scarf--Rs 300";
			       	cout<<"\n\t\t(3) Green Scarf--Rs 300";
			       	cout<<"\n\n\t\tEnter your choice :";
			       	cin>>choice4;
			       	sc=300;
			       	if(choice4==1)
			       	{
			       		a10="Red Scarf";
					}
					if(choice4==2)
			       	{
			       		a10="Blue Scarf";
					}
					if(choice4==3)
			       	{
			       		a10="Green Scarf";
					}
			       	goto label3;
				}
				//ladies Abaya Section
				if(choice2==4)
				{
					cout<<"\n\t\tWe have the following items in Abaya category:";
			        cout<<"\n\t\t(1) Black Abaya--Rs 2000";
			       	cout<<"\n\t\t(2) Grey Abaya--Rs 2000";
			       	cout<<"\n\t\t(3) White Abaya--Rs 2000";
			       	cout<<"\n\t\t(3) Red Abaya--Rs 2000";
			       	cout<<"\n\n\t\tEnter your choice :";
                    cin>>choice4;
			       	abaya=2000;
			       	if(choice4==1)
			       	{
			       		a11="Black Abaya";
					}
					if(choice4==2)
			       	{
			       		a11="Grey Abaya";
					}
					if(choice4==3)
			       	{
			       		a11="White Abaya";
					}
					if(choice4==4)
			       	{
			       		a11="Red Abaya";
					}
			       	goto label3;
				}
				//ladies Jewelry section
				if(choice2==5)
				{
					cout<<"\n\t\tSorry Jewelry is not available, it will be available soon.";
					cout<<"\n";
			       	goto label3;
				}
				if(choice2==6)
				{
					goto label1;
}
		    }
		}
		//Fragrances section
		if(choice1==3)
		{
		    for(int b=0;b>-1;b++)
		    {
		    	label4:
		    	cout<<"\n\t\tPerfumes";
		        cout<<"\n\t\t(1) Gents";
			    cout<<"\n\t\t(2) Ladies";
			    cout<<"\n\t\t(3) To go Back";
			    cout<<"\n\n\t\tEnter your choice :";
			    cin>>choice2;
			    //Gents Perfume section
			    if(choice2==1)
			    {
			    	for(int c=0;c>-1;c++)
			    	{
				    cout<<"\n\t\tWe have the following items in Gents Perfumes:";
				    cout<<"\n\t\t(1) Floral";
				    cout<<"\n\t\t(2) Fresh";
				    cout<<"\n\t\t(3) Citrus";
				    cout<<"\n\t\t(4) Aromatic";
				    cout<<"\n\t\t(5) To go back";
				    cout<<"\n\n\t\tEnter your choice";
				    cin>>choice3;
				    if(choice3==1)
				    {
				    	cout<<"\n\t\tWe have the following items in Gents Floral perfume category:";
			          	cout<<"\n\t\t(1) Guerlain--Rs 2000";
		    	        cout<<"\n\t\t(2) Molinard--Rs 3000";
		    	        cout<<"\n\n\t\tEnter your choice :";
		    	        cin>>choice4;
		    	        if(choice4==1)
		    	        {
		    	        	floralg=2000;
		    	        	a12="Guerlain";
						}
						if(choice4==2)
						{
							floralg=3000;
							a12="Molinard";
						}
					}
					if(choice3==2)
				    {
				    	cout<<"\n\t\tWe have the following items in Gents Fresh perfume category:";
			          	cout<<"\n\t\t(1) Al-Hamra--Rs 2500";
		    	        cout<<"\n\t\t(2) Emir--Rs 3000";
		    	        cout<<"\n\n\t\tEnter your choice :";
		    	        cin>>choice4;
		    	        if(choice4==1)
		    	        {
		    	        	freshg=2500;
                            a13="Al-Hamra";
						}
						if(choice4==2)
						{
							freshg=3000;
							a13="Emir";
						}
					}
					if(choice3==3)
				    {
				    	cout<<"\n\t\tWe have the following items in Gents Citrus perfume category:";
			          	cout<<"\n\t\t(1) Iceberg--Rs 2000";
		    	        cout<<"\n\t\t(2) Diesel--Rs 2000";
		    	        cout<<"\n\n\t\tEnter your choice :";
		    	        cin>>choice4;
		    	        citrusg=2000;
		    	        if(choice4==1)
		    	        {
		    	        	a14="Iceberg";
						}
						if(choice4==2)
						{
							a14="Diesel";
						}
					}
					if(choice3==4)
				    {
                        cout<<"\n\t\tWe have the following items in Gents Aromatic perfume category:";
			          	cout<<"\n\t\t(1) Frapin--Rs 2500";
		    	        cout<<"\n\t\t(2) Montale--Rs 5000";
		    	        cout<<"\n\n\t\tEnter your choice :";
		    	        cin>>choice4;
		    	        if(choice4==1)
		    	        {
		    	        	aromaticg=2500;
		    	        	a15="Frapin";
						}
						if(choice4==2)
						{
							aromaticg=5000;
							a15="Montale";
						}
					}
					if(choice3==5)
					{
						goto label4;
					}
				    }
			    }
			    //Ladies perfume section
			    if(choice2==2)
			    {
			    	for(int c=0;c>-1;c++)
			    	{
                    cout<<"\n\t\tWe have the following items in Ladies Perfumes:";
				    cout<<"\n\t\t(1) Floral";
				    cout<<"\n\t\t(2) Fresh";
				    cout<<"\n\t\t(3) Citrus";
				    cout<<"\n\t\t(4) Aromatic";
				    cout<<"\n\t\t(5) To go back";
				    cout<<"\n\n\t\tEnter your choice";
				    cin>>choice3;
				    if(choice3==1)
				    {
				    	cout<<"\n\t\tWe have the following items in Ladies Floral perfume category:";
			          	cout<<"\n\t\t(1) Flowerbomb--Rs 1500";
		    	        cout<<"\n\t\t(2) GucciBomb--Rs 1500";
		    	        cout<<"\n\n\t\tEnter your choice :";
		    	        cin>>choice4;
		    	        florall=1500;
		    	        if(choice4==1)
		    	        {
		    	        	a16="Flowerbomb";
						}
						if(choice4==2)
		    	        {
		    	        	a16="GucciBomb";
						}
					}
					if(choice3==2)
 {
				    	cout<<"\n\t\tWe have the following items in Ladies Fresh perfume category:";
			          	cout<<"\n\t\t(1) YSL-Libra--Rs 2000";
		    	        cout<<"\n\t\t(2) Black Opium--Rs 3000";
		    	        cout<<"\n\n\t\tEnter your choice :";
		    	        cin>>choice4;
		    	        if(choice4==1)
		    	        {
		    	        	freshl=2000;
		    	        	a17="YSL-Libra";
						}
						if(choice4==2)
						{
							freshl=3000;
							a17="Black Opium";
						}
					}
					if(choice3==3)
				    {
				    	cout<<"\n\t\tWe have the following items in Ladies Citrus perfume category:";
			          	cout<<"\n\t\t(1) Calvin Klien--Rs 3500";
		    	        cout<<"\n\t\t(2) Byredo--Rs 2000";
		    	        cout<<"\n\n\t\tEnter your choice :";
		    	        cin>>choice4;
		    	        if(choice4==1)
		    	        {
		    	        	citrusl=3500;
                    a18="Calvin Klien";
						}
						if(choice4==2)
						{
							citrusl=2000;
							a18="Byredo";
						}
					}
					if(choice3==4)
				    {
				    	cout<<"\n\t\tWe have the following items in Ladies Aromatic perfume category:";
			          	cout<<"\n\t\t(1) Lightblue--Rs 6000";
		    	        cout<<"\n\t\t(2) Lavender--Rs 4000";
		    	        cout<<"\n\n\t\tEnter your choice :";
		    	        cin>>choice4;
		    	        if(choice4==1)
		    	        {
		    	        	aromaticl=6000;
		    	        	a19="Lightblue";
						}
						if(choice4==2)
						{
							aromaticl=4000;
							a19="Lavender";
						}
					}
					if(choice3==5)
					{
                goto label4;
					}
				    }
				}
				if(choice2==3)
				{
					goto label1;
				}
		    }
		}
		//Shoes section
		if(choice1==4)
		{
			for(int b=0;b>-1;b++)
			{
			    label5:
		    	cout<<"\n\t\tShoes";
		        cout<<"\n\t\t(1) Gents";
			    cout<<"\n\t\t(2) Ladies";
			    cout<<"\n\t\t(3) To go Back";
			    cout<<"\n\n\t\tEnter your choice :";
			    cin>>choice2;
			    //Gents shoes section
			    if(choice2==1)
			    {
			    	for(int c=0;c>-1;c++)
			    	{
			    	cout<<"\n\t\tWe have following items in Gents Shoes:";
			    	cout<<"\n\t\t(1) Peshawari Chappal";
			    	cout<<"\n\t\t(2) Boots";
			    	cout<<"\n\t\t(3) To go back";
			    	cout<<"\n\n\t\tEnter your choice:";
			    	cin>>choice3;
			    	if(choice3==1)
			    	{
			    		cout<<"\n\t\tWe have following items in Peshawari Chappal category:";
			    		cout<<"\n\t\t(1) Brown Peshawari Chappal--Rs 2000";
			    		cout<<"\n\t\t(2) Black Peshawari Chappal--Rs 2000";
			    		cout<<"\n\t\t(3) White Peshawari Chappal--Rs 2000";
			    		cout<<"\n\t\t(4) Dark Brown Peshawari Chappal--Rs 2000";
			    		cout<<"\n\n\t\tEnter your choice :";
			    		cin>>choice4;
			    		pc=2000;
			    		if(choice4==1)
		    	        {
		    	        	a20="Brown Peshawari Chappal";
						}
						if(choice4==2)
		    	        {
		    	        	a20="Black Peshawari Chappal";
						}
						if(choice4==3)
		    	        {
		    	        	a20="White Peshawari Chappal";
						}
                        if(choice4==4)
		    	        {
		    	        	a20="Dark Peshawari Chappal";
						}
					}
					if(choice3==2)
					{
						cout<<"\n\t\tWe have following items in Boots category:";
			    		cout<<"\n\t\t(1) Brown Boots--Rs 3500";
			    		cout<<"\n\t\t(2) Black Boots--Rs 2000";
			    		cout<<"\n\t\t(3) White Boots--Rs 2500";
			    		cout<<"\n\t\t(4) Dark Brown Boots--Rs 2000";
			    		cout<<"\n\n\t\tEnter your choice :";
			    		cin>>choice4;
			    		if(choice4==1)
			    		{
			    			bootg=3500;
			    			a21="Brown Boots";
						}
						if(choice4==2) 
						{
                            bootg=2000;
							a21="Black Boots";
						}
						if(choice4==3)
						{
							bootg=2500;
							a21="White Boots";
						}
						if(choice4==4)
						{
							bootg=2000;
							a21="Dark Brown Boots";
						}
					}
					if(choice3==3)
					{
						goto label5;
					}
				    }
				}
				//ladies shoes section
				if(choice2==2)
				{
					for(int c=0;c>-1;c++)
			    	{
			    	cout<<"\n\t\tWe have following items in Ladies Shoes category :";
			    	cout<<"\n\t\t(1) Heels ";
			    	cout<<"\n\t\t(2) Flatshoes";
                    cout<<"\n\t\t(3) Boots";
			    	cout<<"\n\t\t(4) To go back";
			    	cout<<"\n\n\t\tEnter your choice:";
			    	cin>>choice3;
			    	if(choice3==1)
			    	{
			    		cout<<"\n\t\tWe have following items in Heels category :";
			    		cout<<"\n\t\t(1) Brown Heels--Rs 2000";
			    		cout<<"\n\t\t(2) Black Heels--Rs 2000";
			    		cout<<"\n\t\t(3) White Heels--Rs 2000";
			    		cout<<"\n\t\t(4) Dark Brown Heels--Rs 2000";
			    		cout<<"\n\n\t\tEnter your choice :";
			    		cin>>choice4;
			    		heel=2000;
			    		if(choice4==1)
		    	        {
		    	        	a22="Brown Heels";
						}
						if(choice4==2)
		    	        {
		    	        	a22="Black Heels";
						}
						if(choice4==3)
		    	        {
		    	        	a22="White Heels";
						}
						if(choice4==4)
		    	        {
                            a22="Dark Brown Heels";
						}
					}
					if(choice3==2)
					{
						cout<<"\n\t\tWe have following items in Flatshoes category :";
			    		cout<<"\n\t\t(1) Black Flatshoes--Rs 1500";
			    		cout<<"\n\t\t(2) Grey Flatshoes--Rs 1500";
			    		cout<<"\n\t\t(3) White Flatshoes--Rs 1500";
			    		cout<<"\n\t\t(4) Dark Brown Flatshoes--Rs 1500";
			    		cout<<"\n\n\t\tEnter your choice :";
			    		cin>>choice4;
			    		flat=1500;
			    		if(choice4==1)
		    	        {
		    	        	a23="Black Flatshoes";
						}
						if(choice4==2)
		    	        {
		    	        	a23="Grey Flatshoes";
						}
						if(choice4==3)
		    	        {
		    	        	a23="White Flatshoes";
}
						if(choice4==4)
		    	        {
		    	        	a23="Dark Brown Flatshoes";
						}
					}
					if(choice3==3)
					{
						cout<<"\n\t\tWe have Following items in boots category :";
						cout<<"\n\t\t(1) Brown Boots--Rs 3500";
			    		cout<<"\n\t\t(2) Black Boots--Rs 2000";
			    		cout<<"\n\t\t(3) White Boots--Rs 2500";
			    		cout<<"\n\t\t(4) Dark Brown Boots--Rs 2000";
			    		cout<<"\n\n\t\tEnter your choice :";
			    		cin>>choice4;
			    		if(choice4==1)
			    		{
			    			bootl=3500;
			    			a24="Brown Boots";
						}
						if(choice4==2)
						{
							bootl=2000;
							a24="Black Boots";
						}
						if(choice4==3)
						{
							bootl=2500;
							a24="White Boots";
						}
						if(choice4==4)
						{
							bootl=2500;
							a24="Dark Brown Boots";
						}
					}
					if(choice3==4)
					{
						goto label5;
					}
				    }
				}
				if(choice2==3)
				{
					goto label1;
				}
		    }
		}
		if(choice1==5)
{
			countersect();
		}
    }
}
int countersect()
{
	cout<<"\n\n\t\tWelcome to Counter Section";
	cout<<"\n\t\tGenerating your reciept in just a Second";
	cout<<"\n\n\t\t"<<a1<<"\t\t\t"<<shirtg;
	cout<<"\n\t\t"<<a2<<"\t\t\t"<<trouserg;
	cout<<"\n\t\t"<<a3<<"\t\t\t"<<piece3g;
	cout<<"\n\t\t"<<a4<<"\t\t\t"<<piece2g;
	cout<<"\n\t\t"<<a5<<"\t\t\t"<<shirtl;
	cout<<"\n\t\t"<<a6<<"\t\t\t"<<trouserl;
	cout<<"\n\t\t"<<a7<<"\t\t\t"<<dupatta;
	cout<<"\n\t\t"<<a8<<"\t\t\t"<<piece2l;
	cout<<"\n\t\t"<<a9<<"\t\t\t"<<piece3l;
	cout<<"\n\t\t"<<a10<<"\t\t\t"<<sc;
	cout<<"\n\t\t"<<a11<<"\t\t\t"<<abaya;
	cout<<"\n\t\t"<<a12<<"\t\t\t"<<floralg;
	cout<<"\n\t\t"<<a13<<"\t\t\t"<<freshg;
	cout<<"\n\t\t"<<a14<<"\t\t\t"<<citrusg;
	cout<<"\n\t\t"<<a15<<"\t\t\t"<<aromaticg;
	cout<<"\n\t\t"<<a16<<"\t\t\t"<<florall;
	cout<<"\n\t\t"<<a17<<"\t\t\t"<<freshl;
	cout<<"\n\t\t"<<a18<<"\t\t\t"<<citrusl;
	cout<<"\n\t\t"<<a19<<"\t\t\t"<<aromaticl;
	cout<<"\n\t\t"<<a20<<"\t\t\t"<<pc;
	cout<<"\n\t\t"<<a21<<"\t\t\t"<<bootg;
	cout<<"\n\t\t"<<a22<<"\t\t\t"<<heel;
	cout<<"\n\t\t"<<a23<<"\t\t\t"<<flat;
    cout<<"\n\t\t"<<a24<<"\t\t\t"<<bootl;
	total=shirtg+trouserg+piece3g+piece2g+shirtl+trouserl+dupatta+piece2l+piece3l+sc+abaya+
	floralg+freshg+citrusg+aromaticg+florall+freshl+citrusl+aromaticl+pc+bootg+heel+flat+bootl;
	cout<<"\n\n\t\tTotal Bill=\t\t\t"<<total;
	int tax_amount = total* 0.05;
    int new_amount = total + tax_amount;
	cout<<"\n\n\t\tTax deduction of 5% is=\t\t\t"<<tax_amount;
	cout <<"\n\n\t\tThe new total amount is=\t\t\t"<<new_amount;
	cout << endl;
	cout << endl;
    cout << "\n -----------------------------------------------" << endl;
    cout << "\n|                                               |" << endl;
    cout << "\n|   . . .Thanks for visiting our Boutique . . . | " << endl;
   	cout << "\n|                                               |" << endl;
    cout << "\n -----------------------------------------------" << endl;
	cout << endl;
	cout<<"Do visit next time!"<<endl;
	
}
};
int main()
{
	marketfull obj1;
	obj1.intro();
	obj1.interface();
}
