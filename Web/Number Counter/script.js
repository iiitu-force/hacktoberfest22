// CALL ALL REQUIRED ELEMENTS
const numDisplay = document.querySelector(".number-display");
const inc_audio = new Audio("./audio/ui-click.mp3");
const inc_btn = document.getElementById("count");

// SET INITIAL COUNT
let i = 0;
numDisplay.innerHTML = i;


// SET AUDIO FOR COUNT
inc_btn.addEventListener("click", () => {
    inc_audio.play();
});


// CREATE COUNT FUNCTION
function increment() {
    i++;
    numDisplay.innerHTML = i;
}


// CREATE RESET FUNCTION
function reset() {
    location.reload();
}