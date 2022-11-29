// const singHappyBirthday=function(){
//     console.log("happy birthday to you...");
// }
// singHappyBirthday();

const singHappyBirthday=()=>{
    console.log("happy birthday to you...");
}
singHappyBirthday();

// const isEven=(num)=>{
//     return num%2===0;
// }
// console.log(isEven(8));
const isEven=num=> num%2===0;
console.log(isEven(4));

// const firstchar=(anystring)=>{
//     return anystring[0];
// }
// console.log(firstchar("Ram"));
const firstchar=(anystring)=>anystring[0];
console.log(firstchar("harshit"));

const findtarget=(array,target)=>{
    for(let i=0;i<array.length;i++){
        if(array[i]==target){
            return i;
        }
    }
    return -1;
}
console.log(findtarget([2,3,4,5,6],5));