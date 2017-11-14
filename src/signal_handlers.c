#include "signal_handlers.h"
#include <signal.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>



void catch_sigint(int signalNo)
{
  // TODO: File this!
 signal(signalNo,SIG_IGN);

}

void catch_sigtstp(int signalNo)
{
  // TODO: File this!

signal(signalNo, SIG_IGN);


}

