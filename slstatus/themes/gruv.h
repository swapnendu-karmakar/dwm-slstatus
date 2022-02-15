static const struct arg args[] = {
	/* function format          argument */

	{ run_command,     " %s ",        "mpdicon.sh" },
	{ run_command,     " \x05%s |",        "mpd.sh" }, 

	{ run_command,     " \x04%s ",        "mailicon.sh" },
	{ run_command,     " \05%s |",        "newmail.sh" },

	{ run_command,     " \x04%2s ",        "upicon.sh" },
	{ uptime,          " \x05%s |",         NULL           }, 
	
	{ run_command,     " \x04%2s ",        "cpuicon.sh" },
	{ cpu_perc,	       " \x05%s%% |",         NULL           },
 	
	{ run_command,     " \x04%2s ",        "ramicon.sh" },
	{ ram_perc,        " \x05%s%% |",        NULL           },
	
	{ run_command,     " \x04%2s ",        "diskicon.sh" },
	{ disk_perc,       " \x05%s%% |",         "/"            },
 	
	{ run_command,     " \x04%2s ",        "tempicon.sh" },
	{ run_command,     " \x05%2s |",     "tail -1 ~/.config/.temp" }, 

	{ run_command,     " \x04%2s ",        "weathericon.sh" },
	{ run_command,     " \x05%2s |",     "tail -1 ~/.config/weather" }, 
 	
	{ run_command,     " \x04%s ",        "pacmanicon.sh" },
	{ run_command,     " \x05%2s |",     "tail -1 ~/.config/updates" },
	

	{ run_command,     " \x04%s ",        "volumeicon.sh" },
	{ run_command,     " \x05%s |",     "volume.sh" }, 
        
	{ run_command,     " \x04%2s ",        "timeicon.sh" },
	{ datetime,        " \x05%s",         "%a %b %d - %I:%M%p" },
};
