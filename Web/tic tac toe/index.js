// lets start the js 
console.log(" welcome to tic tac toe");
let music = new Audio("music.mp3");
let audioTurn = new Audio("ting.mp3");
let gameover = new Audio("gameover.mp3");
let turn  =  "X";
let isgameover = false; 
// function to change the turn 
 const changeTurn = ()=>{

    return turn  ==="X"?"0":"X";
    // terniary operator
 }
 // function to check for a win
 const checkWin = ()=>{
// ab jeetna ka logic likhna hai
    // here phla wins ek array fir uske andar bhi array of winn99ing combination
    let boxtext = document.getElementsByClassName('boxtext');

    let wins = [
        [0, 1, 2, 5, 5, 0],
        [3, 4, 5, 5, 15, 0],
        [6, 7, 8, 5, 25, 0],
        [0, 3, 6, -5, 15, 90],
        [1, 4, 7, 5, 15, 90],
        [2, 5, 8, 15, 15, 90],
        [0, 4, 8, 5, 15, 45],
        [2, 4, 6, 5, 15, 135],
    ]
    // here e[0] means that first element of arrat like in [0,1,2]its 0transform prop add  kranga
    // jab bhhi koi jeetaga toh transform property set kranga x ,y and rotate kitna 
    wins.forEach(e =>{
        if((boxtext[e[0]].innerText === boxtext[e[1]].innerText)&&(boxtext[e[2]].innerText === boxtext[e[1]].innerText)&&(boxtext[e[0]].innerText !== '')){
            document.querySelector('.info').innerText = boxtext[e[0]].innerText + " Won";
            isgameover = true;
            music.pause();
            gameover.play();
            // jab  bhi gameover ho zyga tab i will show gif width change krke;
            document.querySelector('.imgbox').getElementsByTagName('img')[0].style.width = "200px";
            document.querySelector(".line").style.transform = `translate(${e[3]}vw, ${e[4]}vw) rotate(${e[5]}deg)`
            document.querySelector(".line").style.width = "20vw";
           
        }
        // console.log(boxtext[e[0]]);
    })
 }
// game logic
// means kesa and kab function call krna hai and kha event listener lga na h and so on
//sare boxes par event listener lga na hai
music.play()
let boxes = document.getElementsByClassName("box");
//  now this boxes will get htmlcollection so convert it into the array by array.from then use for each and sabme  evnetlistener lga do
Array.from(boxes).forEach(element =>{
    // here in place of document .query selector we habe to do element . query selector because i want to select that box ke andar ka boxtext ka cpontent change 
    let boxtext = element.querySelector('.boxtext');
    // har element par event listener
    // arrow function
    element.addEventListener('click',()=>{
        if(boxtext.innerText === ''){
            boxtext.innerText = turn;
           turn =  changeTurn();
            audioTurn.play();
            checkWin();
            if(!isgameover){
                document.getElementsByClassName("info")[0].innerText = "turn for " + turn;

            }
            
            
        }
    })
}) 
// ek baar x ya 0 jeetna ke baad bhi u are playing and if 0 or x won again then also change hoga 
// add on click listener to reset button

// console.log(reset);
// let reset = document.getElementsByClassName("btn"); 
// how reset is working
reset.addEventListener('click', ()=>{
    // i want all box text to be empty
    let boxtexts = document.querySelectorAll('.boxtext');
    Array.from(boxtexts).forEach(element=>{
        element.innerText ="";
    });
    turn = 'X';
    music.play();
   
   isgameover = false;
        document.getElementsByClassName("info")[0].innerText = "turn for " + turn;
        document.querySelector('.imgbox').getElementsByTagName('img')[0].style.width = "0px";
        document.querySelector(".line").style.width = "0vw";
    
    
    
})
// line ki media queries theek krdo and reset aujtomaticlaly after 5 sec