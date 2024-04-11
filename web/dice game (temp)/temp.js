let nums1 = [];
let nums2 = [];

const randomDice = () => {
    const random = Math.floor(Math.random() * 6) + 1;
    return random;
}

const rollSingleDice = (diceElement, containerNum) => {
    const random = randomDice();
    const nums = containerNum === 1 ? nums1 : nums2;

    diceElement.style.animation = 'rolling 2s';

    setTimeout(() => {

        switch (random) {
            case 1:
                diceElement.style.transform = 'rotateX(0deg) rotateY(0deg)';
                break;
            case 2:
                diceElement.style.transform = 'rotateX(-90deg) rotateY(0deg)';
                break;
            case 3:
                diceElement.style.transform = 'rotateX(0deg) rotateY(90deg)';
                break;
            case 4:
                diceElement.style.transform = 'rotateX(0deg) rotateY(-90deg)';
                break;
            case 5:
                diceElement.style.transform = 'rotateX(90deg) rotateY(0deg)';
                break;
            case 6:
                diceElement.style.transform = 'rotateX(180deg) rotateY(0deg)';
                break;
        }

        diceElement.style.animation = 'none';

        nums.push(random);
        // console.log(nums);
        showTotal(containerNum);

    }, 2050);
}

function showTotal(containerNum) {
    const nums = containerNum === 1 ? nums1 : nums2;
    const totalValue = nums.reduce((total, num) => total + num, 0);
    const containerSelector = containerNum === 1 ? '.dice-container' : '.dice-container2';
    const container = document.querySelector(containerSelector);
    
    if (!container.querySelector('.total')) {
        const totalElement = document.createElement('div');
        totalElement.textContent = "Total: " + totalValue;
        totalElement.classList.add('total');
        container.appendChild(totalElement);
    } else {
        container.querySelector('.total').textContent = "Total: " + totalValue;
    }
}

function generateDice() {
    const numDice = parseInt(document.getElementById("hello").value);
    const diceContainers = document.querySelectorAll('.dice-container, .dice-container2');
    diceContainers.forEach((container, index) => {
        container.innerHTML = ""; 
        const containerNum = index + 1;
        for (let j = 0; j < numDice; j++) {
            const diceElement = document.createElement('div');
            diceElement.classList.add('dice');
            diceElement.innerHTML = `
                <div class="face front"></div>
                <div class="face back"></div>
                <div class="face top"></div>
                <div class="face bottom"></div>
                <div class="face right"></div>
                <div class="face left"></div>`;
            container.appendChild(diceElement);

            rollSingleDice(diceElement, containerNum);
        }
    });
}

function resetTotal() {
    nums1 = [];
    nums2 = [];
    const containers = document.querySelectorAll(".dice-container, .dice-container2");
    containers.forEach(container => {
        const totalElement = container.querySelector(".total");
        if (totalElement) {
            totalElement.textContent = "";
        }
    });
}


// function randomDice() {
//         const dice = document.querySelectorAll('.dice');
//         dice.forEach(dice => {
//             const stopAngle = Math.floor(Math.random() * 360);
//             rollDice(dice, stopAngle);
//         });
       
// }

// function rollDice(dice, stopAngle) {
//     const totalRotations = Math.floor(Math.random() * 3) + 4;

//     let currentRotation = 0;

//     dice.style.transition = 'transform 2s ease';
//     dice.style.transform = 'rotateX(0deg) rotateY(0deg)';

//     const rotate = () => {
//         currentRotation += 360;
//         dice.style.transform = "rotateX(" + currentRotation + "deg) rotateY(" + currentRotation + "deg)";

//         if (currentRotation >= totalRotations * 360) {
//             clearInterval(rollingInterval);
//             const nearestMultiple = Math.round(stopAngle / 90) * 90;
//             dice.style.transition = 'transform 3s ease';
//             dice.style.transform = "rotateX(0deg) rotateY(" + nearestMultiple + "deg)";
//             // setTimeout(calculateTotal, 3000); // Calculate total after animation stops (3 seconds delay)
            
//         }
//     };

//     const rollingInterval = setInterval(rotate, 200);
// }

// function calculateTotal() {
//     const diceContainers = document.querySelectorAll('.dice-container, .dice-container2');
//     diceContainers.forEach(container => {
//         if (!container.querySelector('.total')) {
//             let totalValue = 0;
//             container.querySelectorAll('.dice').forEach(dice => {
//                 const faceValue = parseInt(dice.querySelector('.face').getAttribute('value'));
//                 totalValue += faceValue;
//                 console.log(faceValue)
//             });
//             const totalElement = document.createElement('div');
//             totalElement.textContent = "Total: " + totalValue;
//             totalElement.classList.add('total');
//             container.appendChild(totalElement);
//         }
//     });
// }

// function generateDice() {
//     const numDice = parseInt(document.getElementById("hello").value);
//     const diceContainers = document.querySelectorAll('.dice-container');
//     diceContainers.forEach(container => {
//         container.innerHTML = ""; 
//         for (let j = 0; j < numDice; j++) {
//             container.innerHTML += `<div class="dice">
//                                         <div class="face front"></div>
//                                         <div class="face back"></div>
//                                         <div class="face top"></div>
//                                         <div class="face bottom"></div>
//                                         <div class="face right"></div>
//                                         <div class="face left"></div>
//                                     </div>`;
//         }
//     });
// }

function toggleDiceGame() {
    var diceGameContainer = document.getElementById("diceGameContainer");
    var diceGameContainer2 = document.getElementById("diceGameContainer2");
    var body = document.querySelector("body");
    var helloText = document.getElementById("first");
    var modeButtons = document.getElementById("modeButtons");
    var mode1Text = document.getElementById("mode1Text");
    var rollBtn = document.querySelector(".roll");
    var inputField = document.getElementById("hello");
    var enterBtn = document.getElementById("clickable");
    var resetBtn = document.getElementById("resetButton");
    diceGameContainer.style.display = "block";
    diceGameContainer2.style.display = "block"; // Show the second set of dice and container
    helloText.style.display = "none";
    modeButtons.style.display = "none";
    mode1Text.style.display = "block";
    body.style.backgroundImage = "none";
    body.style.backgroundColor = "#b33951"; 
    // rollBtn.style.display = "block";
    inputField.style.display = "block";
    resetBtn.style.display = "block";
    enterBtn.style.display = "block"; // Show the Enter button
}
function toggleDice() {
    var diceGameContainer = document.getElementById("diceGameContainer");
    var diceGameContainer2 = document.getElementById("diceGameContainer2");
    var body = document.querySelector("body");
    var helloText = document.getElementById("first");
    var modeButtons = document.getElementById("modeButtons");
    var rollBtn = document.querySelector(".roll");
    var enterBtn = document.getElementById("clickable");
    diceGameContainer.style.display = "block";
    diceGameContainer2.style.display = "none"; // Hide the second set of dice and container
    helloText.style.display = "none";
    modeButtons.style.display = "none";
    body.style.backgroundImage = "none";
    body.style.backgroundColor = "blue"; 
    rollBtn.style.display = "none";
    enterBtn.style.display = "none"; // Hide the Enter button
}
function toggleGame() {
    var diceGameContainer = document.getElementById("diceGameContainer");
    var diceGameContainer2 = document.getElementById("diceGameContainer2");
    var body = document.querySelector("body");
    var helloText = document.getElementById("first");
    var modeButtons = document.getElementById("modeButtons");
    var rollBtn = document.querySelector(".roll");
    var enterBtn = document.getElementById("clickable");
    diceGameContainer.style.display = "block";
    diceGameContainer2.style.display = "none"; // Hide the second set of dice and container
    helloText.style.display = "none";
    modeButtons.style.display = "none";
    body.style.backgroundImage = "none";
    body.style.backgroundColor = "violet"; 
    rollBtn.style.display = "none";
    enterBtn.style.display = "none"; // Hide the Enter button
}
    
function goToInitialDisplay() {
    var diceGameContainer = document.getElementById("diceGameContainer");
    var diceGameContainer2 = document.getElementById("diceGameContainer2");
    var helloText = document.getElementById("first");
    var body = document.querySelector("body");
    var modeButtons = document.getElementById("modeButtons");
    var mode1Text = document.getElementById("mode1Text");
    var rollBtn = document.querySelector(".roll");
    var inputField = document.getElementById("hello");
    var enterBtn = document.getElementById("clickable");
    diceGameContainer.style.display = "none";
    diceGameContainer2.style.display = "none"; // Hide the second set of dice and container
    helloText.style.display = "block";
    modeButtons.style.display = "block";
    mode1Text.style.display = "none";
    body.style.backgroundImage = "url(po.jpeg)";
    body.style.backgroundColor = ""; 
    rollBtn.style.display = "none";
    inputField.style.display = "none";
    enterBtn.style.display = "none"; // Hide the Enter button
}