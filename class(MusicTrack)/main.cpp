#include <iostream>
#include <cassert>
#include "MusicTrack.h"

int main() {
	{
		MusicTrack test("","",0,"","",0);
		test.setAlbum("Album");
		test.setArtist("Artist");
		test.setGenre("Genre");
		test.setLength(122);
		test.setTitle("Title");
		test.setYear(2012);
		assert(test.getAlbum() == "Album");
		assert(test.getArtist() == "Artist");
		assert(test.getGenre() == "Genre");
		assert(test.getLength() == 122);
		assert(test.getTitle() == "Title");
		assert(test.getYear() == 2012);
			 


	}
}
