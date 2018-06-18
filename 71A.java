import java.util.Scanner;

public class A71
{
	public static void main(String[] args) 
	{
		Scanner in = new Scanner(System.in);
		int n = in.nextInt();
		String[] s = new String[n];

		for(int i=0;i<n;i++)
		{
			s[i] = in.next();
			if(s[i].length()>10)
			{	
				System.out.print(s[i].charAt(0));
				System.out.print(s[i].length()-2);
				System.out.print(s[i].charAt(s[i].length()-1));
			}
			else
				System.out.print(s[i]);

			System.out.println();
		}

	}
}