import java.util.Scanner;

public class A339
{
	public static void main(String[] args) 
	{
		Scanner in = new Scanner(System.in);
		String s = in.next();
		String copy;
		int[] a = new int[3];

		int i, j;
		for(i=0;i<s.length();i++)
		{
			if(s.charAt(i)=='1')
				a[0]++;
			else if(s.charAt(i)=='2')
				a[1]++;
			else if(s.charAt(i)=='3')
				a[2]++;
		}
		int plus=a[0]+a[1]+a[2]-1;

		for(i=0;i<3;i++)
		{
			for(j=0;j<a[i];j++)
			{
				System.out.print(i+1);
				if(plus!=0)
				{
					System.out.print("+");
					plus--;
				}
			}
		}
	}
}