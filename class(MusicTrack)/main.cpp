#include <iostream>
#include "MusicTrack.h"

int main() {
    // Создание экземпляра класса MusicTrack с заданными параметрами
    MusicTrack myTrack("Song Title", "Artist Name", 3.5, "Album Name", "Pop", 2023);

    // Используем геттеры для получения информации о треке и выводим ее
    cout << "Title: " << myTrack.getTitle() << endl; // Получаем и выводим название трека
    cout << "Artist: " << myTrack.getArtist() << endl; // Получаем и выводим имя исполнителя
    cout << "Length: " << myTrack.getLength() << " minutes" << endl; // Получаем и выводим длительность трека
    cout << "Album: " << myTrack.getAlbum() << endl; // Получаем и выводим название альбома
    cout << "Genre: " << myTrack.getGenre() << endl; // Получаем и выводим жанр трека
    cout << "Year: " << myTrack.getYear() << endl; // Получаем и выводим год выпуска трека
    
    cout << "\n";


    // Используем сеттеры для изменения информации о треке
    myTrack.setTitle("Accordion"); // Устанавливаем новое название трека
    myTrack.setArtist("MF DOOM"); // Устанавливаем нового исполнителя
    myTrack.setLength(1.58); // Устанавливаем новую длительность трека
    myTrack.setAlbum("Madvillain"); // Устанавливаем новое название альбома
    myTrack.setGenre("Hip-hop"); // Устанавливаем новый жанр трека
    myTrack.setYear(2004); // Устанавливаем новый год выпуска трека

    // Выводим обновленную информацию о треке
    myTrack.printTrackInfo();

    return 0;
}
