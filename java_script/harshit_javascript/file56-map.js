
//map are similar to object store data in key value form.
//In map we can use anything as key but in object we have oject literal
//object literal key may be key->string or key->symbol.

// const person={
//     firstName:"harshit",
//     "age":30,
//     1:"one"
// }
// console.log(person.firstName);
// console.log(person["firstName"]);
// console.log(person["age"]);

const person1={
    id:1,
    firstName:"harshit"
}
const person2={
    id:2,
    firstName:"harshada"
}
const extrainfo=new Map();
extrainfo.set(person1,{age:29,gender:"male"});
extrainfo.set(person2,{age:20,gender:"female"});
console.log(person1.id);
console.log(extrainfo.get(person1).gender);
console.log(extrainfo.get(person2).gender);