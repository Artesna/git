#include "sha1-array.h"
static struct combine_diff_path *intersect_paths(struct combine_diff_path *curr, int n, int num_parent)
	int i, cmp;
				 int dense,
	int abbrev = opt->flags.full_index ? GIT_SHA1_HEXSZ : DEFAULT_ABBREV;
	if (added)
		dump_quoted_path("--- ", "", "/dev/null",
				 line_prefix, c_meta, c_reset);
	else
		dump_quoted_path("--- ", a_prefix, elem->path,
				 line_prefix, c_meta, c_reset);
			    int dense, int working_tree_file,
		show_combined_header(elem, num_parent, dense, rev,
	show_hunks = make_hunks(sline, cnt, num_parent, dense);
		show_combined_header(elem, num_parent, dense, rev,
		       int dense,
		show_patch_diff(p, num_parent, dense, 1, rev);
	const struct oid_array *parents, struct diff_options *opt)
		paths = intersect_paths(paths, i, num_parent);
			int dense,
			(opt->pickaxe_opts & DIFF_PICKAXE_KINDS_MASK)	||

		paths = find_paths_generic(oid, parents, &diffopts);
				show_patch_diff(p, num_parent, dense,
						0, rev);
void diff_tree_combined_merge(const struct commit *commit, int dense,
	diff_tree_combined(&commit->object.oid, &parents, dense, rev);