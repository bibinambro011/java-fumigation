class parent{
    parent(){
        System.out.println("from constructor");
    }

    static{
        System.out.println("from static");
    }
}


public class sharath {
    public static void main(String[] args){
        parent p1=new parent();
       
        
    }
}