#include "path.h"
#include <stdio.h>
#include <stdlib.h>

int path_count(const char *path, const char sep)
{
	int to_ret = 0;
	char *path_ptr = (char *) path;

	while (*path_ptr) {
		if (*path_ptr == sep) {
			to_ret++;
		}
		path_ptr++;
	}
	return to_ret;
}

struct path_s *path_analyze(const char *path, const char sep)
{
	struct path_s *to_ret = 0x0;
	int count = path_count(path, sep) + 1;

	to_ret = (struct path_s *) malloc(sizeof(struct path_s) * 
		count);
	if (!to_ret) {
		goto exit;
	}
exit:
	return to_ret;
}