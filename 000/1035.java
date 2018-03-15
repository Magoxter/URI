import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		int A = sc.nextInt();
		int B = sc.nextInt();
		int C = sc.nextInt();
		int D = sc.nextInt();

		boolean resp = false;

		if (B > C)
			if (D > A)
				if (C + D > A + B)
					if (C > 0)
						if (D > 0)
							if (A % 2 == 0)
								resp = true;

		if (resp)
			System.out.println("Valores aceitos");
		else
			System.out.println("Valores nao aceitos");
	}
}
