#ifndef _PATH_
#define _PATH_
#include "file.h"
#include "dir.h"

struct path_s
{
	struct dir_s *root_list;
	struct dir_s *parent;
};

struct path_s *path_analyze(const char *path, const char sep);

#endif /* _PATH_ */