static const struct arg args[] = {
	/* function format          argument */

//	{ run_command,     "|^c#61afef^ %2s ",        "up.sh" },
//	{ netspeed_tx,     "^c#ABB3BF^ %sB/s",        "wlo1" },

	{ run_command,     "|^c#61afef^ %2s ",        "down.sh" },
	{ netspeed_rx,     "^c#ABB3BF^ %sB/s |",        "wlo1" },

	{ run_command,     "^c#c678DD^ %2s ",        "upicon.sh" },
	{ uptime,          "^c#ABB3BF^ %s |",         NULL           },

	{ run_command,	   "^c#e5c07b^ %2s ",		"baticon.sh"  },
	{ run_command,	   "^c#ABB3BF^ %s%% |",		"batstatus.sh"  },
	
	{ run_command,     "^c#56b6c2^ %2s ",        "cpuicon.sh" },
	{ cpu_perc,	       "^c#ABB3BF^ %s%% |",         NULL           },
	
	{ run_command,     "^c#98c379^ %2s ",        "memicon.sh" },
	{ run_command,     "^c#ABB3BF^ %s%% |",      "memory.sh"  },
	
//	{ run_command,     "^c#C678DD^ %2s ",        "diskicon.sh" },
//	{ disk_perc,       "^c#ABB3BF^  %s%% |",         "/"            },

	{ run_command,     "^c#98C379^ %s ",        "pacicon.sh" },
	{ run_command,     "^c#ABB3BF^ %2s |",     "pac.sh" },
   
	{ run_command,     "^c#61AFEF^ %2s ",        "timeicon.sh" },
	{ datetime,        "^c#ABB3BF^ %s",         "%I:%M %p %d %b %Y" },
};
