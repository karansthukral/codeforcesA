import java.util.Scanner;

public class A439
{
	public static void main(String[] args) 
	{
		Scanner in = new Scanner(System.in);
		int n = in.nextInt();
		int d = in.nextInt();
		int[] t = new int[n];

		int i, sumd=0, jokes=0;
		for(i=0;i<n;i++)
		{
			t[i] = in.nextInt();
			sumd+=t[i]+10;
		}
		sumd-=10;
		//System.out.print(sumd);

		if(sumd>d)
		{
			System.out.println("-1");
			System.exit(0);
		}

		jokes=d-sumd;
		jokes/=5;
		jokes+=2*(n-1);

		System.out.println(jokes);
	}
}