#ifndef SHELL_H
#define SHELL_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <time.h>
#include <stdbool.h>

/* environment variables */
extern char **environ;
extern __sighandler_t signal(int __sig, __sighandler_t __handler);

/* handle built in functions */
int checks(char **inp, char *buf);
void user_prompt(void);
void is_interract(int h);
char **tokenize(char *rin);
char *tst_pth(char **pth, char *comm);
char *append_path(char *pth, char *comm);
int handle_builtin(char **comm, char *rin);
void exit_cmd(char **comm, char *rin);

void print_envr(void);

/* string handlers */
int _strchk(char *s1, char *s2);
int _strlen(char *s);
int _strcmp(char *s1, char *s2, int n);
char *_strndup(char *st);
char *_strnch(char *st, char ch);

void exec(char *cmd, char **inp);
char *find_path(void);

/* util functions */
void free_buff(char **buff);

struct builtin
{
	char *envr;
	char *exit;
} builtin;

struct info
{
	int final_exit;
	int ln_count;
} info;

struct flags
{
	bool interactive;
} flags;

#endif

