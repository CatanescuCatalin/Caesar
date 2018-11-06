#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
        char message[100];
        int key;

        char character;
        int i;
        printf("Plain message is: ");
        gets(message);
        printf("Key is: ");
        scanf("%d", &key);


        for(i=0;message[i]!= '\0';++i)
        {
            character=message[i];

            if(character>='a'&&character<='z')
            {
                character=character+key;

                if(character > 'z')
                {
                    character=character - 'z' + 'a' - 1;
                }

                message[i] = character;
            }

             else if(character>='A'&&character<='Z')
            {
                character=character+key;

                if(character > 'Z')
                {
                    character=character - 'Z' + 'A' - 1;
                }

                message[i] = character;
            }
        }

        printf("Mesajul criptat este: %s",message);



    return 0;
}
