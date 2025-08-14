#include "../../includes/minishell.h"

/* Handles redirection errors by printing an error message
   and cleaning up allocated memory related to the block 
   and filename, if applicable. */
void	ft_redir_error(t_block *block, char *str, char *filename)
{
	ft_putstr_fd("minishell: ", 2);
	ft_putstr_fd(str, 2);
	ft_putstr_fd(": No such file or directory\n", 2);
	if (filename)
		free(filename);
	if (!block)
		return ;
	if (block->cmd_name)
		free_string(block->cmd_name);
	if (block->args)
		free_matrix(block->args);
	free(block);
}
