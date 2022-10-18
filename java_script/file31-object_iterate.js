const person={name:"Ram",age:27," hobbies":["guitar","sleeping","listening to music"]}
for(let key in person){
    // console.log(`${key}:${person[key]}`);
    console.log(key,":",person[key]);
}
//computed properties
const key1="objkey1";
const key2="objkey2";
const value1="myvalue1";
const value2="myvalue2";
const obj={};
obj[key1]=value1;
obj[key2]=value2;
console.log(obj);