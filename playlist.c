#include <stdio.h>

char* titles[] = {"Sandstorm", "BubbleButt", "Harambe"};
char* artists[] = {"Darude", "Bruno Mars", "Cincinnati Zoo"};

struct song_t 
{
char* title;
char* artist;
};

struct node_t 
{
  struct song_t* song;
  struct node_t* next;
};

struct playlist_t
{
  char* name;
  struct node_t* head;
};

void print( struct playlist_t* pl )
{
  struct node_t*  ptr;
  ptr= pl -> head; 

  while(ptr != NULL)
  {
   printf("%s by %s\n", ptr->song->title, ptr->song->artist);
   ptr =ptr->next;
  } 
}

int main(int argc, char* argv[])
{
 // struct song_t song;
  
 // song.title = titles[0];
 // song.artist = artists[0];
  struct song_t Sandstorm, BubbleButt, Harambe;
  struct playlist_t pl1, pl2;
  struct node_t p1_s1, p1_s2, p1_s3;
  struct node_t p2_s1, p2_s2, p2_s3;


  Sandstorm.title = titles[0];
  Sandstorm.artist = artists[0];
  BubbleButt.title = titles[1];
  BubbleButt.artist = artists[1];
  Harambe.title = titles[2];
  Harambe.artist = artists[2];

  pl1.name = "Hype Jams with Bros from the SchoolYard";
  pl1.head = &p1_s1;
  p1_s1.song = &Sandstorm;
  p1_s1.next = &p1_s2;
  p1_s2.song = &BubbleButt;
  p1_s2.next = &p1_s3;
  p1_s3.song = &Harambe;
  p1_s3.next = NULL;
  print(&pl1);

  return 0;
}
