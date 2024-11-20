public class B extends A {
    void display(){
        System.out.println("From class B");
    }

    public static void main(String[] args) {
        B b=new B();
        b.display();
    }
}
