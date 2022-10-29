var express = require("express");
var app = express();
app.set('view engine', 'ejs');
app.use(express.static('public'));

app.get("/", function(req, res){

    res.render("Image gallery");

});

app.listen(3000, function(){

    console.log("Running");

});