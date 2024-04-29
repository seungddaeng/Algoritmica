import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        int datasets = scanner.nextInt();
        for (int dataset = 1; dataset <= datasets; dataset++) {
            double sum = 0;
            for (int i = 0; i < 12; i++) {
                sum += Double.parseDouble(scanner.next().replaceAll(",", ""));
            }
            double average = sum / 12;
            System.out.printf("%d $%,.2f%n", dataset, average);
        }

        scanner.close();
    }
}
