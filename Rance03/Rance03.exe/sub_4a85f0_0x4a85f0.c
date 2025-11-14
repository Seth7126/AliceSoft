// 函数: sub_4a85f0
// 地址: 0x4a85f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* eax = *(arg1 + 0x54)

if (eax == 0)
    if (*(arg1 + 0x48) == *(arg1 + 0x4c))
        struct partsengine::CGUIController::VTable** eax_2 = sub_4e7cb0(arg1 + 0x28)
        sub_4a8470(arg1, sub_4e7cb0(arg1 + 0x28), eax_2, 0)
    
    eax = *(*(arg1 + 0x48) + ((*(arg1 + 0x4c) - *(arg1 + 0x48)) s>> 2 << 2) - 4)

void* result = *(eax + 4)

if (result != 0)
    return *(result + 0x2c)

return result
