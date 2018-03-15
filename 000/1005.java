import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		double one = sc.nextDouble();
		double duo = sc.nextDouble();

		one *= 3.5;
		duo *= 7.5;

		double sum = one + duo;
		double mdn = sum / 11.0;

		System.out.printf("MEDIA = %.5f\n", mdn);
	}
}
