const numbers=[3,8,11,9];
const res=numbers.some((number)=>number%2===0);
console.log(res);
//atleast ek number even mila islia true otherwise false;
const usercart=[
    {productId:1,productName:"mobile",price:12000},
    {productId:2,productName:"laptop",price:22000},
    {productId:3,productName:"tv",price:200000},
]
const ans=usercart.some((cartitem)=>cartitem.price>100000);
console.log(ans);