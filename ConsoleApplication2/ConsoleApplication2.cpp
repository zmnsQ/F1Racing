#include "stdafx.h"



int main() {
	
	Startup();
	while (1)
	{
      Show();
      UpdateWithoutInput(1);
	  UpdateWithInput();
	  
	}
	
	
	return 0;
}
