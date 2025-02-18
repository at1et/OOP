using System;
using System.Windows;


namespace MusicAppLast
{
    public partial class AddTrackWindow : Window
    {
        public AddTrackWindow()
        {
            InitializeComponent();
        }

        // Событие для передачи данных о новом треке
        public event EventHandler<Track> TrackAdded;

        private void AcceptButton_Click(object sender, RoutedEventArgs e)
        {
            // Проверяем, что все поля заполнены
            if (!string.IsNullOrEmpty(titleTextBox.Text) &&
                !string.IsNullOrEmpty(artistTextBox.Text) &&
                !string.IsNullOrEmpty(lengthTextBox.Text) &&
                !string.IsNullOrEmpty(albumTextBox.Text) &&
                !string.IsNullOrEmpty(genreTextBox.Text) &&
                !string.IsNullOrEmpty(yearTextBox.Text))
            {
                // Парсинг длины трека
                if (!double.TryParse(lengthTextBox.Text, out double length))
                {
                    MessageBox.Show("Введите корректную длину трека!");
                    return;
                }
                // Запрещаем отрицательную длину
                if (length < 0)
                {
                    MessageBox.Show("Длина трека не может быть отрицательной!");
                    return;
                }

                // Парсинг года
                if (!int.TryParse(yearTextBox.Text, out int year))
                {
                    MessageBox.Show("Введите корректный год!");
                    return;
                }

                // Создаем объект с данными о треке
                var track = new Track
                {
                    TrackTitle = titleTextBox.Text,
                    Artist = artistTextBox.Text,
                    Length = length,
                    Album = albumTextBox.Text,
                    Genre = genreTextBox.Text,
                    Year = year
                };

                // Вызываем событие для передачи данных
                TrackAdded?.Invoke(this, track);

                // Устанавливаем результат диалога и закрываем окно
                DialogResult = true;
                Close();
            }
            else
            {
                MessageBox.Show("Введите все данные о треке!");
            }
        }
    }

    // Класс Track добавляем вне класса окна, но в том же пространстве имён.
    public class Track
    {
        public string TrackTitle { get; set; }
        public string Artist { get; set; }
        public double Length { get; set; }
        public string Album { get; set; }
        public string Genre { get; set; }
        public int Year { get; set; }

        // Переопределяем ToString(), чтобы в ListBox отображалась строка "Исполнитель - Название"
        public override string ToString()
        {
            return $"{Artist} - {TrackTitle}";
        }
    }
}
