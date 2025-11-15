// 函数: ?_W_Getdays@_Locinfo@std@@QBEPBGXZ
// 地址: 0x6dedca
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int16_t* eax = __W_Getdays()

if (eax != 0)
    std::_Yarn<wchar_t>::operator=(arg1 + 0x14, eax)
    _free(eax)

if (*(arg1 + 0x14) == 0)
    return u":Sun:Sunday:Mon:Monday:Tue:Tuesday:Wed:Wednesday:Thu:Thursday:Fri:Friday:Sat:Saturday"

void* result = *(arg1 + 0x14)

if (result != 0)
    return result

return arg1 + 0x18
