/*
** EPITECH PROJECT, 2019
** 104intersection
** File description:
** function
*/

#ifndef FUNCTION_H_
#define FUNCTION_H_


////////////////////////////////////////////////////////////
/// \brief Init all variables
///
/// \param main_s Struct contains programm's informations
/// \param ac nomber of argument
/// \param av string contains arguments
///
/// \return 84 if an error occured. else return 0
////////////////////////////////////////////////////////////
_Bool initialisation(main_t *shell, char **evrnmt, char **av);


////////////////////////////////////////////////////////////
/// \brief Check if there is an error
///
/// \param main_s Struct contains programm's informations
///
/// \return 84 if an error occured. else return 0
////////////////////////////////////////////////////////////
_Bool error_handling(main_t *shell, int ac, char **av);


////////////////////////////////////////////////////////////
/// \brief Process programm's
///
/// \param main_s Struct contains programm's informations
///
/// \return void
////////////////////////////////////////////////////////////
void process(main_t *shell);


////////////////////////////////////////////////////////////
/// \brief Display results
///
/// \param main_s Struct contains programm's informations
///
/// \return void
////////////////////////////////////////////////////////////
void display(main_t *shell);

void shell_loop(main_t *shell);

void display_prompt(main_t *shell);

void cd_fct(main_t *shell);

void ls_fct(main_t *shell);

#endif /* !FUNCTION_H_ */