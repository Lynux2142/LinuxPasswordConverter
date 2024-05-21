#include <stdio.h>
#include <crypt.h>
#include <time.h>
#include <unistd.h>

int	main(int ac, char **av) {
	char	*password;
	char	*crypt_method = {"y"};
	char	*crypt_param = {"j9T"};
	char	*salt = {"SmGCDUAhExI58rQjGwakK/"};
	char	hash_prefix[50] = {0};

	if (ac != 2) {
		printf("Error: Need string !\n");
		return (1);
	}

	sprintf(hash_prefix, "$%s$%s$%s$", crypt_method, crypt_param, salt);
	password = crypt(av[1], hash_prefix);

	printf("%s\n", password);
	return (0);
}
