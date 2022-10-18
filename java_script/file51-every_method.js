const numbers=[2,4,6,8,10];
const res=numbers.every((number)=>number%2===0);
console.log(res);
//sabhi number even islia true otherwise false.
//practical example
const usercart=[
    {productId:1,productName:"mobile",price:12000},
    {productId:2,productName:"laptop",price:22000},
    {productId:3,productName:"tv",price:5000},
]
const ans=usercart.every((cartitem)=>cartitem.price>30000);
console.log(ans);   