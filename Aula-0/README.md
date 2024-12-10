# Instalação e Configuração

Este documento tem como objetivo dar o passo a passo de como configurar diferentes ambientes para o desenvolvimento em C++. Ele aborda a instalação do compilador, IDE e Extensões da IDE que facilitam o desenvolvimento. No fim há algumas fontes de assuntos extras que não serão diretamente abordados no curso, mas são pertinentes.

Como IDE usaremos o VSCode, por ser um editor simples, versátil e popular. Nele colocaremos extensões que melhoram e aceleram o desenvolvimento na linguagem C++.

Podem haver algumas diferenças nos tópicos porque no Windows o compilador MinGW-gcc serve tanto para C quanto C++, já no Unix o gcc é somente para C, e para C++ utilizamos o g++.

## Windows

1. Baixar o instalador do MinGW, o conjunto de ferramentas para desenvolvimento C, C++, Objetive-C e Fortran da Microsoft neste [link do sourceforge](https://sourceforge.net/projects/mingw/). E rode o instalador, talvez seja necessário executar como admnistrador.
2. Dentro do instalador só aperte para continuar até que o processo acabe e o MinGW seja instalado.
3. Já no programa, marque as caixas **mingw32-base, mingw-developer-toolkit e mingw32-gcc-g++** com botão direito na caixa e depois **mark for instalation**.
4. Com os pacotes marcados vá no canto superior esquerdo do programa e clique em `Installation -> Apply Changes`.
5. Ao final da instalação, precisamos adicionar o executável do compilador à variável de sistema `PATH`, desta forma:  
    a. Na barra de pesquisa do windows digite *“variáveis”* e você será levado à um menu de propriedades do sistema.  
    b. Clique no botão **Variáveis do Ambiente**.  
    c. Na parte inferior, em **Variáveis do Sistema**, clique na variável `PATH` e depois em **Editar**.  
    d. Clique em **Novo** e adicione o caminho para o compilador, normalmente é `C:\MinGW\bin`.  
    e. Para testar abra um terminal e digite `gcc`. Ele deve retornar uma mensagem de erro dizendo que não foram encontrados arquivos de input.  
6. Agora baixe o VSCode [neste link](https://code.visualstudio.com/download). Vá na pasta `Downloads` e rode o instalador. Durante a instalação tenha certeza de marcar a caixa **“Adicionar ao PATH”**.
7. Tudo pronto, agora vá para o tópico de *Extensões do VSCode*.

## Unix
Este passo a passo é baseado no sistema Ubuntu, mas é em maior parte semelhante entre todos os sistemas Unix. Alguns comandos (como gerenciador de pacotes) podem variar dependendo da distruibuição, caso tenha alguma dificuldade com isso contate algum gerente.

1. Os sistemas Unix já vem com compiladores C e C++ instalados padrão, mas caso tenha alguma problema instale-os com o comando:  
    ```bash
    sudo apt install build-essential
    ```
2. Para instalar o VSCode, baixe o arquivo .deb [neste link](https://go.microsoft.com/fwlink/?LinkID=760868) e no diretório em que ele foi baixado, normalmente `~/Downloads` rode este comando:
    ```bash
    sudo apt install ./code_x.xx.x-xxxxx.deb
    ```
    Em que `x.xx.x-xxxxx` é a versão e build do arquivo baixado.
3. Agora, instale a ferramenta CMake com o comando:
    ```bash
    sudo apt install cmake
    ```
4. Todo o ambiente já está configurado, agora siga para a seção de Extensões do VSCode.

## Extensões do VSCode
Para instalar extensões no VSCode vá para o menu à esquerda e clique no ícone com os quadradinhos, você será levado para a loja de extensões. Para instalar uma delas, clique nela e depois no botão de instalar, algumas necessitam que você reinicie a IDE. As extensões recomendadas são:

- C/C++: Desenvolvida pela própria Microsoft, adiciona sugestões automáticas, tanto da linguagem quanto algumas bibliotecas, e suporte para compilação dentro da IDE.
- C/C++ Extension Pack: Também feita pela Microsoft, adiciona suporte para CMake.
- Better C++ Syntax: Melhora o entendimento e coloração da sintaxe da linguagem pelo editor.
- Code Runner: Permite compilar e rodar códigos direto no editor.
- Gruvbox: Melhor e mais lindo tema para qualquer editor (melhor que Darcula e Catppucin).

## Extras

- [Guia de utilização do Debugger GDB](https://wiki.sj.ifsc.edu.br/index.php/Guia_basico_GDB)
- [Guia de utilização do CMake](https://cmake.org/cmake/help/latest/guide/tutorial/index.html)
- [Introdução ao VSCode](https://www.devmedia.com.br/introducao-ao-visual-studio-code/34418)
- [Compilação via Interface de Texto no Windows](https://learn.microsoft.com/pt-br/cpp/build/walkthrough-compiling-a-native-cpp-program-on-the-command-line?view=msvc-170)
- [Configuração do ambiente WSL no Windows](https://www.alura.com.br/artigos/wsl-executar-programas-comandos-linux-no-windows?utm_term=&utm_campaign=%5BSearch%5D+%5BPerformance%5D+-+Dynamic+Search+Ads+-+Artigos+e+Conte%C3%BAdos&utm_source=adwords&utm_medium=ppc&hsa_acc=7964138385&hsa_cam=11384329873&hsa_grp=164240702375&hsa_ad=703853654617&hsa_src=g&hsa_tgt=dsa-2276348409543&hsa_kw=&hsa_mt=&hsa_net=adwords&hsa_ver=3&gad_source=1&gclid=CjwKCAiAxKy5BhBbEiwAYiW--6R7iPQhZ4BEtxoDNecu37gPWHNlu7y-ElSsp6KHGq7rzDL2Hj1JkBoCzUQQAvD_BwE)