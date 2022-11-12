function displayPosts() {
    getPosts()
        .then((posts) => {
            console.log(posts);
            generateTable(posts);
        })
        .catch(error => {
            alert("Error present" + error);
            console.log(error);
        })

};
function getPosts() {
    const URL = "https://jsonplaceholder.typicode.com/posts";
    return fetch(URL)
        .then(response => {
            return response.json();
        })
        .then(data => data);
}

function generateTable(jsonArr) {
    // creates a <table> element and a <tbody> element

    const tbl = document.createElement("table");
    const tblBody = document.createElement("tbody");
    var header = tbl.createTHead();
    var row = header.insertRow(0);
    var cell = row.insertCell(0);
    cell.innerHTML = "<b>UserId</b>";
    var cell = row.insertCell(1);
    cell.innerHTML = "<b>PostId</b>";
    var cell = row.insertCell(2);
    cell.innerHTML = "<b>Title</b>";
    var cell = row.insertCell(3);
    cell.innerHTML = "<b>Description</b>";
    tbl.appendChild(header);

    // creating all cells
    for (let i = 0; i < jsonArr.length; i++) {
        // creates a table row
        const row = document.createElement("tr");
        let post = jsonArr[i];
        Object.keys(post).forEach(function (key) {
            console.log('Key : ' + key + ', Value : ' + post[key])
            // Create a <td> element and a text node, make the text
            // node the contents of the <td>, and put the <td> at
            // the end of the table row
            const cell = document.createElement("td");
            const cellText = document.createTextNode(post[key])
            cell.appendChild(cellText);
            row.appendChild(cell);
        })


        // add the row to the end of the table body
        tblBody.appendChild(row);
    }

    // put the <tbody> in the <table>
    tbl.appendChild(tblBody);
    // appends <table> into <body>
    document.body.appendChild(tbl);
    // sets the border attribute of tbl to '2'
    tbl.setAttribute("border", "4");
}
