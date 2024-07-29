import java.util.Scanner;

public class Take {
    
    void takeValues(){
        Scanner number=new Scanner(System.in);

        System.out.println("Enter two numbers: ");
        int n1=number.nextInt();
        int n2=number.nextInt();

        Operation op=new Operation();
        op.addition(n1, n2);
    }
}
