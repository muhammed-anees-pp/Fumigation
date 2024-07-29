import java.util.Scanner;

public class Menu {
    public static void main(String[] args) {
        Scanner number=new Scanner(System.in);
        Function operation1=new Function(); //Object created

        System.out.println("Enter two numbers: ");
        int number1=number.nextInt();
        int number2=number.nextInt();

        System.out.println("1 for Addition \n2 for Substraction \n3 for Multiplication \n4 for Division \n:");
        int choice=number.nextInt();

        
        switch (choice) {
            case 1:
                operation1.addition(number1,number2);
                break;
            case 2:
                operation1.substraction(number1,number2);
                break;
            case 3:
                operation1.multiplication(number1,number2);
                break;
            case 4:
                operation1.division(number1,number2);
                break;
            default:
                System.out.println("Wrong Entry!!");
                break;
        }
    }
}
