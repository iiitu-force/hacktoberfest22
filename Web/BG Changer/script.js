const btn = document.getElementById("btn");
const audio = new Audio("./audio/mixkit-cartoon-bubbles-popping-732.wav");
btn.addEventListener("click", () => {
    audio.play();
});

function changeBg() {
    let bgs = new Array("#AB46D2", "#FF6FB5", "#55D8C1", "#FCF69C");
    let rand_bg = Math.floor(Math.random()*bgs.length);
    document.body.style.backgroundColor = bgs[rand_bg];
}