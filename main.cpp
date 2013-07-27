/* Henrique Kraemer (http://henriquekraemer.com) */

#include <c2d2/chien2d2.h>
 
int main(int argc, char *argv[])
{
    C2D2_Inicia(800,600,C2D2_JANELA, C2D2_DESENHO_PADRAO, "Criando uma Janela");
    C2D2_Botao *teclado = C2D2_PegaTeclas();
    
    do
     {
          C2D2_LimpaTela();
          C2D2_Sincroniza(C2D2_FPS_PADRAO);
     }while(!teclado[C2D2_ESC].pressionado);
  
    C2D2_Encerra();
return 0;
}
