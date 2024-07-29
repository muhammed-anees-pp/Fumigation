public class Class2 {
    public static void main(String[] args) {
        Sample3 obj1=new Sample3();
        Sample3 obj2=new Sample3();

        obj1.num1=15;
        obj1.num2=25;
        obj2.num1=30;
        obj2.num2=50;

        obj1.calculateSum();
        obj2.calculateSum();

        obj1.display();
        obj2.display();
    }
}
