const person={
    firstName:"Ram",
    gender:"male",
    age:27
}
function printDetails(obj){
    console.log(obj.firstName);
    console.log(obj.gender);
}
// function printDetails({firstName,gender,age}){
//     console.log(firstName);
//     console.log(gender);
//     console.log(age);
// }
printDetails(person);