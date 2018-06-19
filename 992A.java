import java.util.Scanner;

public class A992
{
	public static void main(String[] args) 
	{
		Scanner in = new Scanner(System.in);
		int n = in.nextInt();

		int[] a = new int[n];
		int[] pnum = new int[100001];
		int[] nnum = new int[100001];

		int i, count=0;

		for(i=0;i<n;i++)
		{
			a[i] = in.nextInt();
			if(a[i]>0)
				pnum[a[i]]++;
			else if(a[i]<0)
				nnum[a[i]*(-1)]++;
		}
		for(i=0;i<100001;i++)
		{
			if(pnum[i]>0)
				count++;
			if(nnum[i]>0)
				count++;
			//System.out.println(i + " " + count);
		}
		System.out.println(count);
	}
}