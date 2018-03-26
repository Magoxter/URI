import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		double k = sc.nextDouble();

		int i = 0;

		while (i < 100) {
			System.out.printf("N[%d] = %.4f\n", i, k);

			k /= 2;
		  ++i;
		}
	}
}
