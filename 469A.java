import java.util.Scanner;

public class A469
{
	public static void main(String[] args) 
	{
		Scanner in = new Scanner(System.in);
		int n = in.nextInt();
		int[] lvl = new int[n];

		int i, flag=0;

		for(i=0;i<n;i++)
			lvl[i]=0;

		int p = in.nextInt();
		int[] plvl = new int[p];

		for(i=0;i<p;i++)
		{
			plvl[i] = in.nextInt();
			lvl[plvl[i]-1]++;
		}

		int q = in.nextInt();
		int[] qlvl = new int[q];

		for(i=0;i<q;i++)
		{	
			qlvl[i] = in.nextInt();
			lvl[qlvl[i]-1]++;
		}

		for(i=0;i<n;i++)
			if(lvl[i]==0)
				flag=1;

		if(flag==1)
			System.out.println("Oh, my keyboard!");
		else
			System.out.println("I become the guy.");


	}
}