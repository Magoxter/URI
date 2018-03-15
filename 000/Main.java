import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int cod1 = sc.nextInt();
		int qtd1 = sc.nextInt();
		double prc1 = sc.nextDouble();
		
		int cod2 = sc.nextInt();
		int qtd2 = sc.nextInt();
		double prc2 = sc.nextDouble();
		
		prc1 = prc1 * qtd1;
		prc2 = prc2 * qtd2;
		
		System.out.printf("VALOR A PAGAR: R$ %.2f\n", (prc1 + prc2));
	}
}
