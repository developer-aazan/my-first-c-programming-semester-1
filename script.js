// Simple calculator logic with keyboard support
(() => {
  const previousEl = document.getElementById('previous');
  const currentEl = document.getElementById('current');
  const keys = document.querySelector('.keys');

  let current = '';
  let previous = '';
  let operator = null;
  let justComputed = false;

  function updateDisplay() {
    currentEl.textContent = current === '' ? '0' : current;
    previousEl.textContent = operator ? `${previous} ${formatOperator(operator)}` : '';
  }

  function formatOperator(op) {
    if (op === '*') return '×';
    if (op === '/') return '÷';
    return op;
  }

  function clearAll() {
    current = '';
    previous = '';
    operator = null;
    justComputed = false;
    updateDisplay();
  }

  function deleteLast() {
    if (justComputed) {
      current = '';
      justComputed = false;
      updateDisplay();
      return;
    }
    current = current.slice(0, -1);
    updateDisplay();
  }

  function appendNumber(n) {
    if (n === '.' && current.includes('.')) return;
    if (justComputed) {
      current = n === '.' ? '0.' : n;
      justComputed = false;
    } else {
      // prevent leading zeros like "00"
      if (n !== '.' && current === '0') current = n;
      else current = current + n;
    }
    updateDisplay();
  }

  function chooseOperator(op) {
    if (current === '' && previous === '') return;
    if (previous !== '' && current !== '') {
      compute();
    }
    if (current !== '') {
      previous = current;
      current = '';
    }
    operator = op;
    justComputed = false;
    updateDisplay();
  }

  function compute() {
    if (operator == null || previous === '' || current === '') return;
    const a = parseFloat(previous);
    const b = parseFloat(current);
    if (Number.isNaN(a) || Number.isNaN(b)) return;
    let result = 0;
    switch (operator) {
      case '+': result = a + b; break;
      case '-': result = a - b; break;
      case '*': result = a * b; break;
      case '/':
        if (b === 0) {
          result = 'Error';
        } else {
          result = a / b;
        }
        break;
      default: return;
    }
    // Limit result length
    if (typeof result === 'number') {
      result = parseFloat(result.toPrecision(12)).toString();
    } else {
      result = result.toString();
    }

    current = result;
    previous = '';
    operator = null;
    justComputed = true;
    updateDisplay();
  }

  // Button clicks
  keys.addEventListener('click', (e) => {
    const button = e.target.closest('button');
    if (!button) return;
    const action = button.dataset.action;
    const value = button.dataset.value;

    switch (action) {
      case 'number':
        appendNumber(value);
        break;
      case 'operator':
        chooseOperator(value);
        break;
      case 'clear':
        clearAll();
        break;
      case 'delete':
        deleteLast();
        break;
      case 'equals':
        compute();
        break;
    }
  });

  // Keyboard support
  window.addEventListener('keydown', (e) => {
    if (e.key >= '0' && e.key <= '9') {
      appendNumber(e.key);
      return;
    }
    if (e.key === '.') {
      appendNumber('.');
      return;
    }
    if (['+', '-', '*', '/'].includes(e.key)) {
      chooseOperator(e.key);
      return;
    }
    if (e.key === 'Enter' || e.key === '=') {
      e.preventDefault();
      compute();
      return;
    }
    if (e.key === 'Backspace') {
      deleteLast();
      return;
    }
    if (e.key === 'Escape') {
      clearAll();
      return;
    }
  });

  // Initialize
  clearAll();
})();
