static const struct arg args[] = {
	/* function format          argument */

	{ run_command,     "|^c#ffffff^ %2s ",        "up.sh" },
	{ netspeed_tx,     "^c#ffffff^ %sB/s",        "wlo1" },

	{ run_command,     "^c#ffffff^ %2s ",        "down.sh" },
	{ netspeed_rx,     "^c#ffffff^ %sB/s |",        "wlo1" },

	{ run_command,     "^c#9565F1^ %2s ",        "upicon.sh" },
	{ uptime,          "^c#ffffff^ %s |",         NULL           }, 

	{ run_command,	   "^c#9565F1^ %2s ",		"baticon.sh"  },
	{ run_command,	   "^c#ffffff^ %s%% |",		"batstatus.sh"  },
	
	{ run_command,     "^c#ffffff^ %2s ",        "cpuicon.sh" },
	{ cpu_perc,	       "^c#ffffff^ %s%% |",         NULL           },
	
	{ run_command,     "^c#9565F1^ %2s ",        "memicon.sh" },
	{ run_command,     "^c#ffffff^ %s%% |",   "memory.sh"   },
	
	{ run_command,     "^c#ffffff^ %2s ",        "diskicon.sh" },
	{ disk_perc,       "^c#ffffff^  %s%% |",         "/"            },

	{ run_command,     "^c#9565F1^ %s ",        "pacicon.sh" },
	{ run_command,     "^c#ffffff^ %2s |",     "pac.sh" },
     
	{ run_command,     "^c#9565F1^ %2s ",        "timeicon.sh" },
	{ datetime,        "^c#ffffff^ %s",         "%I:%M %p %d %b %Y" },
};
