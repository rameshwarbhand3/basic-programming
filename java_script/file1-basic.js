console.log("hello world")
var a=10;
console.log(a);
const numbers=[2,3,4,5];
function myfun(number,index){
    console.log(`index is ${index} number is ${number}`);
}
for(let i=0;i<numbers.length;i++){
    myfun(numbers[i],i);
}