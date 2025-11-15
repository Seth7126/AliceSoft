// 函数: sub_428760
// 地址: 0x428760
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if ((*(arg1 + 0x38) - *(arg1 + 0x34)) s>> 2 s<= arg2)
    return 0

int32_t esi = *(arg1 + 0x34)

if ((*(arg1 + 0x38) - esi) s>> 2 u<= arg2)
    sub_6d0947("invalid vector<T> subscript")
    noreturn

void* esi_1 = *(esi + (arg2 << 2))
int32_t* ecx = *(esi_1 + 4)

if (ecx != 0)
    int32_t eax_7
    eax_7.b = (*(*ecx + 8))() == 3
    
    if (eax_7.b != 0)
        return *(*(esi_1 + 4) + 0x34)

return 0
