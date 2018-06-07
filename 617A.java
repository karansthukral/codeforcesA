import java.util.Scanner;

public class A617
{
	public static void main(String[] args) 
	{
		Scanner in = new Scanner(System.in);
		int x = in.nextInt();
		int rem, count=0;

		if(x>=10)
		{
			rem=x%5;
			count=x/5;			
			if(rem==0)
				count=x/5;
			else
				count++;
		}
		else
		{
			if(x<6)
				count=1;
			else
				count=2;
		}
		System.out.println(count);
	}
}