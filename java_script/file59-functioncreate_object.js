function createuser(firstName,lastName,email,age,address){
    const user={};
    user.firstName=firstName;
    user.lastName=lastName;
    user.email=email;
    user.age=age;
    user.address=address;
    user.about=function(){
        return `${this.firstName} is ${this.age} years old.`;
    }
    user.is18=function(){
        return this.age>=18;
    }
    return user;
}
const user1=createuser('Rameshwar','Bhand','rambhand',17,"my address");
console.log(user1);
const is18=user1.is18();
const about=user1.about();
console.log(about);
//-------------------------------------------------------------------------
const usermethods={
    about:function(){
        return `${this.firstName} is ${this.age}years old.`;
    },
    is20:function(){
        return this.age>=18;
    }
}
function createuser1(firstName,lastName,email,age,address){
    const user=object.create(usermethods);
    user.firstName=firstName;
    user.lastName=lastName;
    user.email=email;
    user.age=age;
    user.address=address;
    return user;
}
const user3=createuser1('Rameshwar','Bhand','rameshwar@gmail.com',27,"my address");
const user2=createuser1('sham','Bhand','rameshwar@gmail.com',27,"my address");
console.log(user3.about());
console.log(user2.about());