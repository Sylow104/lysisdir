#ifndef _DIR_
#define _DIR_

struct file_s;

struct dir_s
{
	char *name;
	struct dir_s *parent;
	int n_dir_childs;
	struct dir_s **dir_childs;
	int n_file_childs;
	struct file_s **file_childs;
};

#endif /* _DIR_ */