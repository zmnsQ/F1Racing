#include "stdafx.h"

 

int main() {
	
	Loadimage();
	Startup();
	Go();
	while (1)
	{
      Show();
      UpdateWithoutInput(1);
	  UpdateWithInput();
	}
	
	
	
	return 0;
}
