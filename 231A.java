import java.util.Scanner;

public class A231
{
	public static void main(String[] args) 
	{
		Scanner in = new Scanner(System.in);
		int n = in.nextInt();
		int[][] a = new int[n][3];

		int rcount=0, count=0;

		for(int i=0;i<n;i++)
		{	
			for(int j=0;j<3;j++)
			{
				a[i][j]=in.nextInt();
				if(a[i][j]==1)
					rcount++;
			}
			if(rcount>=2)
				count++;
			rcount=0;
		}

		System.out.print(count);
	}
}