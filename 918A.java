import java.util.Scanner;

public class A918
{
	public static void main(String[] args) 
	{
		Scanner in = new Scanner(System.in);
		int n = in.nextInt();
		int[] a = new int[1001];
		a[0]=1;
		a[1]=1;

		for(int i=2;i<1001;i++)
			a[i]=a[i-1]+a[i-2];

		int j=1;
		for(int i=1;i<n+1;i++)
		{
			if(i==a[j])
			{
				System.out.print("O");
				j++;
			}
			else
				System.out.print("o");
		}
	}
}