import java.util.Scanner;

public class A988
{
	public static void main(String[] args) 
	{
		Scanner in = new Scanner(System.in);
		int n = in.nextInt();
		int k = in.nextInt();

		int i, j, l=0, count=0;
		int[] a = new int[n];	
		int[][] dis = new int[k][2];

		for(i=0;i<k;i++)
		{	
			dis[i][0]=0;
			dis[i][1]=0;
		}

		for(i=0;i<n;i++)
		{
			a[i] = in.nextInt();
			for(j=0;j<k;j++)
			{
				if(dis[j][0]!=a[i])
					count++;
					//System.out.println(count);
			}
			if(count==k)
			{
				dis[l][0]=a[i];
				dis[l][1]=i+1;
				l++;
				//System.out.println(dis[l][0] + " " + dis[l][1]);	
			}
			if(l==k)
				break;
			count=0;
		}

		/*for(i=0;i<k;i++)
			System.out.println(dis[i][0] + " " + dis[i][1]);*/


		if(l==k)
		{
			System.out.println("YES");
			for(i=0;i<k;i++)
				System.out.print(dis[i][1] + " ");
		}
		else
			System.out.println("NO");
	}
}