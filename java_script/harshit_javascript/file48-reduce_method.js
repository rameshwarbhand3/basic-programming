const numbers=[1,2,3,4,5,10];
//sum of all numner in array
const sum=numbers.reduce((accumulator,currentvalue)=>{
    return accumulator+currentvalue;
},0);
console.log(sum);
//practical example
const usercart=[
    {productid:1,productName:"mobile",price:12000},
    {productid:2,productName:"laptop",price:35000},
    {productid:3,productName:"tv",price:15000},
]
const totalAmount=usercart.reduce((totalprice,currentproduct)=>{
    return totalprice+currentproduct.price;

},0);
console.log(totalAmount);