// 函数: sub_49f5c0
// 地址: 0x49f5c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char** var_4 = arg1

if ((*(arg1[1] + 0x74))() == 0)
    if (IsIconic(arg2) != 0)
        OpenIcon(arg2)
    
    return (*(arg1[1] + 0x78))()

BOOL result = IsIconic(arg2)

if (result == 0)
    return result

if (sub_49e0f0(arg1) != 0)
    return OpenIcon(arg2)

OpenIcon(arg2)
return (*(arg1[1] + 0x7c))()
