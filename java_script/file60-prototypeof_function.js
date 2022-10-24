// const obj1={
//     key1:"value1",
//     key2:"value2"
// }
// const obj2=object.creat(obj1);
// console.log(obj2);

const createuser=((firstName,lastName,email,age,address)=>{
    this.firstName=firstName;
    this.lastName=lastName;
    this.email=email;
    this.age=age;
    this.address=address;
})
   createuser.prototype.about=function(){
        return `${this.firstName} is ${this.age}years old.`;
    }
    createuser.prototype.is20=function(){
        return this.age>=18;
    }

const user3= new createuser('Rameshwar','Bhand','rameshwar@gmail.com',27,"my address");
const user2=new createuser('sham','Bhand','rameshwar@gmail.com',27,"my address");
console.log(user3.about());
console.log(user2.about());
