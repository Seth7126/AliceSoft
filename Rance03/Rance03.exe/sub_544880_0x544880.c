// 函数: sub_544880
// 地址: 0x544880
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

struct sealengine::CInstance::VTable** eax = sub_5447f0(arg1, arg2)
int32_t ecx = *(arg1 + 8)
struct sealengine::CInstance::VTable*** eax_1 = *(arg1 + 4)
arg2 = eax

if (eax_1 != ecx)
    while (*eax_1 != 0)
        eax_1 = &eax_1[1]
        
        if (eax_1 == ecx)
            break
    
    if (eax_1 != ecx)
        *eax_1 = eax
        return (eax_1 - *(arg1 + 4)) s>> 2

sub_4158d0(arg1 + 4, &arg2)
return ((*(arg1 + 8) - *(arg1 + 4)) s>> 2) - 1
