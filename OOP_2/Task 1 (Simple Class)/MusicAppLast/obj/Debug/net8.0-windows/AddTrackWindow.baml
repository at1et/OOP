   M S B A M L   `   `   `  ����  MusicAppLast!    MusicAppLast.AddTrackWindow   5   	   W SPresentationCore, Version=8.0.0.0, Culture=neutral, PublicKeyToken=31bf3856ad364e35\ XPresentationFramework, Version=8.0.0.0, Culture=neutral, PublicKeyToken=31bf3856ad364e35e aSystem.Windows.Controls.Ribbon, Version=8.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089R NWindowsBase, Version=8.0.0.0, Culture=neutral, PublicKeyToken=31bf3856ad364e35F 9http://schemas.microsoft.com/winfx/2006/xaml/presentation     5   	   R NSystem.Xaml, Version=8.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089:x,http://schemas.microsoft.com/winfx/2006/xaml     5   	     � Title$  Добавить трек��5   	   $	��350��6   $	��400��6,   .��5      � $��10q�6    � RowDefinitions 5   
   �� 5      $
��Auto �6   �� 5      $
��Auto �6   �� 5	      $
��Auto �6   �� 5
      $
��Auto �6   �� 5      $
��Auto �6   �� 5      $
��Auto �6   �� 5      $��* �6    � ColumnDefinitions 5   
   �� 5      $	��120 �6   �� 5      $��* �6   .+�5   
   �� $"��Название трека:��6   $��0��6+   $��0��68   $��5q�6H   $��Center=�6S   �� 5   
   -   5         ��Name$ titleTextBox��5      $��0��6(   $��1��65   $��5q�6E   �� 5   
   $��Исполнитель:��6   $��1��6(   $��0��65   $��5q�6E   $��Center=�6P   �� 5   
   -   5        $ artistTextBox��5      $��1��6)   $��1��66   $��5q�6F   �� 5   
   $��Длина:��6   $��2��6"   $��0��6/   $��5q�6?   $��Center=�6J   �� 5   
   -   5        $ lengthTextBox��5      $��2��6)   $��1��66   $��5q�6F   �� 5   
   $��Альбом:��6   $��3��6#   $��0��60   $��5q�6@   $��Center=�6K   �� 5   
   -   5        $ albumTextBox��5      $��3��6(   $��1��65   $��5q�6E   �� 5    
   $��	Жанр:��6   $��4��6!   $��0��6.   $��5q�6>   $��Center=�6I   �� 5!   
   -   5        $ genreTextBox��5!      $��4��6(   $��1��65   $��5q�6E   �� 5#   
   $��Год:��6   $��5��6    $��0��6-   $��5q�6=   $��Center=�6H   �� 5$   
   -   5        $ yearTextBox��5$      $��5��6'   $��1��64   $��5q�6D   �� 5&   
   -   5        $��Принять��5&      $��6��6#   $��1��60   $��Right=�6@   $	��100��6\   $��5q�6h   6s   5'      5(      