#include <iostream>  // Подключение библиотеки для ввода/вывода через консоль
#include <string>    // Подключение библиотеки для работы со строками

// Объявление класса MusicTrack
class MusicTrack {
public:
    // Конструктор класса с параметрами
    MusicTrack(std::string title, std::string artist, double length, std::string album, std::string genre)
        : title_(title), artist_(artist), length_(length), album_(album), genre_(genre) {}

    // Метод для вывода информации о треке
    void printTrackInfo() const {
        std::cout << "Title: " << title_ << std::endl;    // Вывод названия трека
        std::cout << "Artist: " << artist_ << std::endl;  // Вывод исполнителя
        std::cout << "Length: " << length_ << " minutes" << std::endl;  // Вывод длительности трека
        std::cout << "Album: " << album_ << std::endl;    // Вывод названия альбома
        std::cout << "Genre: " << genre_ << std::endl;    // Вывод жанра трека
    }

private:
    // Приватные поля класса
    std::string title_;    // Название трека
    std::string artist_;   // Имя исполнителя
    double length_;        // Длительность трека
    std::string album_;    // Название альбома
    std::string genre_;    // Жанр трека
};

// Главная функция программы
int main() {
    // Создание экземпляра класса MusicTrack с заданными параметрами
    MusicTrack myTrack("Song Title", "Artist Name", 3.5, "Album Name", "Pop");

    // Вызов метода для вывода информации о треке
    myTrack.printTrackInfo();
}
