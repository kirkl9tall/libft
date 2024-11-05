CCFLAGS:= cc -Wextra -Wall -Werror
files=  *.c libft.h
commande:
	$(call Display,files,./a.out)

define Display
	@echo "--------------- Compiling Files ...-----------\n"
	@$(CCFLAGS) $(files)
	@echo "--------------compilation  finished !------------------\n"
	@echo "------------------runing output !---------------\n"
	@$2  
endef 
