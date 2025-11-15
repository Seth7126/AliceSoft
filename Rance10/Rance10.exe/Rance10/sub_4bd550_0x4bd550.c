// 函数: sub_4bd550
// 地址: 0x4bd550
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi = arg3
int32_t var_10 = arg2
int32_t var_c = edi
int32_t eax_1
int32_t edx
edx:eax_1 = sx.q(arg2 - 1)
int32_t esi_1 = (eax_1 - edx) s>> 1

if (arg4 s>= arg2)
    int32_t eax_20 = *arg5
    *(edi + (arg2 << 2)) = eax_20
    return eax_20

int32_t ecx_5

do
    int32_t* ebx_1 = *arg5
    int32_t* eax_4 = edi + (esi_1 << 2)
    int32_t* edi_1 = *eax_4
    int32_t eax_6 = (*(*edi_1 + 0x14))()
    int32_t ebp_1 = (*(*edi_1 + 0x10))()
    int32_t eax_8 = (*(*ebx_1 + 0x14))()
    int32_t eax_9 = (*(*ebx_1 + 0x10))()
    
    if (eax_9 s< eax_8)
        eax_9 = eax_8
    
    if (ebp_1 s< eax_6)
        ebp_1 = eax_6
    
    if (ebp_1 s<= eax_9)
        int32_t eax_18 = *arg5
        *(var_c + (var_10 << 2)) = eax_18
        return eax_18
    
    edi = var_c
    *(edi + (var_10 << 2)) = *eax_4
    ecx_5 = esi_1
    int32_t eax_13
    int32_t edx_4
    edx_4:eax_13 = sx.q(esi_1 - 1)
    var_10 = ecx_5
    esi_1 = (eax_13 - edx_4) s>> 1
while (arg4 s< ecx_5)

int32_t eax_16 = *arg5
*(edi + (ecx_5 << 2)) = eax_16
return eax_16
