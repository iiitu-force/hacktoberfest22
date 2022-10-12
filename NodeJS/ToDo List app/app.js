const express = require('express')
const bodyParser = require('body-parser')
const mongoose = require("mongoose");

mongoose.connect("mongodb://localhost:27017/toDoListDB", {useNewUrlParser: true});

const itemSchema = new mongoose.Schema({
    name: String,
})

const itemsM = new mongoose.model("itemsM", itemSchema);

const app = express();

let items= ["Wake Up"];
let workItems= [];

const item1 = new itemsM({
    name: "Welcome to your ToDo List",
});

const item2 = new itemsM({
    name: "Click + to add items",
});

const item3 = new itemsM({
    name: "Select checkbox to delete items",
});

const defItems = [item1,item2,item3];



app.set('view engine', 'ejs');

app.use(bodyParser.urlencoded({extended: true}));
app.use(express.static("public"));

app.get("/", (req,res)=>
{

    var today = new Date();
    
    var options = {
        weekday: "long",
        day: "numeric",
        month: "long"
    };

    var day = today.toLocaleDateString("en-US",options);

    
    itemsM.find({}, (e,defaultItems)=>
    {

        if(defaultItems.length===0)
        {
           itemsM.insertMany(defItems, (e,res)=>
           {
              if(e)
                {
                   console.log(e);
                }
              else{
                   console.log("Succesfully saved items to DB");
                  }
           });
           res.redirect("/");
        }


        else
        {
            res.render("list",{
                listTitle: day,
                newListItems: defaultItems
               } );
        }  
    })
});

app.post("/",(req,res)=>
{
    let item =req.body.nextItem
    
    
        const ItemName = item;

        const newItem = new itemsM(
            {
                name: ItemName,
            }
        )
        newItem.save();
    
    
});

app.get("/work", (req,res)=>
{
    res.render("list", {listTitle: "Work List", newListItems: workItems});
});

app.get("/aboutme", (req,res)=>
{
    res.render('about')
});

app.listen(process.env.PORT || 3000, ()=> {
    console.log("Server is running on port 3000")
});


