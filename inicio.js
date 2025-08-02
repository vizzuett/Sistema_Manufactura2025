// Animación de aparición suave para el contenedor principal
document.addEventListener('DOMContentLoaded', function() {
    const container = document.querySelector('.inicio-container');
    if (container) {
        setTimeout(() => {
            container.classList.add('visible');
        }, 100);
    }

    // Scroll suave al hacer clic en "Ver Servicios"
    const btn = document.querySelector('.inicio-btn');
    if (btn && btn.getAttribute('href').startsWith('#')) {
        btn.addEventListener('click', function(e) {
            const targetId = btn.getAttribute('href').substring(1);
            const target = document.getElementById(targetId);
            if (target) {
                e.preventDefault();
                target.scrollIntoView({ behavior: 'smooth' });
            }
        });
    }
});