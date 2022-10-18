// const band={
//     bandName:"led zepplin",
//     famousSong:"stairway to heaven",
//     year:1968,
//     anotherFamousSong:"kashmir",
// }
// let{bandName,famousSong,...restprops}=band;
// console.log(bandName);
// console.log(famousSong);
// console.log(restprops);


//nested destructuring
const users=[
    {userid:1,firstName:"Ram",gender:"male"},
    {userid:2,firstName:"sakshi",gender:"female"},
    {userid:3,firstName:"Ramesh",gender:"male"},
    {userid:4,firstName:"Rakhi",gender:"female"},
    {userid:5,firstName:"Rajat",gender:"male"},
]
const[{firstName:user1firstName,userid},,{gender:user3gender},,{userid:user5userid}]=users;
console.log(user1firstName);
console.log(userid);
console.log(user3gender);
console.log(user5userid);
