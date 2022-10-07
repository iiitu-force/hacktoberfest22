function coinFlip() {
    let images = new Array("Heads.png", "Tails.png");
    let show_rand_img = Math.floor(Math.random()*images.length);
    document.getElementById("heads-tails").src = "./images/" + images[show_rand_img];

    document.getElementById("flip-button").style.display = "none";
    document.getElementById("reset-button").style.display = "block";
}

function reset() {
    location.reload();
}