// 函数: sub_4edbb0
// 地址: 0x4edbb0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* ebx_1 = data_75d4fc + 0x174
void* eax = *(ebx_1 + 0x54)

if (eax == 0)
    if (*(ebx_1 + 0x48) == *(ebx_1 + 0x4c))
        struct partsengine::CGUIController::VTable** eax_2 = sub_4e7cb0(ebx_1 + 0x28)
        sub_4a8470(ebx_1, sub_4e7cb0(ebx_1 + 0x28), eax_2, 0)
    
    eax = *(*(ebx_1 + 0x48) + ((*(ebx_1 + 0x4c) - *(ebx_1 + 0x48)) s>> 2 << 2) - 4)

return *(eax + 0x1c)
