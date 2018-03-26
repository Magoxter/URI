import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		int n = sc.nextInt();

		while (n > 0) {

			int v[] = new int[10001];

			for (int i = 0; i < n; i++)
				v[i] = sc.nextInt();

			System.out.println(picos(v,n));

			n = sc.nextInt();
		}
	}

	public static int picos (int v[],int n) {
		int atl;
		int nxt;

		int up = 0;
		int down = 0;

		int up1 = 0;
		int down1 = 0;

		int pico = 0;

		int prm = v[0];
		int snd = v[1];

		if (snd > prm) {
			up = 1;
			up1 = 1;
		}
		else
		if (snd < prm) {
			down = 1;
			down1 = 1;
		}

		int i = 0;

		while (i < n-1) {

			atl = v[i];
			nxt = v[i +1];

		  if (nxt < atl && up == 1) {
		  	up = 0;
		  	down = 1;
		  ++pico;
		  }
		  else
		  if (nxt > atl && down == 1) {
		  	up = 1;
		  	down = 0;
		  ++pico;
		  }

		++i;
		}

		if (v[n-1] < v[0] && down == 1) {
			up = 1;
			down = 0;
		  ++pico;
		}
		else
		if (v[n-1] > v[0] && up == 1) {
			up = 0;
			down = 1;
		  ++pico;
		}

		if (down == 1 && up1 == 1)
			++pico;
		else
		if (up == 1 && down == 1)
			++pico;

		if (pico == 1)
			++pico;

	 return pico;
	}
}
