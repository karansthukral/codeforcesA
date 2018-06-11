import java.util.Scanner;

public class A735
{
	public static void main(String[] args) 
	{
		Scanner in = new Scanner(System.in);
		int n = in.nextInt();
		int k = in.nextInt();
		String s = in.next();

		int g=-1, t=-1, i, flag=0;

		for(i=0;i<n;i++)
		{
			if(s.charAt(i)=='G')
				g=i;
			else if(s.charAt(i)=='T')
				t=i;
		}
		if(g<t)
		{
			if((t-g)%k!=0)
				flag=1;
			else
			{
				i=g;
				while(true)
				{
					if(s.charAt(i)=='#')
					{	
						flag=1;
						break;
					}
					i+=k;

					if(i==t)
						break;
				}
			}
		}
		else
		{
			if((g-t)%k!=0)
				flag=1;
			else
			{
				i=t;
				while(true)
				{
					if(s.charAt(i)=='#')
					{	
						flag=1;
						break;
					}
					i+=k;
					if(i==g)
						break;
				}
			}			
		}

		if(flag==1)
			System.out.println("NO");
		else
			System.out.println("YES");
	}
}