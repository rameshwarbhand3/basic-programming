const numbers=[2,3,4,5];
// const square=function(number){
//     return number*number;
// }
// console.log(square(2));
const squareNumber=numbers.map(function(number){
    return number*number;
});
console.log(squareNumber);
const users= [
    { firstName: "Ram", age: 27 },
    { firstName: "sham", age: 29 },
    { firstName: "vikas", age: 29 },
    { firstName: "akash", age: 28 }
]
const usernames=users.map(function(user){
return user.firstName;
});
console.log(usernames);

const userNames=users.map((user)=>{
    return user.firstName;
    });
    console.log(userNames);