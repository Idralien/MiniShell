#include "../../includes/minishell.h"

/* Implements the `env` command.
*  Iterates through the environment variables in `g_data`.
*  Prints each environment variable in the format `front=back`,
*  followed by a newline. */
int	ft_env(t_data	*g_data)
{
	t_env	*env;

	env = g_data->environmental;
	while (env)
	{
		ft_putstr_fd(env->front, 1);
		ft_putstr_fd("=", 1);
		ft_putstr_fd(env->back, 1);
		ft_putstr_fd("\n", 1);
		env = env->next;
	}
	return (0);
}
