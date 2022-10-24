const personinfo = function () {
    console.log(`person name is ${this.firstName} and age is ${this.age}`);
}
const person1 = {
    firstName: "harshit",
    age: 30,
    about: personinfo
}


const person2 = {
    firstName: "Rameshwar",
    age: 27,
    about: personinfo
}


const person3 = {
    firstName: "Raj",
    age: 25,
    about: personinfo
}
person1.about();
person2.about();
person3.about();
//sample example
// const user1={
//     firstName:"hashit",
//     age:8,
//     about:function(){
//         console.log(this.firstName,this.age);
//     }
// }
// user1.about();
// const myfun=user1.about.bind(user1);
// myfun();
//
const user2={
    firstName:"hashit",
    age:8,
    about:function(){
        console.log(this.firstName,this.age);
    }
}
user2.about.bind(user2);
