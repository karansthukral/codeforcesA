import java.util.Scanner;

public class A595
{
	public static void main(String[] args) 
	{
		Scanner in = new Scanner(System.in);
		int n = in.nextInt();
		int m = in.nextInt();


		int i, j, tmp, count=0;
		tmp=m*2;
		int[][] b = new int[n][tmp];

		for(i=0;i<n;i++)
			for(j=0;j<tmp;j++)
				b[i][j] = in.nextInt();

		for(i=0;i<n;i++)
		{	
			for(j=0;j<tmp;j=j+2)
			{
				if((b[i][j]==1)||(b[i][j+1]==1))
					count++;
			}
		}
		System.out.println(count);
	}
}