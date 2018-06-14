import java.util.Scanner;

public class A989
{
	public static void main(String[] args) 
	{
		Scanner in = new Scanner(System.in);
		String s = in.next();

		int n = s.length();
		int i, flag=0;

		//System.out.println(n);
		
		for(i=0;i<n-2;i++)
		{
			if(s.charAt(i)=='A')
			{
				if(s.charAt(i+1)=='B')
					if(s.charAt(i+2)=='C')
						flag=1;

				if(s.charAt(i+1)=='C')
					if(s.charAt(i+2)=='B')
						flag=1;
			}
			else if(s.charAt(i)=='C')
			{
				if(s.charAt(i+1)=='A')
					if(s.charAt(i+2)=='B')
						flag=1;

				if(s.charAt(i+1)=='B')
					if(s.charAt(i+2)=='A')
						flag=1;
			}
			else if(s.charAt(i)=='B')
			{
				if(s.charAt(i+1)=='A')
					if(s.charAt(i+2)=='C')
						flag=1;

				if(s.charAt(i+1)=='C')
					if(s.charAt(i+2)=='A')
						flag=1;
			}
		}

		//System.out.println(flag);
		if(n<3)
			System.out.println("No");
		else if(flag==1)
			System.out.println("Yes");
		else
			System.out.println("No");
	}
}