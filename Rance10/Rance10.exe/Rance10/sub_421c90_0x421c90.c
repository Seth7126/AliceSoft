// 函数: sub_421c90
// 地址: 0x421c90
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* eax_1 = (*(**(arg1 + 8) + 4))(arg2)

if (eax_1 == 0)
    eax_1.b = 0
    return eax_1

uint32_t ebx_1 = (*(*eax_1 + 0x14))() u>> 2
int32_t* eax_4 = (*(*eax_1 + 0x18))()
int32_t edi = 0

if (ebx_1 != 0)
    void* esi_1 = &eax_4[2]
    
    do
        eax_4 = *esi_1
        
        if (eax_4 != 0xffffffff && sub_421810(arg1, eax_4, arg3).b == 0)
            eax_4.b = 0
            return eax_4
        
        edi += 3
        esi_1 += 0xc
    while (edi s< ebx_1)

eax_4.b = 1
return eax_4
