#include <iostream>
#include <fstream>

int main(){

    std::ofstream arquivo1;

    //abre o arquivo ou o cria caso n�o exista
    arquivo1.open("Texto.txt",std::ios_base::app);

    //escreve no arquivo
    arquivo1 << "Mussum Ipsum, cacilds vidis litro abertis. Admodum accumsan disputationi eu sit. Vide electram sadipscing et per.M� faiz elementum girarzis, nisi eros vermeio.Pra l� , depois divoltis porris, paradis.Nec orci ornare consequat. Praesent lacinia ultrices consectetur. Sed non ipsum felis.";

    //fecha o arquivo
    arquivo1.close();

    return 0;

}
