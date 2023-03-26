struct reaper_status {
	uint32_t	flags;
	uint32_t	refs;
	long		reserved1[15];
	pid_t		pid_head;
	int		reserved2[15];
};
