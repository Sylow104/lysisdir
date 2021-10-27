#ifndef _FILE_
#define _FILE_

struct dir_s;

struct file_s
{
	char *name;
	struct dir_s *parent_dir;
};

#endif /* _FILE_ */