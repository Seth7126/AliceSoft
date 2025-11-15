// 函数: ?_Getdays@_Locinfo@std@@QBEPBDXZ
// 地址: 0x6d8f72
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char* eax = __Getdays()

if (eax != 0)
    sub_630d40(arg1 + 4, eax)
    _free(eax)

if (*(arg1 + 4) == 0)
    return ":Sun:Sunday:Mon:Monday:Tue:Tuesday:Wed:Wednesday:Thu:Thursday:Fri:Friday:Sat:Saturday"

void* result = *(arg1 + 4)

if (result != 0)
    return result

return arg1 + 8
