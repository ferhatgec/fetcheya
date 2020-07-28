/* MIT License
#
# Copyright (c) 2020 Ferhat Geçdoğan All Rights Reserved.
# Distributed under the terms of the MIT License.
#
# */

#ifndef LOGOS_H
#define LOGOS_H

#include <stdio.h>

static bool control = false;

char** OSLogo() { 
#ifdef __FreeBSD__
	static char *logo[] = {"                                     " TNRM,
                        "   " TWHT "```                        " TLRD "`      " TNRM,
                        "  " TWHT "` `.....---..." TLRD "....--.```   -/      " TNRM,
                        "  " TWHT "+o   .--`         " TLRD "/y:`      +.     " TNRM,
                        "  " TWHT " yo`:.            " TLRD ":o      `+-      " TNRM,
                        "    " TWHT "y/               " TLRD "-/`   -o/       " TNRM,
                        "   " TWHT ".-                  " TLRD "::/sy+:.      " TNRM,
                        "   " TWHT "/                     " TLRD "`--  /      " TNRM,
                        "  " TWHT "`:                          " TLRD ":`     " TNRM,
                        "  " TWHT "`:                          " TLRD ":`     " TNRM,
                        "   " TWHT "/                          " TLRD "/      " TNRM,
                        "   " TWHT ".-                        " TLRD "-.      " TNRM,
                        "    " TWHT "--                      " TLRD "-.       " TNRM,
                        "     " TWHT "`:`                  " TLRD "`:`        " TNRM,
                        "       " TLRD ".--             `--.          " TNRM,
                        "         " TLRD " .---.....----.             " TNRM,
                        "                                     " TNRM,
                        "                                     " TNRM};
	return logo;
#elif __APPLE__
	static char *logo[] = {
 				"                               ",
				    TGRN "                 -/+:.         " TNRM,
				    TGRN "                :++++.         " TNRM,
				    TGRN "               /+++/.          " TNRM,
				    TGRN "       .:-::- .+/:-``.::-      " TNRM,
				    TGRN "    .:/++++++/::::/++++++/:`   " TNRM,
				    TBRN "  .:///////////////////////:`  " TNRM,
				    TBRN "  ////////////////////////`    " TNRM,
				    TLRD " -+++++++++++++++++++++++`     " TNRM,
				    TLRD " /++++++++++++++++++++++/      " TNRM,
				    TRED " /sssssssssssssssssssssss.     " TNRM,
				    TRED " :ssssssssssssssssssssssss-    " TNRM,
				    TPUR "  osssssssssssssssssssssssso/` " TNRM,
				    TPUR "  `syyyyyyyyyyyyyyyyyyyyyyyy+` " TNRM,
				    TBLU "   `ossssssssssssssssssssss/   " TNRM,
				    TBLU "     :ooooooooooooooooooo+.    " TNRM,
				    TBLU "      `:+oo+/:-..-:/+o+/-      " TNRM "",
	};
	return logo;
#elif ____ANDROID__
	static char *logo[] = {
    				TLGN "      ▀▄  ▂▂▂▂▂  ▄▀      " TNRM, TLGN "      ▗▟█████████▙▖      " TNRM,
    				TLGN "     ▟██▀▀█████▀▀██▙     " TNRM, TLGN "     ███▄▄█████▄▄███▌    " TNRM,
    				TLGN "    █████████████████    " TNRM, TLGN "▟█▙ ▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄ ▟█▙" TNRM,
    				TLGN "███ █████████████████ ███" TNRM, TLGN "███ █████████████████ ███" TNRM,
    				TLGN "███ █████████████████ ███" TNRM, TLGN "███ █████████████████ ███" TNRM,
    				TLGN "███ █████████████████ ███" TNRM, TLGN "▜█▛ █████████████████ ▜█▛" TNRM,
    				TLGN "    ▀███████████████▀    " TNRM, TLGN "      ████     ████      " TNRM,
    				TLGN "      ████     ████      " TNRM, TLGN "      ▜██▛     ▜██▛      " TNRM};
	return logo;
#elif __OpenBSD__
	static char *logo[] = {
    				"                                       " TLCY " _  " TNRM "",
    				"                                       " TLCY "(_) " TNRM "",
    				TYLW "              |    .                       " TNRM "",
    				TYLW "          .   |L  /|   .           " TLCY "   _    " TNRM,
    				TYLW "      _ . |\\ _| \\--+._/| .           " TLCY "(_)   " TNRM,
    				TYLW "     / ||\\| Y J  )   / |/| ./              " TNRM,
    				TYLW "    J  |)'( |        ` F`.'/   " TLCY "     _      " TNRM,
	    			TYLW "  -<|  F         __     .-<        " TLCY "(_)     " TNRM,
	    			TYLW "    | /       .-'" TLCY ". " TYLW "`.  /" TLCY "-. " TYLW "L___            " TNRM,
	    			TYLW "    J \\      <    " TLCY "\\ " TYLW " | | " TDGY "O" TLCY "\\" TYLW "|.-' " TLCY
	   			     "  _        " TNRM,
	    			TYLW "  _J \\  .-    \\" TLCY "/ " TDGY "O " TLCY "| " TYLW "| \\   |" TYLW "F    " TLCY
	    			     "(_)       " TNRM,
	    			TYLW " '-F  -<_.     \\   .-'  `-' L__            " TNRM,
	    			TYLW "__J  _   _.     >-'  " TBRN ")" TLRD "._.   " TYLW "|-'            " TNRM,
	    			TYLW " `-|.'   /_.          " TLRD "\\_|  " TYLW " F              " TNRM,
    				TYLW "  /.-   .                _.<               " TNRM,
			    	TYLW " /'    /.'             .'  `\\              " TNRM,
			    	TYLW "  /L  /'   |/      _.-'-\\                  " TNRM,
			    	TYLW " /'J       ___.---'\\|                     " TNRM,
			    	TYLW "   |\\  .--' V  | `. `                     " TNRM,
	   		 	TYLW "   |/`. `-.     `._)                      " TNRM,
			   	TYLW "      / .-.\\                            " TNRM,
			   	TYLW "      \\ (  `\\                           " TNRM "",
	   			TYLW "       `.\\                                  " TNRM ""};
	return logo;
#elif __NetBSD__
	static char *logo[] = {
    				"                                  " TLRD "__,gnnnOCCCCCOObaau,_      " TNRM,
    				"   " TWHT "_._                    " TLRD "__,gnnCCCCCCCCOPF\"''               " TNRM,
    				"  " TWHT "(N\\\\\\" TLRD "XCbngg,._____.,gnnndCCCCCCCCCCCCF\"___,,,,___          " TNRM,
    				"   " TWHT "\\\\N\\\\" TLRD "XCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCOOOOPYvv.     " TNRM,
    				"    " TWHT "\\\\N\\\\" TLRD "XCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCPF\"''               " TNRM,
    				"     " TWHT "\\\\N\\\\" TLRD "XCCCCCCCCCCCCCCCCCCCCCCCCCOF\"'                     " TNRM,
    				"      " TWHT "\\\\N\\\\" TLRD "XCCCCCCCCCCCCCCCCCCCCOF\"'                         " TNRM,
    				"       " TWHT "\\\\N\\\\" TLRD "XCCCCCCCCCCCCCCCPF\"'                             " TNRM,
    				"        " TWHT "\\\\N\\\\" TLRD "\"PCOCCCOCCFP\"\"                                  " TNRM,
    				"         " TWHT "\\\\N\\                                                " TNRM,
    				"          " TWHT "\\\\N\\                                               " TNRM,
    				"           " TWHT "\\\\N\\                                              " TNRM,
    				"            " TWHT "\\\\NN\\                                            " TNRM,
    				"             " TWHT "\\\\NN\\                                           " TNRM,
    				"              " TWHT "\\\\NNA.                                         " TNRM,
    				"               " TWHT "\\\\NNA,                                        " TNRM,
    				"                " TWHT "\\\\NNN,                                       " TNRM,
    				"                 " TWHT "\\\\NNN\\                                      " TNRM,
    				"                  " TWHT "\\\\NNN\\ " TNRM,
    				"                   " TWHT "\\\\NNNA" TNRM};
	return logo;
#elif linux
	if(strstr(fsplusplus::ReadOSName().c_str(), "Fedora")) {
		static char *logo[] = {TLBL "           :/------------://          " TNRM,
                       TLBL "        :------------------://       " TNRM,
                       TLBL "      :-----------" TWHT "/shhdhyo/" TLBL "-://      " TNRM,
                       TLBL "    /-----------" TWHT "omMMMNNNMMMd/" TLBL "-:/     " TNRM,
                       TLBL "   :-----------" TWHT "sMMMdo:/" TLBL "       -:/    " TNRM,
                       TLBL "  :-----------" TWHT ":MMMd" TLBL "-------    --:/   " TNRM,
                       TLBL "  /-----------" TWHT ":MMMy" TLBL "-------    ---/   " TNRM,
                       TLBL " :------    --" TWHT "/+MMMh/" TLBL "--        ---:  " TNRM,
                       TLBL " :---     " TWHT "oNMMMMMMMMMNho" TLBL "     -----:  " TNRM,
                       TLBL " :--      " TWHT "+shhhMMMmhhy++" TLBL "   ------:   " TNRM,
                       TLBL " :-      -----" TWHT ":MMMy" TLBL "--------------/   " TNRM,
                       TLBL " :-     ------" TWHT "/MMMy" TLBL "-------------:    " TNRM,
                       TLBL " :-      ----" TWHT "/hMMM+" TLBL "------------:     " TNRM,
                       TLBL " :--" TWHT ":dMMNdhhdNMMNo" TLBL "-----------:       " TNRM,
                       TLBL " :---" TWHT ":sdNMMMMNds:" TLBL "----------:         " TNRM,
                       TLBL " :------" TWHT ":://:" TLBL "-----------://          " TNRM,
                       TLBL " :--------------------://            " TNRM,
                       "                                     " TNRM};
		return logo;
	} else if(strstr(fsplusplus::ReadOSName().c_str(), "Ubuntu")) {
		static char *logo[] = {TLRD "                          ./+o+-      " TNRM,
                       TWHT "                  yyyyy- " TLRD "-yyyyyy+     " TNRM,
                       TWHT "               " TWHT "://+//////" TLRD "-yyyyyyo     " TNRM,
                       TYLW "           .++ " TWHT ".:/++++++/-" TLRD ".+sss/`     " TNRM,
                       TYLW "         .:++o:  " TWHT "/++++++++/:--:/-     " TNRM,
                       TYLW "        o:+o+:++." TWHT "`..```.-/oo+++++/    " TNRM,
                       TYLW "       .:+o:+o/." TWHT "          `+sssoo+/   " TNRM,
                       TWHT "  .++/+:" TYLW "+oo+o:`" TWHT "             /sssooo.  " TNRM,
                       TWHT " /+++//+:" TYLW "`oo+o" TWHT "               /::--:.  " TNRM,
                       TWHT " +/+o+++" TYLW "`o++o" TLRD "               ++////.   " TNRM,
                       TWHT "  .++.o+" TYLW "++oo+:`" TLRD "             /dddhhh.  " TNRM,
                       TYLW "       .+.o+oo:." TLRD "          `oddhhhh+   " TNRM,
                       TYLW "        +.++o+o``-``" TLRD "``.:ohdhhhhh+     " TNRM,
                       TYLW "         `:o+++ " TLRD "`ohhhhhhhhyo++os:     " TNRM,
                       TYLW "           .o:" TLRD "`.syhhhhhhh/" TYLW ".oo++o`     " TNRM,
                       TLRD "               /osyyyyyyo" TYLW "++ooo+++/    " TNRM,
                       TLRD "                   ````` " TYLW "+oo+++o:     " TNRM,
                       TYLW "                          `oo++.      " TNRM};
		return logo;
	} else if(strstr(fsplusplus::ReadOSName.c_str(), "Arch")) {
		static char *logo[] = {"" TLCY "                   -`                 " TNRM,
                     "" TLCY "                  .o+`                " TNRM,
                     "" TLCY "                 `ooo/                " TNRM,
                     "" TLCY "                `+oooo:               " TNRM,
                     "" TLCY "               `+oooooo:              " TNRM,
                     "" TLCY "               -+oooooo+:             " TNRM,
                     "" TLCY "             `/:-:++oooo+:            " TNRM,
                     "" TLCY "            `/++++/+++++++:           " TNRM,
                     "" TLCY "           `/++++++++++++++:          " TNRM,
                     "" TLCY "          `/+++o" TCYN "oooooooo" TLCY "oooo/`        " TNRM,
                     "" TCYN "         " TLCY "./" TCYN "ooosssso++osssssso" TLCY "+`       " TNRM,
                     "" TCYN "        .oossssso-````/ossssss+`      " TNRM,
                     "" TCYN "       -osssssso.      :ssssssso.     " TNRM,
                     "" TCYN "      :osssssss/        osssso+++.    " TNRM,
                     "" TCYN "     /ossssssss/        +ssssooo/-    " TNRM,
                     "" TCYN "   `/ossssso+/:-        -:/+osssso+-  " TNRM,
                     "" TCYN "  `+sso+:-`                 `.-/+oso: " TNRM,
                     "" TCYN " `++:.                           `-/+/" TNRM,
                     "" TCYN " .`                                 `/" TNRM};
		return logo;
	} else if(strstr(fsplusplus::ReadOSName.c_str(), "Linux Mint")) {
		static char *logo[] = {"                                       " TNRM,
                     TLGN " MMMMMMMMMMMMMMMMMMMMMMMMMmds+.       " TNRM,
                     TLGN " MMm----::-://////////////oymNMd+`    " TNRM,
                     TLGN " MMd      " TWHT "/++                " TLGN "-sNMd:   " TNRM,
                     TLGN " MMNso/`  " TWHT "dMM    `.::-. .-::.` " TLGN ".hMN:  " TNRM,
                     TLGN " ddddMMh  " TWHT "dMM   :hNMNMNhNMNMNh: " TLGN "`NMm  " TNRM,
                     TLGN "     NMm  " TWHT "dMM  .NMN/-+MMM+-/NMN` " TLGN "dMM  " TNRM,
                     TLGN "     NMm  " TWHT "dMM  -MMm  `MMM   dMM. " TLGN "dMM  " TNRM,
                     TLGN "     NMm  " TWHT "dMM  -MMm  `MMM   dMM. " TLGN "dMM  " TNRM,
                     TLGN "     NMm  " TWHT "dMM  .mmd  `mmm   yMM. " TLGN "dMM  " TNRM,
                     TLGN "     NMm  " TWHT "dMM`  ..`   ...   ydm. " TLGN "dMM  " TNRM,
                     TLGN "     hMM- " TWHT "+MMd/-------...-:sdds  " TLGN "dMM  " TNRM,
                     TLGN "     -NMm- " TWHT ":hNMNNNmdddddddddy/`  " TLGN "dMM  " TNRM,
                     TLGN "      -dMNs-" TWHT "``-::::-------.``    " TLGN "dMM  " TNRM,
                     TLGN "       `/dMNmy+/:-------------:/yMMM  " TNRM,
                     TLGN "          ./ydNMMMMMMMMMMMMMMMMMMMMM  " TNRM,
                     TLGN "             .MMMMMMMMMMMMMMMMMMM    " TNRM,
                     "                                      " TNRM};
		return logo;
	} else { 
		static char *logo[] = {"                            " TNRM,
                	      "                            " TNRM,
                	      "                            " TNRM,
                	      TDGY "         #####              " TNRM,
                	      TDGY "        #######             " TNRM,
                	      TDGY "        ##" TWHT "O" TDGY "#" TWHT "O" TDGY "##             " TNRM,
                	      TDGY "        #" TYLW "#####" TDGY "#             " TNRM,
                	      TDGY "      ##" TWHT "##" TYLW "###" TWHT "##" TDGY "##           " TNRM,
                	      TDGY "     #" TWHT "##########" TDGY "##          " TNRM,
                	      TDGY "    #" TWHT "############" TDGY "##         " TNRM,
                	      TDGY "    #" TWHT "############" TDGY "###        " TNRM,
                	      TYLW "   ##" TDGY "#" TWHT "###########" TDGY "##" TYLW "#        " TNRM,
                	      TYLW " ######" TDGY "#" TWHT "#######" TDGY "#" TYLW "######      " TNRM,
                	      TYLW " #######" TDGY "#" TWHT "#####" TDGY "#" TYLW "#######      " TNRM,
                	      TYLW "   #####" TDGY "#######" TYLW "#####        " TNRM,
                	      "                            " TNRM,
                	      "                            " TNRM,
                	      "                            " TNRM};
		return logo;
	}	
#elif _WIN32
	static char *logo[] = {TLBL "                                  .., " TNRM,
                               TLBL "                      ....,,:;+ccllll " TNRM,
                               TLBL "        ...,,+:;  cllllllllllllllllll " TNRM,
                               TLBL "  ,cclllllllllll  lllllllllllllllllll " TNRM,
                               TLBL "  llllllllllllll  lllllllllllllllllll " TNRM,
                               TLBL "  llllllllllllll  lllllllllllllllllll " TNRM,
                               TLBL "  llllllllllllll  lllllllllllllllllll " TNRM,
                               TLBL "  llllllllllllll  lllllllllllllllllll " TNRM,
                               TLBL "  llllllllllllll  lllllllllllllllllll " TNRM,
                               TLBL "                                      " TNRM,
                               TLBL "  llllllllllllll  lllllllllllllllllll " TNRM,
                               TLBL "  llllllllllllll  lllllllllllllllllll " TNRM,
                               TLBL "  llllllllllllll  lllllllllllllllllll " TNRM,
                               TLBL "  llllllllllllll  lllllllllllllllllll " TNRM,
                               TLBL "  llllllllllllll  lllllllllllllllllll " TNRM,
                               TLBL "  `'ccllllllllll  lllllllllllllllllll " TNRM,
                               TLBL "         `'\"\"*::  :ccllllllllllllllll " TNRM,
                               TLBL "                        ````''\"*::cll " TNRM,
                               TLBL "                                   `` " TNRM};
		return logo;
#else
	control = true;
#endif
}

#endif // LOGOS_H
