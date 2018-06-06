import java.io.*;
import java.util.Scanner;

 public class A732
{
	public static void main(String[] args) 
	{
		Scanner in = new Scanner(System.in);
		int k = in.nextInt();
		int r = in.nextInt();
		int count = 0;

		int rem = k%10;
//only 1 r coin
//rem is remainder
		if(rem==0)
			count=1;
		else if(rem==1)
			count=r;
		else if(rem==2)
		{
			if(r%2==0)
				count=r/2;
			else
				count=5;
		}
		else if(rem==3)
		{
			if(r%3==0)
				count=r/3;
			else if(r==1)
				count=7;
			else if(r==2)
				count=4;
			else if(r==4)
				count=8;
			else if(r==5)
				count=5;
			else if(r==7)
				count=9;
			else if(r==8)
				count=6;
		}
		else if(rem==4)
		{
			if(r%4==0)
				count=r/4;
			else if(r==2)
				count=3;
			else if(r==6)
				count=4;
			else
				count=5;
		}
		else if(rem==5)
		{
			if(r==5)
				count=1;
			else
				count=2; 
		}
		else if(rem==6)
		{
			if(r==6)
				count=1;
			else if(r==2)
				count=2;
			else if(r==8)
				count=3;
			else if(r==4)
				count=4;
			else
				count=5;
		}
		else if(rem==7)
		{
			if(r==7)
				count=1;
			else if(r==4)
				count=2;
			else if(r==1)
				count=3;
			else if(r==8)
				count=4;
			else if(r==5)
				count=5;
			else if(r==2)
				count=6;
			else if(r==9)
				count=7;
			else if(r==6)
				count=8;
			else if(r==3)
				count=9;
		}
		else if(rem==8)
		{
			if(r==8)
				count=1;
			else if(r==6)
				count=2;
			else if(r==4)
				count=3;
			else if(r==2)
				count=4;
			else
				count=5;
		}
		else
			count=10-r;
		
		System.out.println(count);
	}
}