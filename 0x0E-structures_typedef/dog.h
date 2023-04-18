#ifndef DOG_H
#define DOG_H


**/
 * struct dog - define a new structure
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: Strcture with info about a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif /* NAME_H */
