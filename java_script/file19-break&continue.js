let num=10;
for(let i=1;i<=num;i++){
    if(i===4){
        break;
    }
    console.log(i);
}
for(let i=1;i<=num;i++){
    if(i===4){
        continue;
    }
    console.log(i);
}