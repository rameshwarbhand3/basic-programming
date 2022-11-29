const numbers=[1,2,5,6,8];
const evenNumbers=numbers.filter((number)=>{
    return number%2!==0;
});
console.log(evenNumbers);