#if defined(UNICODE) && !defined(_UNICODE)
    #define _UNICODE
#elif defined(_UNICODE) && !defined(UNICODE)
    #define UNICODE
#endif
#include<bits/stdc++.h>
#include <tchar.h>
#include <windows.h>
int oneTime=0,manOneTime=0,OneTimeOnly=0;
HWND hwnd,hwnd3,hwnd4,hwnd5,hwnd6,button;
WNDCLASSEX temp;
//hwnd starts from 3;

LRESULT CALLBACK WndProc(HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam)
{
    switch (message)                  /* handle the messages */
    {
    case WM_CREATE:
      if(oneTime==0)
                {
          button= CreateWindow("BUTTON",
                                "Admin",
                                WS_VISIBLE | WS_CHILD | WS_BORDER,
                                150,40,200,100,
                                hwnd,(HMENU) 1,NULL,NULL);
                                oneTime++;
                                OneTimeOnly++;
             button =CreateWindow("BUTTON",
                                "Manager",
                                WS_VISIBLE | WS_CHILD | WS_BORDER,
                                150,150,200,100,
                                hwnd,(HMENU) 2,NULL,NULL);
                                oneTime++;
                                OneTimeOnly++;

              button= CreateWindow("BUTTON",
                                "Cashier",
                                WS_VISIBLE | WS_CHILD | WS_BORDER,
                                150,260,200,100,
                                hwnd,(HMENU) 3,NULL,NULL);
                                oneTime++;
                                OneTimeOnly++;


                 /* button= CreateWindow("BUTTON",
                                "Customer",
                                WS_VISIBLE | WS_CHILD | WS_BORDER,
                                150,370,200,100,
                                hwnd,(HMENU) 4,NULL,NULL);
                                oneTime++;
                                */


                            button= CreateWindow("BUTTON",
                                "Close",
                                WS_VISIBLE | WS_CHILD | WS_BORDER,
                                150,480,200,100,
                                hwnd,(HMENU) 5,NULL,NULL);
                                 break;

                }

    case WM_COMMAND:
            {
        if(LOWORD(wParam)==1)
           {

             hwnd3 = CreateWindowEx(WS_EX_CLIENTEDGE,"WindowClass","Authorization",WS_VISIBLE|WS_SYSMENU,
				CW_USEDEFAULT, /* x */
				CW_USEDEFAULT, /* y */
				600, /* width */
				200, /* height */
				hwnd3,NULL,temp.hInstance,NULL);
				//DestroyWindow(hwnd);

				CreateWindow("STATIC","UserId:",
				WS_VISIBLE|WS_CHILD | WS_BORDER,
				10,20,60,20, //X , Y, Width , height
				hwnd3,NULL,NULL,NULL);

				CreateWindow("EDIT","",
				WS_VISIBLE|WS_CHILD | WS_BORDER|ES_MULTILINE|ES_AUTOHSCROLL,
				70,20,100,20, //X , Y, Width , height
				hwnd3,NULL,NULL,NULL);

				CreateWindow("STATIC","Pass:",
				WS_VISIBLE|WS_CHILD| WS_BORDER,
				190,20,50,20, //X , Y, Width , height
				hwnd3,NULL,NULL,NULL);

				CreateWindow("EDIT","",
				WS_VISIBLE|WS_CHILD | WS_BORDER,
				240,20,120,20, //X , Y, Width , height
				hwnd3,NULL,NULL,NULL);

				CreateWindow("BUTTON","Log in",
				WS_VISIBLE|WS_CHILD| WS_BORDER,
				150,80,90,40, //X , Y, Width , height
				hwnd3,(HMENU)6,NULL,NULL);

                break;
           }

         if(LOWORD(wParam)==2)
         {
                hwnd4 = CreateWindowEx(WS_EX_CLIENTEDGE,"WindowClass","Authorization",WS_VISIBLE|WS_SYSMENU,
				CW_USEDEFAULT, /* x */
				CW_USEDEFAULT, /* y */
				600, /* width */
				200, /* height */
				hwnd4,NULL,temp.hInstance,NULL);
				//DestroyWindow(hwnd);

				CreateWindow("STATIC","UserId:",
				WS_VISIBLE|WS_CHILD | WS_BORDER,
				10,20,60,20, //X , Y, Width , height
				hwnd4,NULL,NULL,NULL);

				CreateWindow("EDIT","",
				WS_VISIBLE|WS_CHILD | WS_BORDER,
				70,20,90,20, //X , Y, Width , height
				hwnd4,NULL,NULL,NULL);

				CreateWindow("STATIC","Pass:",
				WS_VISIBLE|WS_CHILD| WS_BORDER,
				190,20,50,20, //X , Y, Width , height
				hwnd4,NULL,NULL,NULL);
//
				CreateWindow("EDIT","",
				WS_VISIBLE|WS_CHILD | WS_BORDER,
				240,20,120,20, //X , Y, Width , height
				hwnd4,NULL,NULL,NULL);

				CreateWindow("BUTTON","Log in",
				WS_VISIBLE|WS_CHILD| WS_BORDER,
				150,80,90,40, //X , Y, Width , height
				hwnd4,(HMENU)18,NULL,NULL);

                break;

         }


         if(LOWORD(wParam)== 3)
         {

            hwnd5 = CreateWindowEx(WS_EX_CLIENTEDGE,"WindowClass","Authorization",WS_VISIBLE|WS_SYSMENU,
				CW_USEDEFAULT, /* x */
				CW_USEDEFAULT, /* y */
				600, /* width */
				200, /* height */
				hwnd5,NULL,temp.hInstance,NULL);



				CreateWindow("STATIC","UserId:",
				WS_VISIBLE|WS_CHILD | WS_BORDER,
				10,20,60,20, //X , Y, Width , height
				hwnd5,NULL,NULL,NULL);

				CreateWindow("EDIT","",
				WS_VISIBLE|WS_CHILD | WS_BORDER,
				70,20,90,20, //X , Y, Width , height
				hwnd5,NULL,NULL,NULL);


				CreateWindow("STATIC","Pass:",
				WS_VISIBLE|WS_CHILD| WS_BORDER,
				190,20,50,20, //X , Y, Width , height
				hwnd5,NULL,NULL,NULL);
//
				CreateWindow("EDIT","",
				WS_VISIBLE|WS_CHILD | WS_BORDER,
				240,20,120,20, //X , Y, Width , height
				hwnd5,NULL,NULL,NULL);

				CreateWindow("BUTTON","Log in",
				WS_VISIBLE|WS_CHILD| WS_BORDER,
				150,80,90,40, //X , Y, Width , height
				hwnd5,(HMENU)24,NULL,NULL);



           break;
         }


         if(LOWORD(wParam)==5)
         {
            MessageBeep(MB_ICONERROR);
            PostQuitMessage (0);
           break;
         }


         if(LOWORD(wParam)==6)
         {
                ::MessageBox(hwnd3,"Welcome Admin!","Success!",MB_OK);
                 CloseWindow(hwnd3);

                    hwnd3 = CreateWindowEx(WS_EX_CLIENTEDGE,"WindowClass","Admin Operations",WS_VISIBLE|WS_SYSMENU,
					CW_USEDEFAULT, /* x */
					CW_USEDEFAULT, /* y */
					600, /* width */
					800, /* height */
					NULL,NULL,temp.hInstance,NULL);

					CreateWindow("BUTTON","Add Product",
					WS_VISIBLE|WS_CHILD,
					150,20,200,60, //X , Y, Width , height
					hwnd3,(HMENU) 7,NULL,NULL);

					CreateWindow("BUTTON","Edit Product",
					WS_VISIBLE|WS_CHILD,
					150,80,200,60, //X , Y, Width , height
					hwnd3,(HMENU) 8,NULL,NULL);

                    CreateWindow("BUTTON","Add Employee",
					WS_VISIBLE|WS_CHILD,
					150,140,200,60, //X , Y, Width , height
					hwnd3,(HMENU) 9,NULL,NULL);

					CreateWindow("BUTTON","View Employee",
					WS_VISIBLE|WS_CHILD,
					150,200,200,60, //X , Y, Width , height
					hwnd3,(HMENU) 10,NULL,NULL);

                    CreateWindow("BUTTON","Search Employee",
					WS_VISIBLE|WS_CHILD,
					150,260,200,60, //X , Y, Width , height
					hwnd3,(HMENU) 11,NULL,NULL);

					CreateWindow("BUTTON","Edit Employee",
					WS_VISIBLE|WS_CHILD,
					150,320,200,60, //X , Y, Width , height
					hwnd3,(HMENU) 12,NULL,NULL);

                    CreateWindow("BUTTON","View Branch",
					WS_VISIBLE|WS_CHILD,
					150,380,200,60, //X , Y, Width , height
					hwnd3,(HMENU) 13,NULL,NULL);

					CreateWindow("BUTTON","Search Branch",
					WS_VISIBLE|WS_CHILD,
					150,440,200,60, //X , Y, Width , height
					hwnd3,(HMENU) 14,NULL,NULL);

                    CreateWindow("BUTTON","Delete Employee",
					WS_VISIBLE|WS_CHILD,
					150,500,200,60, //X , Y, Width , height
					hwnd3,(HMENU) 15,NULL,NULL);

					CreateWindow("BUTTON","Delete Branch",
					WS_VISIBLE|WS_CHILD,
					150,560,200,60, //X , Y, Width , height
					hwnd3,(HMENU) 16,NULL,NULL);

                    CreateWindow("BUTTON","Details",
					WS_VISIBLE|WS_CHILD,
					150,620,200,60, //X , Y, Width , height
					hwnd3,(HMENU) 17,NULL,NULL);


                    break;
         }



    }

    if(LOWORD(wParam)==18)
    {
            ::MessageBox(hwnd4,"Welcome Manager!","Success!",MB_OK);
            CloseWindow(hwnd4);


   hwnd4 = CreateWindowEx(WS_EX_CLIENTEDGE,"WindowClass","Manager Operations",WS_VISIBLE|WS_SYSMENU,
                                CW_USEDEFAULT, /* x */
                                CW_USEDEFAULT, /* y */
                                600, /* width */
                                800, /* height */
                                NULL,NULL,temp.hInstance,NULL);

                    CreateWindow("BUTTON","Add Product",
					WS_VISIBLE|WS_CHILD,
					150,40,200,90, //X , Y, Width , height
					hwnd4,(HMENU) 19,NULL,NULL);

					CreateWindow("BUTTON","Edit Product",
					WS_VISIBLE|WS_CHILD,
					150,140,200,90, //X , Y, Width , height
					hwnd4,(HMENU) 20,NULL,NULL);

                    CreateWindow("BUTTON","Add Employee",
					WS_VISIBLE|WS_CHILD,
					150,240,200,90, //X , Y, Width , height
					hwnd4,(HMENU) 21,NULL,NULL);

					CreateWindow("BUTTON","View Employee",
					WS_VISIBLE|WS_CHILD,
					150,340,200,90, //X , Y, Width , height
					hwnd4,(HMENU) 22,NULL,NULL);

                    CreateWindow("BUTTON","Search Employee",
					WS_VISIBLE|WS_CHILD,
					150,440,200,90, //X , Y, Width , height
					hwnd4,(HMENU) 23,NULL,NULL);




         break;
    }

    if(LOWORD(wParam)==24)
    {
            ::MessageBox(hwnd5,"Welcome Cashier!","Success!",MB_OK);
            CloseWindow(hwnd5);


     hwnd5 = CreateWindowEx(WS_EX_CLIENTEDGE,"WindowClass","Manager Operations",WS_VISIBLE|WS_SYSMENU,
                                CW_USEDEFAULT, /* x */
                                CW_USEDEFAULT, /* y */
                                600, /* width */
                                800, /* height */
                                NULL,NULL,temp.hInstance,NULL);

                    CreateWindow("BUTTON","Generate Bill",
					WS_VISIBLE|WS_CHILD,
					150,140,200,90, //X , Y, Width , height
					hwnd5,(HMENU) 25,NULL,NULL);

                    CreateWindow("BUTTON","Add Customer",
					WS_VISIBLE|WS_CHILD,
					150,240,200,90, //X , Y, Width , height
					hwnd5,(HMENU) 26,NULL,NULL);

					CreateWindow("BUTTON","View Customer",
					WS_VISIBLE|WS_CHILD,
					150,340,200,90, //X , Y, Width , height
					hwnd5,(HMENU) 27,NULL,NULL);

                    CreateWindow("BUTTON","Details",
					WS_VISIBLE|WS_CHILD,
					150,440,200,90, //X , Y, Width , height
					hwnd5,(HMENU) 28,NULL,NULL);




         break;
    }

                 break;


        case WM_DESTROY:
            {

            if(OneTimeOnly==1)
            { }
            else
            PostQuitMessage (0);       /* send a WM_QUIT to the message queue */
            break;

            }
        default:                      /* for messages that we don't deal with */
            return DefWindowProc (hwnd, message, wParam, lParam);
    }

    return 0;
}

/* The 'main' function of Win32 GUI programs: this is where execution starts */
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
	WNDCLASSEX wc; /* A properties struct of our window */
	HWND hwnd; /* A 'HANDLE', hence the H, or a pointer to our window */
	MSG msg; /* A temporary location for all messages */

	/* zero out the struct and set the stuff we want to modify */
	memset(&wc,0,sizeof(wc));
	wc.cbSize		 = sizeof(WNDCLASSEX);
	wc.lpfnWndProc	 = WndProc; /* This is where we will send messages to */
	wc.hInstance	 = hInstance;
	wc.hCursor		 = LoadCursor(NULL, IDC_ARROW);

	/* White, COLOR_WINDOW is just a #define for a system color, try Ctrl+Clicking it */
	wc.hbrBackground = (HBRUSH)(COLOR_WINDOW+0);
	wc.lpszClassName = "WindowClass";
	wc.hIcon		 = LoadIcon(NULL, IDI_APPLICATION); /* Load a standard icon */
	wc.hIconSm		 = LoadIcon(NULL, IDI_APPLICATION); /* use the name "A" to use the project icon */

	if(!RegisterClassEx(&wc)) {
		MessageBox(NULL, "Window Registration Failed!","Error!",MB_ICONEXCLAMATION|MB_OK);
		return 0;
	}

	hwnd = CreateWindowEx(WS_EX_CLIENTEDGE,"WindowClass","POS System",WS_VISIBLE|WS_SYSMENU|WS_MINIMIZEBOX,
		CW_USEDEFAULT, /* x */
		CW_USEDEFAULT, /* y */
		600, /* width */
		800, /* height */
		NULL,NULL,hInstance,NULL);

	if(hwnd == NULL) {
		MessageBox(NULL, "Window Creation Failed!","Error!",MB_ICONEXCLAMATION|MB_OK);
		return 0;
	}

	/*
		This is the heart of our program where all input is processed and
		sent to WndProc. Note that GetMessage blocks code flow until it receives something, so
		this loop will not produce unreasonably high CPU usage
	*/
	while(GetMessage(&msg, NULL, 0, 0) > 0) { /* If no error is received... */
		TranslateMessage(&msg); /* Translate key codes to chars if present */
		DispatchMessage(&msg); /* Send it to WndProc */
	}
	return msg.wParam;
}
