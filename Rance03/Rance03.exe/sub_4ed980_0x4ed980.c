// 函数: sub_4ed980
// 地址: 0x4ed980
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* eax_5 = data_75d4fc
void* ecx = *(eax_5 + 0x1c8)

if (ecx == 0)
    if (*(eax_5 + 0x1bc) == *(eax_5 + 0x1c0))
        struct partsengine::CGUIController::VTable** eax_1 = sub_4e7cb0(eax_5 + 0x19c)
        sub_4a8470(eax_5 + 0x174, sub_4e7cb0(eax_5 + 0x19c), eax_1, 0)
    
    ecx = *(*(eax_5 + 0x1bc) + ((*(eax_5 + 0x1c0) - *(eax_5 + 0x1bc)) s>> 2 << 2) - 4)

return sub_4a7780(ecx) __tailcall
