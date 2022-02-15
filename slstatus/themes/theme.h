static const struct arg args[] = {
	/* function format          argument */

	{ run_command,     "|^c#8700af^ %2s ",        "up.sh" },
	{ netspeed_tx,     "^c#444444^ %sB/s",        "wlo1" },

	{ run_command,     "^c#8700af^ %2s ",        "down.sh" },
	{ netspeed_rx,     "^c#444444^ %sB/s |",        "wlo1" },

	{ run_command,     "^c#d75f00^ %2s ",        "upicon.sh" },
	{ uptime,          "^c#444444^ %s |",         NULL           },

	{ run_command,	   "^c#0087af^ %2s ",		"baticon.sh"  },
	{ run_command,	   "^c#444444^ %s%% |",		"batstatus.sh"  },
	
	{ run_command,     "^c#005fa7^ %2s ",        "cpuicon.sh" },
	{ cpu_perc,	       "^c#444444^ %s%% |",         NULL           },
	
	{ run_command,     "^c#5f8700^ %2s ",        "memicon.sh" },
	{ run_command,     "^c#444444^ %s%% |",   "memory.sh"  },
	
	{ run_command,     "^c#af0000^ %2s ",        "diskicon.sh" },
	{ disk_perc,       "^c#444444^  %s%% |",         "/"            },

	{ run_command,     "^c#005faf^ %s ",        "pacicon.sh" },
	{ run_command,     "^c#444444^ %2s |",     "pac.sh" },
     
	{ run_command,     "^c#d70000^ %2s ",        "timeicon.sh" },
	{ datetime,        "^c#444444^ %s",         "%I:%M %p %d %b %Y" },
};
