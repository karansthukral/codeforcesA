import java.util.Scanner;

public class A610
{
	public static void main(String[] args) 
	{
		Scanner in = new Scanner(System.in);
		int n = in.nextInt();

		int nhlf = n/2;
		int count = 0;

		if(n<6)
			count=0;
		else if(nhlf%2==0)
		{
			count=n/4;
			count--;
		}
		else
		{
			nhlf--;
			count=nhlf/2;
		}

		if(n%2!=0)
			count=0;
		
		System.out.println(count);
	}
}