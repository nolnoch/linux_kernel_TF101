static const char *rlim_names[] = {
[0]  = "cpu",
[1]  = "fsize",
[2]  = "data",
[3]  = "stack",
[4]  = "core",
[5]  = "rss",
[6]  = "nproc",
[7]  = "nofile",
[8]  = "memlock",
[9]  = "as",
[10]  = "locks",
[11]  = "sigpending",
[12]  = "msgqueue",
[13]  = "nice",
[14]  = "rtprio",
[15]  = "rttime",
};
static const int rlim_map[] = {
RLIMIT_CPU,
RLIMIT_FSIZE,
RLIMIT_DATA,
RLIMIT_STACK,
RLIMIT_CORE,
RLIMIT_RSS,
RLIMIT_NPROC,
RLIMIT_NOFILE,
RLIMIT_MEMLOCK,
RLIMIT_AS,
RLIMIT_LOCKS,
RLIMIT_SIGPENDING,
RLIMIT_MSGQUEUE,
RLIMIT_NICE,
RLIMIT_RTPRIO,
RLIMIT_RTTIME,
};