	static const char *expected_none[] = { "<END>" };
	cl_git_pass(git_submodule_reload_all(g_repo));
	cl_git_pass(git_submodule_reload_all(g_repo));
	cl_git_pass(git_submodule_reload_all(g_repo));