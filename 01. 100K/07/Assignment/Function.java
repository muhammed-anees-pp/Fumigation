public class Function {
    int result;

    void addition(int num1, int num2){
        result=num1+num2;
        System.out.println("Sum: "+result);
    }

    void substraction(int num1, int num2){
        result=num1-num2;
        System.out.println("Substraction: "+result);
    }

    void multiplication(int num1, int num2){
        result=num1*num2;
        System.out.println("Multiple: "+result);
    }

    void division(int num1, int num2){
        result=num1/num2;
        System.out.println("Division: "+result);
    }
}
