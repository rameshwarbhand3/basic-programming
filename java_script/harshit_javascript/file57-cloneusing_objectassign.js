const obj={
    key1:"value1",
    key2:"value2"
}
const obj2={key60:"value60",...obj};
console.log(obj2);
console.log(obj2.key60);
// const obj2=object.assign({key60:"value60"},obj);
// obj.key3="value3";
// console.log(obj);
// console.log(obj2);
const user={
    firstName:"harshit",
    address:{houseNumber:1205}
}
console.log(user?.firstName);
console.log(user?.address?.houseNumber);