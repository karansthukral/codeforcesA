import java.util.Scanner;

public class A980
{
	public static void main(String[] args) 
	{
		Scanner in = new Scanner(System.in);
		String s = in.next();

		int i, j=0, k=0;

		for(i=0;i<s.length();i++)
		{
			if(s.charAt(i)=='o')
				j++;
			else
				k++;
		}
		if(j==0)
			System.out.println("YES");
		else if(k%j==0)
			System.out.println("YES");
		else if(j==1||k==0)
			System.out.println("YES");
		else
			System.out.println("NO");
	}
}