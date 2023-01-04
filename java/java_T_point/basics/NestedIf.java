package basics;

 class NestedIf {
  public static void main(String[] args){
    int age=25;
    int weight=51;
    if(age>=18){
        if(weight>50){
            System.out.println("You are eligible to donate blood");
        }
        else{
            System.out.println("YOU are not eligible to donate blood");
        }
    }
    else{
        System.out.println("Age must be greater than 18");
    }
  }  
}
