// const myArray=["Hello","cat","dog","lion"];
// const ans=myArray.find((string)=>string.length===3);
// console.log(ans);
const users=[
    {userId:1,userName:"harshit"},
    {userId:2,userName:"mohit"},
    {userId:3,userName:"nitish"},
]
const myuser=users.find((user)=>{
    return user.userId===3;
});
console.log(myuser);