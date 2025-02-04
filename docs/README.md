# Sistema de Marcação de Turmas para Instituições

## 📌 Descrição

Este projeto é um sistema de marcação de turmas voltado para instituições de ensino. Ele permite que alunos e professores informem suas preferências de horário, e a instituição pode formar turmas com base nesses dados, facilitando a organização acadêmica.

## 🎯 Motivação

Muitos cursos, especialmente os que possuem módulos avançados (como cursos de idiomas), enfrentam dificuldades para fechar turmas devido à incompatibilidade de horários ou à baixa adesão de alunos. Esse sistema busca automatizar o processo de marcação de turmas, tornando-o mais eficiente e acessível.

## 🔧 Funcionalidades

✅ Cadastro de instituições, alunos, professores e turmas  
✅ Interface gráfica intuitiva baseada no Qt Creator  
✅ Seleção de preferências de horário para alunos e professores  
✅ Banco de dados SQLite para armazenamento de informações  
✅ Criação manual de turmas com base nas preferências cadastradas  
✅ Edição e exclusão de registros diretamente na interface  

## 🛠️ Tecnologias Utilizadas

Linguagem: C++  
Interface Gráfica: Qt Creator  
Banco de Dados: SQLite  

## 🚀 Como Executar o Projeto

### 1️⃣ Requisitos  
Instalar o Qt Creator (Download Qt)  
Instalar o SQLite Studio (Download SQLiteStudio)  

### 2️⃣ Clonar o Repositório  
```bash
git clone https://github.com/seu-usuario/seu-repositorio.git
cd seu-repositorio
```

### 3️⃣ Abrir no Qt Creator  

No Qt Creator, clique em File > Open File or Project  
Selecione o arquivo .pro do projeto  
Compile e execute o sistema  

**Obs**: É necessário modificar o caminho de arquivos do banco de dados. Futuramente haverá melhorias no projeto para facilitar a instalação.

## 📊 Banco de Dados

O sistema utiliza SQLite para armazenar as informações dos alunos, professores, turmas e instituições. As tabelas principais são:

**tb_alunos**: Armazena informações dos alunos e seus horários disponíveis  
**tb_professores**: Contém dados dos professores e horários de disponibilidade  
**tb_turmas**: Relaciona alunos e professores a uma turma específica  
**tb_instituicao**: Guarda os dados da instituição cadastrada  

## 🔄 Melhorias Futuras

🔹 Automatização da criação de turmas, maximizando a compatibilidade de horários  
🔹 Interface para alunos e professores, permitindo interação direta no sistema  
🔹 Refatoração do código para implementar herança (exemplo: criar uma classe Usuário para unificar Aluno e Professor)  
🔹 Aprimoramento da interface gráfica, tornando-a mais intuitiva e acessível 
🔹 Implementação de um instalador

## 📌 Conclusão

Este sistema resolve um problema real de organização de turmas em instituições de ensino, permitindo maior flexibilidade na formação de horários. Durante o desenvolvimento, foram aplicados conceitos de POO, banco de dados e interface gráfica com Qt Creator.

Se tiver sugestões ou quiser contribuir, sinta-se à vontade para abrir uma issue ou enviar um pull request! 🚀
