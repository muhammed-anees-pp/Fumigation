public class Hello {
    public static void main(String[] args) {
        
        SampleThread st=new SampleThread();
        Thread t1=new Thread(st);
        t1.start();

        SampleThread st1=new SampleThread();
        Thread t2=new Thread(st1);
        t2.start();

        SampleThread st2=new SampleThread();
        Thread t3=new Thread(st2);
        t3.start();
        
        
    }
    
}
