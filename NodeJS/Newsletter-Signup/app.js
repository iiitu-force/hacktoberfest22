const express = require("express")
const bodyParser = require("body-parser")
const request = require("request")
const https = require("https")// lets require the https
const app = express();
const dotenv=require("dotenv");
dotenv.config();
app.use(bodyParser.urlencoded({ extended: true }))
app.use(express.static("public"))
app.get("/", function (req, res) {
    res.sendFile(__dirname + "/signup.html")
})
app.post("/", function (request, response) {
    const firstname = request.body.fname;
    const lastname = request.body.lname;
    const email = request.body.email;
    // console.log(firstname ,  lastname ,email)
    // we didnt see the console log because we did not give action and methid to the form
    const data = {
        // these all keys are defined in mailchimp api
        members: [
            {
                email_address: email,
                status: "subscribed",
                merge_fields: {
                    FNAME: firstname,
                    LNAME: lastname
                }
            }
        ]
    };
    const url = 'https://us12.api.mailchimp.com/3.0/lists/7f6df3b82d'
    const options = {
        method: "POST",
        auth: "vaibhav:b8a41d68f4086f81ca9fc6e23239baf4-us12"
    }
    const jsonData = JSON.stringify(data);
    // since we are not going to change the variable we can change them to the const
    const req = https.request(url, options, function (res) {
        if (res.statusCode === 200) {
            response.sendFile(__dirname +"/success.html")
        } else {
            response.sendFile(__dirname +"/failure.html")
        }
        res.on("data", function (data) {
            console.log(JSON.parse(data));
        })
    })

    req.write(jsonData);
    req.end();



})
app.post("/failure",function(req,res){
    res.redirect("/")
})














app.listen(process.env.PORT||3000, function () {
    console.log("server is running at port 3000")
})



//api key b8a41d68f4086f81ca9fc6e23239baf4-us12
// list id  7f6df3b82d.