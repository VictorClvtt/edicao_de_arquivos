#include <iostream>
#include <fstream>

int main(){

    std::ofstream arquivo1;

    //abre o arquivo ou o cria caso não exista
    arquivo1.open("Texto.txt",std::ios_base::app);

    //escreve no arquivo
    arquivo1 << "Mussum Ipsum, cacilds vidis litro abertis. Admodum accumsan disputationi eu sit. Vide electram sadipscing et per.Mé faiz elementum girarzis, nisi eros vermeio.Pra lá , depois divoltis porris, paradis.Nec orci ornare consequat. Praesent lacinia ultrices consectetur. Sed non ipsum felis.";

    //fecha o arquivo
    arquivo1.close();

    return 0;

}
