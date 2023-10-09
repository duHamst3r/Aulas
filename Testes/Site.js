document.addEventListener('DOMContentLoaded', function() {
    const messageInput = document.getElementById('message-input');
    const sendButton = document.getElementById('send-button');
    const chatMessages = document.querySelector('.chat-messages');

    sendButton.addEventListener('click', function() {
        const messageText = messageInput.value.trim();
        if (messageText !== '') {
            const messageDiv = document.createElement('div');
            messageDiv.classList.add('message', 'sent');
            messageDiv.innerHTML = `<p>${messageText}</p>`;
            chatMessages.appendChild(messageDiv);
            messageInput.value = '';
            // Aqui você pode enviar a mensagem para o servidor real, se necessário.
        }
    });

    // Adicione aqui a lógica de receber mensagens do servidor em tempo real, se aplicável.
});
