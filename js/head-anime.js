// Get Text Value
var textWrapper = document.querySelector('.text .letters');
textWrapper.innerHTML = textWrapper.textContent.replace(/\S/g, "<span class='letter'>$&</span>");


//Now Start Animation

anime.timeline({ loop: true })
    .add({
        targets: '.text .letter',
        translateY: ["1.1em", 0],
        translateX: ["0.55em", 0],
        translateZ: 0,
        rotateZ: [180, 0],
        duration: 1850,
        easing: "easeOutExpo",
        delay: (el, i) => 50 * i
    }).add({
        targets: '.text',
        opacity: 0,
        duration: 800,
        easing: "easeOutExpo",
        delay: 1000
    });

