#include <proto/intuition.h>
#include <proto/dos.h>
#include <intuition/intuition.h>
int main() {
   struct Window *myWindow;
  myWindow = OpenWindowTags(NULL,
     WA_Left, 20, WA_Top, 20,
     WA_Width, 200, WA_Height, 150,
     WA_IDCMP, IDCMP_CLOSEWINDOW,
     WA_Flags, WFLG_SIZEGADGET | WFLG_DRAGBAR | WFLG_DEPTHGADGET | WFLG_CLOSEGADGET | WFLG_ACTIVATE,
     WA_Title, "My Window",
     WA_PubScreenName, "Workbench",
     TAG_DONE );
   Delay(200);
   if (myWindow) CloseWindow(myWindow);
   return(0);
   }
