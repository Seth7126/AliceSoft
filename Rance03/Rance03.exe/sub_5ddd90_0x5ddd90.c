// 函数: sub_5ddd90
// 地址: 0x5ddd90
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* ecx_1 = *(arg1 + 4)

if (arg2 u>= *(ecx_1 + 0xc) u>> 2)
    sub_64b530(0x6eabac)
    return 0

int32_t eax_2

if (*(ecx_1 + 0xc) != 0)
    eax_2 = *(ecx_1 + 8)
else
    eax_2 = 0

void* ecx = *(ecx_1 + 0x1c)
int32_t esi_1 = *(eax_2 + (arg2 << 2))
void* esi_2

if (esi_1 u< (*(ecx + 0xc) - *(ecx + 8)) s>> 2)
    esi_2 = *(*(ecx + 8) + (esi_1 << 2))
else
    esi_2 = nullptr

if (*(esi_2 + 0x54) == 0)
    struct IVMStruct::sys43vm::CVMStructWrapper::VTable** eax_7 = sub_69adc6(8)
    
    if (eax_7 != 0)
        *eax_7 = &sys43vm::CVMStructWrapper::`vftable'{for `IVMStruct'}
        eax_7[1] = 0
        *(esi_2 + 0x54) = eax_7
        eax_7[1] = esi_2
        return *(esi_2 + 0x54)
    
    *(esi_2 + 0x54) = 0
    *4 = esi_2

return *(esi_2 + 0x54)
