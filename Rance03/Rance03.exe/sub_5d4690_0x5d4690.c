// 函数: sub_5d4690
// 地址: 0x5d4690
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ebx = arg2
int32_t esi = 0

if (ebx s> 0)
    do
        if (sub_5d6c90(*(arg1 + 0x1c), arg3, &arg2, arg4).b == 0 || esi u>= *(arg1 + 0xc) u>> 2)
            struct sys43vm::CPage::VTable** eax_1
            eax_1.b = 0
            return eax_1
        
        int32_t ecx_1
        
        if (*(arg1 + 0xc) != 0)
            ecx_1 = *(arg1 + 8)
        else
            ecx_1 = 0
        
        *(ecx_1 + (esi << 2)) = arg2
        esi += 1
    while (esi s< ebx)

int32_t eax
eax.b = 1
return eax
