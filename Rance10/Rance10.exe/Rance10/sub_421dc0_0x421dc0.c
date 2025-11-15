// 函数: sub_421dc0
// 地址: 0x421dc0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* edi = arg4

if (*edi == edi[1])
    int32_t eax
    eax.b = 1
    return eax

int32_t* eax_2 = (*(**(arg1 + 8) + 4))(arg2)

if (eax_2 == 0)
    eax_2.b = 0
    return eax_2

if ((*(*eax_2 + 0x14))() != (edi[1] - *edi) s>> 2 << 2)
label_421e69:
    uint32_t eax_4
    eax_4.b = 0
    return eax_4

int32_t* edx_1 = (*(*eax_2 + 0x18))()
int32_t i = 0
arg4 = edx_1

if (((edi[1] - *edi) & 0xfffffffc) s> 0)
    do
        int32_t* ecx_6 = i << 2
        
        if (sub_421d10(*(ecx_6 + edx_1), *(*edi + ecx_6), arg3).b == 0)
            goto label_421e69
        
        i += 1
        edx_1 = arg4
    while (i s< (edi[1] - *edi) s>> 2)

int32_t eax_6
eax_6.b = 1
return eax_6
