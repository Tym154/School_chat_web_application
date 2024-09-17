const wrapper = document.querySelector('.wrapper');
const registerLink = document.querySelector('.register-link');
const btnPopup = document.querySelector('.btnLogin-popup');
const iconClose = document.querySelector('.icon-close');
const about = document.querySelector('.about');

const btn = document.querySelector('.btn');

btnPopup.addEventListener('click', ()=> {
    about.classList.add('active-about');
    setTimeout(() => {
        wrapper.classList.add('active-popup');
    }, 500);
});

iconClose.addEventListener('click', ()=> {
    wrapper.classList.remove('active-popup');
    setTimeout(() => {
        about.classList.remove('active-about');
    }, 500);
});

btn.addEventListener("click", function() {
    setTimeout(function() {
        window.location.href = "home.html"
    }, 1500)
})

