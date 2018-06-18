import java.util.Scanner;

public class A136
{
	public static void main(String[] args) 
	{
		Scanner in = new Scanner(System.in);
		int n = in.nextInt();

		int i;

		int[] p = new int[n];
		int[] r = new int[n];

		for(i=0;i<n;i++)
		{	
			p[i]=in.nextInt();
			r[p[i]-1]=i+1;
		}

		for(i=0;i<n;i++)
			System.out.print(r[i] + " ");
	}
}