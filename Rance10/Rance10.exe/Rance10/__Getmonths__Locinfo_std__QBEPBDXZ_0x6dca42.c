// 函数: ?_Getmonths@_Locinfo@std@@QBEPBDXZ
// 地址: 0x6dca42
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char* eax = __Getmonths()

if (eax != 0)
    sub_630d40(arg1 + 0xc, eax)
    _free(eax)

if (*(arg1 + 0xc) == 0)
    return ":Jan:January:Feb:February:Mar:March:Apr:April:May:May:Jun:June:Jul:July:Aug:August:Sep:"
    "September:Oct:October:Nov:November:Dec:December"

void* result = *(arg1 + 0xc)

if (result != 0)
    return result

return arg1 + 0x10
