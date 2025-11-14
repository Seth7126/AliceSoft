// 函数: sub_47d190
// 地址: 0x47d190
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* esi = data_75d4f8

if (*(esi + 4) == 0)
    void** eax = arg2
    
    if (esi + 8 != eax)
        sub_401ff0(esi + 8, eax, 0, 0xffffffff)
    
    *(esi + 0x20) = arg1
    int32_t eax_3
    int32_t edx_1
    edx_1:eax_3 = sx.q(arg1 + 7)
    arg2.b = 0
    *(esi + 0x28) = *(esi + 0x24)
    sub_47d750(esi + 0x24, (eax_3 + (edx_1 & 7)) s>> 3, &arg2)
    sub_47d460(esi)
    *(esi + 4) = 1

enum MESSAGEBOX_RESULT result
result.b = 1
return result
