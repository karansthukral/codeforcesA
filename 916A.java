import java.util.Scanner;

public class A916
{
	public static void main(String[] args) 
	{
		Scanner in = new Scanner(System.in);
		int x = in.nextInt();
		int hh = in.nextInt();
		int mm = in.nextInt();
		int count=0;

		while(check(hh, mm)!=1)
		{
			if(mm>=x)
				mm-=x;
			else
			{
				mm=60+mm-x;
				if(hh==0)
					hh=23;
				else
					hh--;
			}
			count++;		
		}
		System.out.print(count);
	}

	public static int check(int a, int b)
	{
		int flag=0;
		if(a%10==7)
			flag=1;
		if(b%10==7)
			flag=1;
		a/=10;
		b/=10;
		if(a%10==7)
			flag=1;
		if(b%10==7)
			flag=1;

		return flag;
	}
}