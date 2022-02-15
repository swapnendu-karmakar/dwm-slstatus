static const struct arg args[] = {
	/* function format          argument */

	{ run_command,     "|^c#FFD866^ %2s ",        "up.sh" },
	{ netspeed_tx,     "^c#f8f8f2^ %sB/s",        "wlo1" },

	{ run_command,     "^c#FFD866^ %2s ",        "down.sh" },
	{ netspeed_rx,     "^c#f8f8f2^ %sB/s |",        "wlo1" },

	{ run_command,     "^c#FF6188^ %2s ",        "upicon.sh" },
	{ uptime,          "^c#f8f8f2^ %s |",         NULL           }, 

	{ run_command,	   "^c#78DCE8^ %2s ",		"baticon.sh"  },
	{ run_command,	   "^c#f8f8f2^ %s%% |",		"batstatus.sh"  },
	
	{ run_command,     "^c#FC9867^ %2s ",        "cpuicon.sh" },
	{ cpu_perc,	       "^c#f8f8f2^ %s%% |",         NULL           },
	
	{ run_command,     "^c#AB9DF2^ %2s ",        "memicon.sh" },
	{ run_command,     "^c#f8f8f2^ %s%% |",      "memory.sh"   },
	
	{ run_command,     "^c#78DCE3^ %2s ",        "diskicon.sh" },
	{ disk_perc,       "^c#f8f8f2^  %s%% |",         "/"            },
	
	{ run_command,     "^c#E6DB74^ %s ",        "pacicon.sh" },
	{ run_command,     "^c#f8f8f2^ %2s |",      "pac.sh" },
        
	{ run_command,     "^c#FC9867^ %2s ",        "timeicon.sh" },
	{ datetime,        "^c#f8f8f2^ %s",         "%I:%M %p %d %b %Y" },
};
