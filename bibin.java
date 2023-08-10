abstract class a{
    abstract public void m1();
    abstract public void m2();
   
}


public class bibin {
    public static void main(String[] arg){
    
      a obj=new a(){
        public void m1(){
            System.out.println("from abstract");
        }
        public void m2(){
            System.out.println("from m2 method");
        }
      };
      obj.m2();

    }
}
