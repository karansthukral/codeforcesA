import java.util.Scanner;

public class A796
{
	public static void main(String[] args) 
	{
		Scanner in = new Scanner(System.in);
		int n = in.nextInt();
		int m = in.nextInt();
		int k = in.nextInt();

		int[] a = new int[n];
		int i, pos=-1, pos1=-1, cost=0, cost1=0;

		for(i=0;i<n;i++)
		{
			a[i] = in.nextInt();
			if(a[i]==0)
				a[i]=1000;
		}
		/*for(i=0;i<n;i++)
			System.out.println(a[i]);*/

		if(m==1)
		{
			for(i=0;i<n;i++)
				if(k>=a[i])
				{
					pos=i+1;
					break;
				}
			cost=(pos-m)*10;
			System.out.println(cost);
		}
		else if(m==n)
		{
			for(i=n-1;i>=0;i--)
				if(k>=a[i])
				{
					pos=i+1;
					break;
				}
			cost=(m-pos)*10;	
			System.out.println(cost);		
		}
		else
		{
			pos=m;
			pos1=m;
			for(i=m-1;i>=0;i--)
				if(k>=a[i])
				{
					pos=i+1;
					//System.out.println("Position: " + (pos) + "  Cost: " + a[i]);
					break;
				}
			for(i=m-1;i<n;i++)
				if(k>=a[i])
				{
					pos1=i+1;
					//System.out.println("Position: " + (pos1) + "  Cost: " + a[i]);
					break;
				}

			cost=(m-pos)*10;
			cost1=(pos1-m)*10;
			//System.out.println(cost + " " + cost1);

			if(cost!=0&&cost1!=0)
			{	
				if(cost<=cost1)
					System.out.println(cost);
				else
					System.out.println(cost1);
			}
			else
			{	
				if(cost==0)
					System.out.println(cost1);
				else
					System.out.println(cost);
			}
		}
	}
}