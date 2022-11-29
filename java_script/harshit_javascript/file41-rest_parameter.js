function addAll(...numbers){
    let total=0;
    for(let number of numbers){
        total=total+number;
    }
    return total;
}
const ans=addAll(1,2,3,4);
console.log(ans);