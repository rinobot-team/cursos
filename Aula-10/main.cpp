#include "Musica.hpp"
#include "Livro.hpp"
#include "Filme.hpp"
#include "Midia.hpp"
#include <vector>
#include <memory>

int main (int argc, char *argv[]) {
    
    // Essa parte de shared_ptr eh um pouco avancada entao
    // nao vamos entrar a fundo, mas saiba que por todos as classes
    // herdarem da mesma, todas podem dividir um ponteiro

    std::vector<std::shared_ptr<Midia>> midias;

    midias.push_back(std::make_shared<Livro>("Deus e o Estado"));
    midias.push_back(std::make_shared<Musica>("500 channels"));
    midias.push_back(std::make_shared<Filme>("O Senhor dos Anéis"));

    std::cout << "Itens que podem ser reproduzidos: " << std::endl;
    // Chamando todos os metodos reproduzir
    // das classes que herdam Midia
    for (const auto& midia : midias) {
        midia->reproduzir();
    }

    std::cout << "Itens que podem ser baixados: " << std::endl;
    // Baixando midias que implementam IDownloadable
    for (const auto& midia : midias) {
        // O metodo dynamic_pointer_cast garante que todas as midias
        // implementam a interface IDownloadable
        auto item = std::dynamic_pointer_cast<IDownloadable>(midia);
        if (item) {
            item->download();
        }
    }

    return 0;
}
