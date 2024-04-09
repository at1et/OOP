
#include "MusicTrack.h"

using namespace std;  // Используем пространство имен std

// Конструктор класса с параметрами
MusicTrack::MusicTrack(const string& title, const string& artist, double length, const string& album, const string& genre, int year)
    : title_(title), artist_(artist), length_(length), album_(album), genre_(genre), year_(year) {}

// Метод для вывода информации о треке
void MusicTrack::printTrackInfo() const {
    // Выводим информацию о треке
    cout << "Title: " << title_ << endl;    // Название трека
    cout << "Artist: " << artist_ << endl;  // Исполнитель
    cout << "Length: " << length_ << " minutes" << endl;  // Длительность трека
    cout << "Album: " << album_ << endl;    // Название альбома
    cout << "Genre: " << genre_ << endl;    // Жанр трека
    cout << "Year: " << year_ << endl;      // Год
}

// Геттеры и сеттеры для полей класса
string MusicTrack::getTitle() const {
    return title_;
}

// Устанавливает название трека
void MusicTrack::setTitle(const string& title) {
    title_ = title; // Присваиваем переданное значение полю title_
}

// Получает имя исполнителя трека
string MusicTrack::getArtist() const {
    return artist_; // Возвращает значение поля artist_
}

// Устанавливает имя исполнителя трека
void MusicTrack::setArtist(const string& artist) {
    artist_ = artist; // Присваиваем переданное значение полю artist_
}

// Получает длительность трека
double MusicTrack::getLength() const {
    return length_; // Возвращает значение поля length_
}

// Устанавливает длительность трека
void MusicTrack::setLength(double length) {
    length_ = length; // Присваиваем переданное значение полю length_
}

// Получает название альбома, к которому относится трек
string MusicTrack::getAlbum() const {
    return album_; // Возвращает значение поля album_
}

// Устанавливает название альбома, к которому относится трек
void MusicTrack::setAlbum(const string& album) {
    album_ = album; // Присваиваем переданное значение полю album_
}

// Получает жанр трека
string MusicTrack::getGenre() const {
    return genre_; // Возвращает значение поля genre_
}

// Устанавливает жанр трека
void MusicTrack::setGenre(const string& genre) {
    genre_ = genre; // Присваиваем переданное значение полю genre_
}

// Получает год выпуска трека
int MusicTrack::getYear() const {
    return year_; // Возвращает значение поля year_
}

// Устанавливает год выпуска трека
void MusicTrack::setYear(int year) {
    year_ = year; // Присваиваем переданное значение полю year_
}

// Функция для сохранения данных о треке в файл
void saveToFile(const MusicTrack& track, const string& filename) {
    // Открываем файл для записи данных, используем режим добавления данных в конец файла
    ofstream outputFile(filename, ios::app);

    // Проверяем, удалось ли открыть файл
    if (outputFile.is_open()) {
        // Записываем данные о треке в файл
        outputFile << "Track:\n";                // Записываем метку начала трека
        outputFile << "Title: " << track.getTitle() << "\n";     // Записываем название трека
        outputFile << "Artist: " << track.getArtist() << "\n";   // Записываем исполнителя
        outputFile << "Length: " << track.getLength() << "\n";   // Записываем длительность трека
        outputFile << "Album: " << track.getAlbum() << "\n";     // Записываем название альбома
        outputFile << "Genre: " << track.getGenre() << "\n";     // Записываем жанр трека
        outputFile << "Year: " << track.getYear() << "\n\n";     // Записываем год выпуска трека
        outputFile.close();  // Закрываем файл
        cout << "Track saved to file." << endl; // Выводим сообщение об успешном сохранении
    }
    else {
        cerr << "Unable to open file." << endl; // Выводим сообщение об ошибке, если файл не удалось открыть
    }
}

// Функция для чтения данных о треках из файла и создания объектов MusicTrack
vector<MusicTrack> readFromFile(const string& filename) {
    vector<MusicTrack> tracks;  // Создаем вектор для хранения объектов класса MusicTrack
    ifstream inputFile(filename); // Открываем файл для чтения

    // Проверяем, удалось ли открыть файл
    if (inputFile.is_open()) {
        string line;
        // Считываем файл построчно
        while (getline(inputFile, line)) {
            if (line.find("Track:") != string::npos) { // Если находим метку начала трека
                string title, artist, album, genre;    // Создаем переменные для хранения данных о треке
                double length;
                int year;

                // Считываем данные о треке из файла
                while (getline(inputFile, line) && !line.empty()) { // Читаем строки до пустой строки
                    if (line.find("Title:") != string::npos) {
                        title = line.substr(line.find(":") + 2);   // Получаем название трека из строки
                    }
                    else if (line.find("Artist:") != string::npos) {
                        artist = line.substr(line.find(":") + 2);  // Получаем исполнителя
                    }
                    else if (line.find("Length:") != string::npos) {
                        length = stod(line.substr(line.find(":") + 2)); // Получаем длительность трека
                    }
                    else if (line.find("Album:") != string::npos) {
                        album = line.substr(line.find(":") + 2);    // Получаем название альбома
                    }
                    else if (line.find("Genre:") != string::npos) {
                        genre = line.substr(line.find(":") + 2);    // Получаем жанр трека
                    }
                    else if (line.find("Year:") != string::npos) {
                        year = stoi(line.substr(line.find(":") + 2)); // Получаем год выпуска трека
                    }
                }
                // Создаем объект класса MusicTrack и добавляем его в вектор
                tracks.push_back(MusicTrack(title, artist, length, album, genre, year));
            }
        }
        inputFile.close(); // Закрываем файл
    }
    else {
        cerr << "Unable to open file." << endl; // Выводим сообщение об ошибке, если файл не удалось открыть
    }
    return tracks; // Возвращаем вектор считанных треков
}

// Функция, объединяющая данные объекта MusicTrack в одну строку
string concatenateTrackData(const MusicTrack& track) {
    std::string concatenatedData; // Создаем строку для объединенных данных
    concatenatedData += "Title: " + track.getTitle() + "\n";    // Добавляем в строку данные о названии трека
    concatenatedData += "Artist: " + track.getArtist() + "\n";    // Добавляем в строку данные об исполнителе
    concatenatedData += "Length: " + to_string(track.getLength()) + " seconds\n";     // Добавляем в строку данные о длительности трека
    concatenatedData += "Album: " + track.getAlbum() + "\n";     // Добавляем в строку данные об альбоме
    concatenatedData += "Genre: " + track.getGenre() + "\n";    // Добавляем в строку данные о жанре трека
    concatenatedData += "Year: " + to_string(track.getYear()) + "\n";    // Добавляем в строку данные о годе выпуска трека

    // Возвращаем объединенные данные в виде строки
    return concatenatedData;
}
