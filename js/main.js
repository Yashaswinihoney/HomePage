//Get Text Value
var textWrapper = document.querySelector('.text');
textWrapper.innerHTML = textWrapper.textContent.replace(/\S/g, "<span class='letter'>$&</span>");


//Now Start Animation
anime.timeline({ loop: true })
    .add({
        targets: '.text .line',
        scaleX: [0, 1],
        opacity: [0.5, 1],
        easing: 'easeInOutExpo',
        duration: 1000
    }).add({
        targets: '.text .letter',
        opacity: [0, 1],
        translateX: [40, 0],
        translateZ: 0,
        scaleX: [0.3, 1],
        easing: 'easeOutExpo',
        duration: 900,
        offset: '-=600',
        delay: (el, i) => 150 + 25 * i
    }).add({
        targets: '.text',
        opacity: 0,
        duration: 1100,
        easing: 'easeOutExpo',
        delay: 1100
    });