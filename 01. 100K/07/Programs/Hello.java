public class Hello {
    public static void main(String[] args) {
        Sample s1=new Sample();
        Sample s2=new Sample();

        s1.a=10;
        s1.b=20;
        s2.a=100;
        s2.b=200;

        System.out.println("S1a: "+s1.a +" S1b: "+s1.b);
        System.out.println("S2a: "+s2.a +" S2b: "+s2.b);
    }
}


