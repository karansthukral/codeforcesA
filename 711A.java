import java.util.Scanner;

public class A711
{
	public static void main(String[] args) 
	{
		Scanner in = new Scanner(System.in);
		int n = in.nextInt();

		String[] b = new String[n];
		int i, flag=-1, side=0;

		for(i=0;i<n;i++)
			b[i] = in.next();

		/*for(i=0;i<n;i++)
			System.out.println(b[i]);*/

		for(i=0;i<n;i++)
		{
			if((b[i].charAt(0)=='O')&&(b[i].charAt(1)=='O'))
			{
				flag=i;
				side=-1;
				break;
			}	
			else if((b[i].charAt(3)=='O')&&(b[i].charAt(4)=='O'))
			{
				flag=i;
				side=1;
				break;
			}
		}

		if(flag!=-1)
		{	
			System.out.println("YES");
			for(i=0;i<flag;i++)
				System.out.println(b[i]);

			if(side==-1)	
				System.out.println("++|" + b[flag].charAt(3) + b[flag].charAt(4));	
			else
			{
				System.out.print(b[flag].charAt(0));
				System.out.println(b[flag].charAt(1) + "|++");
			}

			if(flag<n-1)
				for(i=flag+1;i<n;i++)
					System.out.println(b[i]);
		}
		else
			System.out.println("NO");
	
	}
}