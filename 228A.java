import java.util.Scanner;

public class A228
{
	public static void main(String[] args) 
	{
		Scanner in = new Scanner(System.in);
		int[] s = new int[4];
		int[][] cmp = new int[2][4];

		int i, j, k=0, count=0;

		for(i=0;i<4;i++)
		{	
			s[i] = in.nextInt();
			cmp[0][i]=0;
			cmp[1][i]=-1;
		}

		for(i=0;i<4;i++)
		{
			for(j=0;j<4;j++)
			{
				if(s[i]!=cmp[0][j])
				{
					count++;
				}

			}
			if(count==4)
			{
				cmp[0][k]=s[i];
				k++;
			}
			count=0;
		}

		for(i=0;i<4;i++)
		{
			for(j=0;j<4;j++)
			{	
				if(s[i]==cmp[0][j])
					cmp[1][j]++;
			}
		}

		/*for(i=0;i<4;i++)
			System.out.print(cmp[1][i] + " ");*/

		for(i=0;i<4;i++)
			if(cmp[1][i]!=-1)
				count+=cmp[1][i];

		System.out.print(count);	
	}
}