import java.util.Scanner;

public class A490
{
	public static void main(String[] args) 
	{
		Scanner in = new Scanner(System.in);
		int n = in.nextInt();
		int[] a = new int[n];
		int[] cap = new int[3];

		int i, j=0, k=0, l=0;

		for(i=0;i<n;i++)
		{
			a[i]=in.nextInt();
			cap[a[i]-1]++;
		}
		int min = cap[0];

		for(i=1;i<3;i++)
			if(min>=cap[i])
				min=cap[i];

		int[][] team = new int[3][n];

		for(i=0;i<n;i++)
		{
			if(a[i]==1)
			{	
				team[a[i]-1][j]=i+1;
				j++;
			}
			else if(a[i]==2)
			{	
				team[a[i]-1][k]=i+1;
				k++;
			}
			else if(a[i]==3)
			{	
				team[a[i]-1][l]=i+1;
				l++;
			}			
		} 

		/*for(i=0;i<n;i++)
			System.out.println(team[0][i] + " " + team[1][i] + " " + team[2][i]);*/

		System.out.println(min);

		for(i=0;i<min;i++)
		{
			System.out.println(team[0][i] + " " + team[1][i] + " " + team[2][i]);
		}


	}
}