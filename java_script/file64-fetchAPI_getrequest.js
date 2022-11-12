const URL = "https://jsonplaceholder.typicode.com/posts";
fetch(URL)
    .then(response => {
        return response.json();
    })
    .then(data => {
        console.log("inside promise");
        console.log('Number of posts '+data.length);
        data.forEach(post => {
            console.log(post);
        });
    })
    
    .catch(error => {
        console.log(error);
    })
