#include <unistd.h>
void ft_print_alphabet(void)  // bu sefer degiskenimizi fonksiyonun icinde tanimlamisiz istersek ex00 daki gibi de yapabiliriz.
{
	char c;  // degisken tanimla
	c='a';    //icine deger koy c= a nin ascii tablosundaki degeri '' arasında olan harfler rakamlar degern ascii degerini temsil eder 'a' yerine 97 de yazabilirdiniz.
	while(c<='z') // while dongusu dondurme isleminin ne kadar olacagi belirsiz ise kullaninilir. eger c kucuk esit z nin ascii tablosundaki degerine ise dongunun icine gir.
	{
		write(1,&c,1);
		c++;  // burada artirdigi sey ascii degeri
	} 
}
	int main()
	{
	
		ft_print_alphabet(); // fonksiyonu cagir ve calissinn.
	}		return(0);
    //dondur gitsin.
