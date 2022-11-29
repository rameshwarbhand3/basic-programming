function app(){
    const myfun=()=>{
        console.log("hello from myfun")
    }
    const addTwonum=(num1,num2)=>{
        return num1+num2;
    }
    const mul=(num1,num2)=>num1*num2;
    console.log("inside app");
    myfun();
    console.log(addTwonum(2,3));
    console.log(mul(2,3));
}
app();
