// 函数: sub_49f640
// 地址: 0x49f640
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char** var_4 = arg1
HWND hWnd

if ((*(arg1[1] + 0x74))() == 0)
    hWnd = arg2
else
    if (IsIconic(arg2) == 0)
        return (*(arg1[1] + 0x7c))()
    
    hWnd = arg2
    
    if (sub_49e0f0(arg1) == 0)
        OpenIcon(hWnd)
        return (*(arg1[1] + 0x7c))()

return OpenIcon(hWnd)
