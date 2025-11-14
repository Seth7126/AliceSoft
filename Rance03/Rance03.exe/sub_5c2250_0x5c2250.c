// 函数: sub_5c2250
// 地址: 0x5c2250
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t esi = *(arg1 + 0x180)

if (esi s< 0)
    return 0

void* esi_1

if (esi u< (*(arg1 + 0x178) - *(arg1 + 0x174)) s>> 2)
    esi_1 = *(*(arg1 + 0x174) + (esi << 2))
else
    esi_1 = nullptr

if (*(esi_1 + 0x58) == 0)
    struct IVMGlobal::sys43vm::CVMGlobalWrapper::VTable** eax_4 = sub_69adc6(8)
    
    if (eax_4 != 0)
        *eax_4 = &sys43vm::CVMGlobalWrapper::`vftable'{for `IVMGlobal'}
        eax_4[1] = 0
        *(esi_1 + 0x58) = eax_4
        eax_4[1] = esi_1
        return *(esi_1 + 0x58)
    
    *(esi_1 + 0x58) = 0
    *4 = esi_1

return *(esi_1 + 0x58)
