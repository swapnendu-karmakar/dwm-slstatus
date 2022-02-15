static const struct arg args[] = {
	/* function format          argument */

//	{ run_command,     "|^c#8be9fd^ %2s ",        "up.sh" },
//	{ netspeed_tx,     "^c#f8f8f2^ %sB/s",        "wlo1" },

	{ run_command,     "^c#8be9fd^ %2s ",         "down.sh" },
	{ netspeed_rx,     "^c#f8f8f2^ %sB/s |",        "wlo1"  },

//	{ run_command,     "^c#ff79c6^ %2s ",        "upicon.sh" },
//	{ uptime,          "^c#f8f8f2^ %s |",         NULL           }, 

	{ run_command,	   "^c#50fa7b^ %2s ",		"baticon.sh"  },
	{ run_command,	   "^c#f8f8f2^ %s%% |",		"batstatus.sh"  },
	
	{ run_command,     "^c#ffb86c^ %2s ",        "cpuicon.sh" },
	{ cpu_perc,	      "^c#f8f8f2^ %s%% |",         NULL           },
	
//	{ run_command,     "^c#f1fa8c^ %2s ",        "memicon.sh" },
//	{ run_command,     "^c#f8f8f2^ %s |",      "memory.sh"  },

        { run_command,     "^c#f1fa8c^ %2s ",        "memicon.sh" },
	{ ram_used,	   "^c#f8f8f2^ %s/",             NULL     },
	{ ram_total,       "^c#f8f8f2^%s |",            NULL     },
	
//	{ run_command,     "^c#ff5555^ %2s ",        "diskicon.sh" },
//	{ disk_perc,       "^c#f8f8f2^ %s%% |",         "/"       },

//	{ run_command,     "^c#bd93f9^ %s ",        "pacicon.sh" },
//	{ run_command,     "^c#f8f8f2^ %2s |",     "pac.sh" },
	    
	{ run_command,     "^c#f1fa8c^ %2s ",        "timeicon.sh" },
	{ datetime,        "^c#f8f8f2^ %s |",         "%I:%M %p %d %b %Y" },
};
