var player = {
    x: 100,
    y: 600,
    x_v: 0,
    y_v: 0,
    jump : true,
    height: 50,
    width: 50
};

var gravity = 0.6;
var friction = 0.6;

var num = 8;

var platforms = [];

function renderCanvas(){
    ctx.fillStyle = "#15151e";
    // ctx.fillStyle = "rgba(21, 21, 30, 0.5)";
    ctx.fillRect(0, 0, 1000, 700);
    
    // player
    ctx.fillStyle = "white";
    ctx.fillRect((player.x) - 50, (player.y) - 50, player.width, player.height);

    // platforms
    // ctx.fillStyle = "#45597E";
    ctx.fillStyle = "#b31aff";
    for(i = 0; i < num; i++){
        ctx.fillRect(platforms[i].x, platforms[i].y, platforms[i].width, platforms[i].height);
    }
}

function clearCanvas(){
    ctx.fillStyle = "white";
    ctx.fillRect(0, 0, 1000, 700);
}

function createPlat(){

    platforms.push({x: 0, y: 685, width: 1000, height: 15});

    platforms.push({x: 800, y: 600, width: 300, height: 15});
    platforms.push({x: 400, y: 515, width: 300, height: 15});
    platforms.push({x: 150, y: 515, width: 150, height: 15});
    platforms.push({x: 0, y: 425, width: 150, height: 15});
    platforms.push({x: 200, y: 335, width: 250, height: 15});
    platforms.push({x: 500, y: 245, width: 220, height: 15});
    platforms.push({x: 800, y: 180, width: 200, height: 15});
}

function renderPlat(){
    ctx.fillStyle = "#45597E";
    for(i = 0; i < num; i++){
        ctx.fillRect(platforms[i].x, platforms[i].y, platforms[i].width, platforms[i].height);
    }
}

document.addEventListener("keydown", (e =>{
    if(e.keyCode === 32) {
        if(player.jump == false) {
            player.y_v = -10;
        }
    }
}));

document.addEventListener("keyup", (e =>{
    if(e.keyCode == 38) {
        if(player.y_v < -2) {
        player.y_v = -3;
        }
    }
}));

let movingRight = true;


function movePlayer(){
    const speed = 7;

    if(movingRight){
        player.x_v = speed;
    } else{
        player.x_v = -speed;
    }

    if(player.x >= canvas.width - 10){
        movingRight = false;
    } else if(player.x <= 50){
        movingRight = true;
    }

    if(player.jump == false) {
        player.x_v *= friction;
    } else {
        player.y_v += gravity;
    }
    player.jump = true;
    
    player.x += player.x_v;
    player.y += player.y_v;

    let j = -1;

    for(let i = 0; i < num - 1; i++){
        if(platforms[i].x < player.x && player.x < platforms[i].x + platforms[i].width &&
            platforms[i].y < player.y && player.y < platforms[i].y + platforms[i].height){
            j = i;
        }
    }

    if(platforms[7].x < player.x && player.x < platforms[7].x + platforms[7].width &&
        platforms[7].y < player.y && player.y < platforms[7].y + platforms[7].height){
            alert("Hala an error occured. This button doesn't seem to be working.")
            document.querySelector('#hmmButton').style.opacity = 0;
    }

    if (j > -1){
        player.jump = false;
        player.y = platforms[j].y;    
    }

    if(player.y > canvas.height + 200){
        buttonText = document.querySelector('#buttonText');
        buttonText.style.fontSize = "5em";
        buttonText.style.left = "690px";
        document.querySelector('#text').style.left = "730px";
        document.querySelector('#pic').style.left = "790px";
        document.querySelector('#hmmButton').style.opacity = 0;
        canvas.style.cursor = "default";
        canvas.style.opacity = 0;
        clearCanvas();
    } else{
        renderCanvas();
    }
}

canvas=document.querySelector('#canvas');
ctx=canvas.getContext("2d");
ctx.canvas.width = 1000;
ctx.canvas.height = 700;

createPlat();

setInterval(movePlayer, 15);