//734A
import java.util.Scanner;
import java.io.*;

public class A734
{
	public static void main(String[] args) throws IOException
	{
		Scanner in = new Scanner(System.in);
		int n = in.nextInt();
		String res = in.next();
		
		//System.out.println(n);
		//System.out.println(res);
		int a=0, d=0;

		for(int i=0;i<n;i++)
		{
			if(res.charAt(i)=='A')
				a++;
			else
				d++;
		}
		if(a>d)
			System.out.println("Anton");
		else if(d>a)
			System.out.println("Danik");
		else
			System.out.println("Friendship");
	}
}