import java.util.Scanner;

public class A432
{
	public static void main(String[] args) 
	{
		Scanner in = new Scanner(System.in);
		int n = in.nextInt();
		int k = in.nextInt();

		int[] a = new int[n];
		int i, count=0;

		for(i=0;i<n;i++)
		{
			a[i] = in.nextInt();
			
			if((a[i]+k)<=5)
				count++;
		}

		count/=3;
		System.out.println(count);

	}
}