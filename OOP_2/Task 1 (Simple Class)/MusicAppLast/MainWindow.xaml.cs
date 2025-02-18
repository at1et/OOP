using System;
using System.IO;
using System.Windows;

namespace MusicAppLast
{
    public partial class MainWindow : Window
    {
        public MainWindow()
        {
            InitializeComponent();
        }

        private void SaveButton_Click(object sender, RoutedEventArgs e)
        {
            var addTrackWindow = new AddTrackWindow();

            addTrackWindow.TrackAdded += (s, track) =>
            {
                // Добавляем объект трека в ListBox
                TracksListBox.Items.Add(track);

                // Формируем строку с данными трека
                string trackData = $"Название трека: {track.TrackTitle}\n" +
                                   $"Исполнитель: {track.Artist}\n" +
                                   $"Длина: {track.Length}\n" +
                                   $"Альбом: {track.Album}\n" +
                                   $"Жанр: {track.Genre}\n" +
                                   $"Год: {track.Year}\n" +
                                   "--------------------------------\n";

                // Определяем путь к файлу на рабочем столе
                string desktopPath = Environment.GetFolderPath(Environment.SpecialFolder.Desktop);
                string filePath = Path.Combine(desktopPath, "tracks.txt");

                // Записываем данные в файл
                File.AppendAllText(filePath, trackData);
            };

            addTrackWindow.ShowDialog();
        }

        private void TracksListBox_SelectionChanged(object sender, System.Windows.Controls.SelectionChangedEventArgs e)
        {
            if (TracksListBox.SelectedItem is Track selectedTrack)
            {
                DetailsTextBlock.Text =
                    $"Название трека: {selectedTrack.TrackTitle}\n" +
                    $"Исполнитель: {selectedTrack.Artist}\n" +
                    $"Длина: {selectedTrack.Length}\n" +
                    $"Альбом: {selectedTrack.Album}\n" +
                    $"Жанр: {selectedTrack.Genre}\n" +
                    $"Год: {selectedTrack.Year}";
            }
            else
            {
                DetailsTextBlock.Text = "";
            }
        }
    }
}
