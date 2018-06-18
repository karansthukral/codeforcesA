import java.util.Scanner;

public class A151
{
	public static void main(String[] args) 
	{
		Scanner in = new Scanner(System.in);
		int n = in.nextInt();
		int k = in.nextInt();
		int l = in.nextInt();
		int c = in.nextInt();
		int d = in.nextInt();
		int p = in.nextInt();
		int nl = in.nextInt();
		int np = in.nextInt();

		int tl=c*d;
		int td=k*l;

		int[] toast = new int[3];

		toast[0]=(td/nl)/n;
		toast[1]=tl/n;
		toast[2]=(p/np)/n;

		//System.out.println(toast[0] + " " + toast[1] + " " + toast[2]);

		int min=toast[0];
		for(int i=0;i<3;i++)
			if(min>=toast[i])
				min=toast[i];

		System.out.print(min);

	}
}