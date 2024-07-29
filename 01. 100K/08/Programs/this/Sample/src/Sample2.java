public class Sample2 {
    int num1=50,num2=150;
    Sample2(int num1, int num2){
        this.num1=num1;
        this.num2=num2;

        System.out.println("Num1: "+this.num1+" Num2: "+this.num2);
    }

    // Method to print the global variables
    void printGlobalVariables() {
        System.out.println("Global num1: " + this.num1 + " Global num2: " + this.num2);
    }
}
