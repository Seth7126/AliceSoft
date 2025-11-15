// 函数: sub_524c90
// 地址: 0x524c90
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

arg3[1] = *arg3
int32_t* ecx = *(arg1 + 0x34)

if (ecx == 0)
    int32_t eax
    eax.b = 0
    return eax

int32_t* eax_2 = (*(*ecx + 0x10))(4)
void** esi = arg2
void** ecx_1

if (esi[5] u< 0x10)
    ecx_1 = esi
else
    ecx_1 = *esi

int32_t* eax_5

if ((*(*eax_2 + 0x10))(ecx_1).b != 0)
    if (esi[5] u>= 0x10)
        esi = *esi
    
    eax_5 = (*(*eax_2 + 0xc))(esi)
    
    if (eax_5 != 0)
        sub_405950(arg3, (*(*eax_5 + 0x14))())
        sub_700660(*arg3, (*(*eax_5 + 0x18))((*(*eax_5 + 0x14))()))
        (*(*eax_5 + 4))()
        int32_t eax_14
        eax_14.b = 1
        return eax_14

eax_5.b = 0
return eax_5
