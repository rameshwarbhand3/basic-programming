const numbers = [4, 2, 5, 6];
numbers.forEach(function (number, index) {
    console.log(`index is ${index} number is ${number}`);
})
numbers.forEach(function (number, index) {
    console.log(number * 3, index);
})
const users = [
    { firstName: "Ram", age: 27 },
    { firstName: "sham", age: 29 },
    { firstName: "vikas", age: 29 },
    { firstName: "akash", age: 28 }
]

users.forEach(function(user){
    console.log(user.firstName);
    console.log(user.age);
})
users.forEach((user) =>{
    console.log(user.firstName);
    console.log(user.age);
});

// using forof loop
// for(let user of users){
//     console.log(user.firstName);
// }
