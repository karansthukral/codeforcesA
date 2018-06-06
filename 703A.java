import java.util.Scanner;

public class A703
{
	public static void main(String[] args) 
	{
		Scanner in = new Scanner(System.in);
		int n = in.nextInt();

		int[] miska = new int[n];
		int[] chris = new int[n];
		int m=0, c=0;
		
		for(int i=0;i<n;i++)
		{
			miska[i] = in.nextInt();
			chris[i] = in.nextInt();
			if(miska[i]>chris[i])
				m++;
			else if(miska[i]<chris[i])
				c++;
		}
		if(c>m)
			System.out.println("Chris");
		else if(m>c)
			System.out.println("Mishka");
		else
			System.out.println("Friendship is magic!^^");

	}
}