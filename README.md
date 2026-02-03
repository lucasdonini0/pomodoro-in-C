# PomoHub - Pomodoro Timer in C 🍅

[Português](#br) | [English](#us)

---

<a name="us"></a>
## [US]

This is my first functional C program. Pomodoro is study method I've used for a long time, so I decided to apply the knowledge I acquired in **CS50x** to build a tool I'd use.

### 🚀 What it does
- **Focus/Rest Cycles:** Pre-set options (25/5 and 50/10) or custom timing.
- **Interactive Controls:** Pause ('p') or Stop ('q') the timer at any time.
- **Visual & Audio Cues:** Clear terminal interface and sound alerts (using the system bell).
- **Easter Eggs** 🤷

### 🧠 Concepts I Practiced
- **State Management:** I created (`is_paused`, `is_running`) to control program flow.
- **Non-blocking Input:** Implementing `kbhit()` and `getch()` from `conio.h` to listen for commands without stopping the countdown.
- **Modularization:** Organizing logic into functions for better readability.
- **OS Interaction:** Using `windows.h` for executing system commands `(Sleep)`
- **Math Logic:** Converting total seconds into a formatted MM:SS display.

### 🛠️ Requirements
- Windows OS (uses `windows.h` and `conio.h`).

---

<a name="br"></a>
## [BR]

Este é meu primeiro programa funcional em C. O Pomodoro é um método de estudo que utilizo há muito tempo, então decidi aplicar o conhecimento que adquiri nas aulas do **CS50x** para construir uma ferramenta que eu realmente usaria.

### 🚀 O que o programa faz
- **Ciclos de Foco/Descanso:** Opções pré-definidas (25/5 e 50/10) ou tempo customizado.
- **Controles Interativos:** Pause ('p') ou Parar ('q') o cronômetro a qualquer momento.
- **Alertas Visuais e Sonoros:** Interface de terminal limpa e alertas sonoros (usando o "bell" do sistema).
- **Easter Eggs** 🤷

### 🧠 Conceitos que Pratiquei
- **Gestão de Estados:** Criei variáveis de controle (`is_paused`, `is_running`) para gerenciar o fluxo do programa.
- **Input Não-Bloqueante:** Implementação de `kbhit()` e `getch()` da biblioteca `conio.h` para capturar comandos sem interromper a contagem regressiva.
- **Modularização:** Organização da lógica em funções para melhorar a legibilidade do código.
- **Interação com o SO:** Uso da `windows.h` para executar comandos do sistema `(Sleep)`.
- **Lógica Matemática:** Conversão de segundos totais para uma exibição formatada em MM:SS.

### 🛠️ Requisitos
- Windows (utiliza as bibliotecas `windows.h` e `conio.h`).
