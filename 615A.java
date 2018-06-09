import java.util.Scanner;
import java.io.*;
import java.lang.*;

public class A615
{
	public static void main(String[] args) 
	{
		Scanner in = new Scanner(System.in);
		int n = in.nextInt();
		int m = in.nextInt();

		int[] x = new int[n];
		int[] bulb = new int[m];

		int i, j, k;

		for(i=0;i<n;i++)
		{
			x[i]=in.nextInt();
				for(j=0;j<x[i];j++)
				{	
					k=in.nextInt();
					bulb[k-1]++;
				}
		}
		k=0;
		for(i=0;i<m;i++)
			if(bulb[i]>0)
				k++;

		if(k==m)
			System.out.println("YES");
		else
			System.out.println("NO");
	}
}