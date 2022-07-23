#include <stdio.h>

typedef struct coordinate {
    int num;
    struct coordinate *next;
}land;

int top = -1;

int find( int num );
int count( int a[], int b[], int size ) ;

land *find_top(land *a) {
    if(a->next != NULL)
        return find_top(a->next);
    else
        return a;
}

int find_num( land *a, int n ) {
    land * current;
    for ( current = a ; current != NULL ; current = current->next )
        if ( current->num == n )
            return 1;

    return 0;
}

void connect( land *a, land *b ) {
    land * current = a;
    for ( ; b != NULL ; b = b->next ) {
        land * tmp = malloc(sizeof(land));
        tmp->num = b->num;
        tmp->next = NULL;
        current->next = tmp;
        current = current->next;
    } //
}

int island_count(int a[], int b[], int bufsize) {
  land lands[bufsize];

  int i, j;
  for ( j = 0 ; j < bufsize ; j++ ) {
    lands[j].num = -1;
    lands[j].next = 0;
  } // for

  for ( i = 0 ; i < bufsize ; i++ ) {
        int index1 = -1, index2 = -1;
        for ( j = 0 ; j < bufsize ; j++ )
            if( find_num( &lands[j], a[i] ) ) {
                index1 = j;
                break;
            } // if

        for ( j = 0 ; j < bufsize ; j++ )
            if( find_num( &lands[j], b[i] ) ) {
                index2 = j;
                break;
            } // if

        printf("-->%d %d\n", a[i], b[i] );

        if ( index1 == -1 && index2 == -1 ) {
            land * newLand = malloc( sizeof(land) );
            newLand->num = a[i];
            newLand->next = NULL;

            land * newLand2 = malloc( sizeof(land) );
            newLand2->num = b[i];
            newLand2->next = NULL;

            newLand->next = newLand2;
            lands[top+1] = *newLand;

            land * a = &lands[top+1];

            top++;
        } // if
        else if ( index1 != -1 && index2 == -1 ) {
            land * temp = find_top( &lands[index1] );
            temp->next = malloc( sizeof( land ) );
            temp->next->num = b[i];
            temp->next->next = NULL;
        } // else if
        else if ( index1 == -1 && index2 != -1 ) {
            land * temp = find_top( &lands[index2] );
            temp->next = malloc( sizeof( land ) );
            temp->next->num = a[i];
            temp->next->next = NULL;
        } // else if
        else {
            if ( index1 == index2 ) {
                ;
            } // if
            else {
                land * land1 = find_top( &lands[index1] );
                land * land2 = &lands[index2];
                connect( land1, land2 );

                int k;
                for ( k = index2 ; k < bufsize ; k++ )
                    if ( k+1 < bufsize )
                        lands[k] = lands[k+1];

                top--;
            } // else

        } // else


        printf("--------------%d\n", top+1);
        int k ;
        for ( k = 0; k < bufsize ; k++) {
            land *tmp;
            for ( tmp = &lands[k] ; tmp != NULL && tmp->num != -1; tmp = tmp->next )
                printf( "%d ", tmp->num );
            printf("\n");
        } //for
        printf("\n--------------\n\n");

  } // for


  return top+1;

}

int main() {
 int size;
 
  scanf( "%d", &size );
  int a[size];
  int b[size];
  int i;
  for ( i = 0 ; i < size ; i++) {
      scanf( "%d", &a[i] );
  }

  for ( i = 0 ; i < size ; i++) {
      scanf( "%d", &b[i] );
  }
  
  printf("%d\n", island_count( a, b, size ));
  system("pause");
  return 0;
}
