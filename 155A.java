import java.util.Scanner;

public class A155
{
	public static void main(String[] args) 
	{
		Scanner in = new Scanner(System.in);
		int n = in.nextInt();

		int[] a = new int[n];
		int i, j, countl=0, counth=0, count=0;

		for(i=0;i<n;i++)
			a[i] = in.nextInt();

		for(i=1;i<n;i++)
		{
			for(j=i-1;j>=0;j--)
			{	
				if(a[i]>a[j])
					counth++;

				else if(a[i]<a[j])
					countl++;
			}
			//System.out.println((i+1) + " " + counth + " " + countl);
			if(countl==i||counth==i)
			{
				count++;
				//System.out.println(i+1);
			}
			countl=0;
			counth=0;
		}
		System.out.println(count);
	}
}