static const struct arg args[] = {
	/* function format          argument */

	{ run_command,     "|^c#36c692^ %2s ",        "up.sh" },
	{ netspeed_tx,     "^c#c6c6c6^ %sB/s",        "wlo1" },

	{ run_command,     "^c#36c692^ %2s ",        "down.sh" },
	{ netspeed_rx,     "^c#c6c6c6^ %sB/s |",        "wlo1" },

	{ run_command,     "^c#ae81ff^ %2s ",        "upicon.sh" },
	{ uptime,          "^c#c6c6c6^ %s |",         NULL           },

	{ run_command,	   "^c#d183e8^ %2s ",		"baticon.sh"  },
	{ run_command,	   "^c#c6c6c6^ %s%% |",		"batstatus.sh"  },
	
	{ run_command,     "^c#85dc85^ %2s ",        "cpuicon.sh" },
	{ cpu_perc,	       "^c#c6c6c6^ %s%% |",         NULL           },
	
	{ run_command,     "^c#e3c78a^ %2s ",        "memicon.sh" },
	{ run_command,     "^c#c6c6c6^ %s%% |",      "memory.sh"  },
	
	{ run_command,     "^c#79dac8^ %2s ",        "diskicon.sh" },
	{ disk_perc,       "^c#c6c6c6^  %s%% |",         "/"            },
	
	{ run_command,     "^c#74b3ff^ %s ",        "pacicon.sh" },
	{ run_command,     "^c#c6c6c6^ %2s |",      "pac.sh" },
        
	{ run_command,     "^c#ff5189^ %2s ",        "timeicon.sh" },
	{ datetime,        "^c#c6c6c6^ %s",         "%I:%M %p %d %b %Y" },
};
