static const struct arg args[] = {
	/* function format          argument */

	{ run_command,     "|^c#6686cc^ %2s ",        "up.sh" },
	{ netspeed_tx,     "^c#9ea6ca^ %sB/s",        "wlo1" },

	{ run_command,     "^c#6686cc^ %2s ",        "down.sh" },
	{ netspeed_rx,     "^c#9ea6ca^ %sB/s |",        "wlo1" },

	{ run_command,     "^c#9a7fcc^ %2s ",        "upicon.sh" },
	{ uptime,          "^c#9ea6ca^ %s |",         NULL           }, 

	{ run_command,	   "^c#60b2a8^ %2s ",		"baticon.sh"  },
	{ run_command,	   "^c#9ea6ca^ %s%% |",		"batstatus.sh"  },
	
	{ run_command,     "^c#68aad2^ %2s ",        "cpuicon.sh" },
	{ cpu_perc,	       "^c#9ea6ca^ %s%% |",         NULL           },
	
	{ run_command,     "^c#ca6278^ %2s ",        "memicon.sh" },
	{ run_command,     "^c#9ea6ca^ %s%% |",      "memory.sh"  },
	
	{ run_command,     "^c#60b2a8^ %2s ",        "diskicon.sh" },
	{ disk_perc,       "^c#9ea6ca^  %s%% |",         "/"            },

	{ run_command,     "^c#9a7fcc^ %s ",        "pacicon.sh" },
	{ run_command,     "^c#9ea6ca^ %2s |",     "pac.sh" },
     
	{ run_command,     "^c#ca6278^ %2s ",        "timeicon.sh" },
	{ datetime,        "^c#9ea6ca^ %s",         "%I:%M %p %d %b %Y" },
};
