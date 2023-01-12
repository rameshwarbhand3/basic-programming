package oops;

 class Rectangle1 {
    int length;
    int  width;
    void insert(int l,int w){
        length=l;
        width=w;
    }
    void calculateArea(){
        System.out.println(length*width);
    }
}
 class Rectangle{
public static void main(String[]args){
Rectangle1 R1=new Rectangle1();
Rectangle1 R2=new Rectangle1();
R1.insert(11,5);
R2.insert(3,15);
R1.calculateArea();
R2.calculateArea();
}

}
