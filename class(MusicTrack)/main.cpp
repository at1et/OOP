#include "MusicTrack.h"

int main() {
	{
		setlocale(LC_ALL, "RUS");

		MusicTrack test("", "", 0, "", "", 0);
		test.setAlbum("Звезда");
		test.setArtist("Дельфин");
		test.setGenre("Альтернатива");
		test.setLength(247);
		test.setTitle("Имя");
		test.setYear(2004);

		// Проверка
		assert(test.getAlbum() == "Звезда");
		assert(test.getArtist() == "Дельфин");
		assert(test.getGenre() == "Альтернатива");
		assert(test.getLength() == 247);
		assert(test.getTitle() == "Имя");
		assert(test.getYear() == 2004);

		// Вывод класса на экран 
		test.printTrackInfo();
		cout << "\n";

		// Создаем объект класса MusicTrack с данными о треке
		MusicTrack iDontLove("I Don't Love", "Have a nice life", 366, "Deathconsciousness", " Shoegaze, Post-punk, Post-rock, Gothic rock", 2008);

		string trackData = concatenateTrackData(iDontLove);

		// Сохраняем объект в файл
		saveToFile(iDontLove, "tracks.txt");

		// Читаем данные о треках из файла
		vector<MusicTrack> tracks = readFromFile("tracks.txt");

		// Выводим информацию о прочитанных треках
		for (const auto& track : tracks) {
			track.printTrackInfo();
			cout << "\n";
		}



	}
}
