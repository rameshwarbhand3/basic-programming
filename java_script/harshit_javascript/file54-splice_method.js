const myArray=["item1","item2","item3","item4"];
const deleteitem=myArray.splice(1,2,"inserted item1","inserted item2");
console.log("deleted item",deleteitem);
console.log(myArray);