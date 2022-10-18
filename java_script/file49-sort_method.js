const numbers = [5, 9, 1200, 410, 3000];
numbers.sort((a, b) => {
    return b - a;
});
console.log(numbers);
const userNames = ['Ram', 'sham', 'Abhay', 'vikas'];
userNames.sort();
console.log(userNames);

//To check prices from lowtohigh and hightolow
const products = [
    { productid: 1, productName: "p1", price: 300 },
    { productid: 2, productName: "p2", price: 3000 },
    { productid: 3, productName: "p3", price: 200 },
    { productid: 4, productName: "p4", price: 8000 },
    { productid: 5, productName: "p5", price: 500 },
]
const lowTohigh = products.slice(0).sort((a, b) => {
    return a.price - b.price;
});
const highTolow = products.slice(0).sort((a, b) => {
    return b.price - a.price;
});

//sortig user according to age
const users=[
    {firstName:"Harshit",age:25},
    {firstName:"Ravi",age:25},
    {firstName:"Nitin",age:25},
]
users.sort((a,b)=>{
    if(a.firstName>b.firstName){
        return 1;
    }else{
        return -1;
    }
});
console.log(users);