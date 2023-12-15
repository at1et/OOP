# АТД

# Описание:

MusicTrack представляет собой абстракцию музыкального трека, содержащую информацию о его названии, исполнителе, длительности, альбоме, жанре и годе выпуска.
Операции:

# Конструктор:
MusicTrack(title: string, artist: string, length: double, album: string, genre: string, year: int): MusicTrack - создает экземпляр MusicTrack с заданными параметрами.

# Методы:

printTrackInfo(): void - выводит информацию о треке в консоль.

getTitle(): string - возвращает название трека.

setTitle(title: string): void - устанавливает название трека.

getArtist(): string - возвращает имя исполнителя.

etArtist(artist: string): void - устанавливает имя исполнителя.

getLength(): double - возвращает длительность трека.

setLength(length: double): void - устанавливает длительность трека.

getAlbum(): string - возвращает название альбома.

setAlbum(album: string): void - устанавливает название альбома.

getGenre(): string - возвращает жанр трека.

setGenre(genre: string): void - устанавливает жанр трека.

getYear(): int - возвращает год выпуска трека.

setYear(year: int): void - устанавливает год выпуска трека.

getLengthInSeconds(): double - возвращает длительность трека в секундах.

# UML

![UML](https://raw.githubusercontent.com/at1et/OOP/main/drawio/UML%20MusicTrack.drawio.svg)
