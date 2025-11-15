// 函数: sub_4287c0
// 地址: 0x4287c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if ((*(arg1 + 0x38) - *(arg1 + 0x34)) s>> 2 s<= arg2)
    int32_t eax_1
    eax_1.b = 0
    return eax_1

int32_t esi = *(arg1 + 0x34)

if ((*(arg1 + 0x38) - esi) s>> 2 u<= arg2)
    sub_6d0947("invalid vector<T> subscript")
    noreturn

void* esi_1 = *(esi + (arg2 << 2))
int32_t* ecx = *(esi_1 + 4)
int32_t eax_4

if (ecx != 0)
    eax_4.b = (*(*ecx + 8))() == 3
    
    if (eax_4.b != 0)
        void* eax_6
        eax_6.b = *(*(esi_1 + 4) + 0x38)
        return eax_6

eax_4.b = 0
return eax_4
