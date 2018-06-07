import java.util.Scanner;

public class A515
{
	public static void main(String[] args) 
	{
		Scanner in = new Scanner(System.in);
		int a = in.nextInt();
		int b = in.nextInt();
		int s = in.nextInt();

		if(a<0)
			a=(a*(-1));
		if(b<0)
			b=(b*(-1));

		int count, tmp;
		
		count=a+b;
		tmp=s-count;

		//System.out.println(0%3);
		if(s==count)
			System.out.println("YES");
		else
		{
			if(s<count)
				System.out.println("NO");
			else 
			{	
				if(tmp%2==0)
					System.out.println("YES");
				else
					System.out.println("NO");
			}
		}
	}
}