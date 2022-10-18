const myvar1="value1";
function myapp(){
    function myfunc(){
        const myfunc2=()=>{
            console.log("inside myfun",myvar1);
        }
        myfunc2();
    }
    console.log(myvar1);
    myfunc();
}
myapp();  
 //block scope vs function scopoe.
 //let and const are block scope
 //var is function scope.
 function mysample(){
    if(true){
    let firstName="harshit";
        console.log(firstName);
    }
    if(true){
        console.log(firstName);
    }
    var ans=console.log(firstName);
    console.log(ans);
 }
 mysample();