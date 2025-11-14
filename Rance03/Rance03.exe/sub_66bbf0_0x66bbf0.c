// 函数: sub_66bbf0
// 地址: 0x66bbf0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int128_t* eax = arg6
int32_t* esi = arg4
int32_t* edi = arg3

if (edi != arg2 && esi != arg5)
    bool cond:0_1
    
    do
        if (*esi s>= *edi)
            *eax = *edi
            eax[1] = *(edi + 0x10)
            int64_t xmm0_6 = *(edi + 0x20)
            edi = &edi[0xa]
            eax[2].q = xmm0_6
            eax += 0x28
            cond:0_1 = edi != arg2
        else
            *eax = *esi
            eax[1] = *(esi + 0x10)
            int64_t xmm0_3 = *(esi + 0x20)
            esi = &esi[0xa]
            eax[2].q = xmm0_3
            eax += 0x28
            cond:0_1 = esi != arg5
    while (cond:0_1)

int32_t* var_14 = arg3
int128_t* eax_1 = sub_66f9b0(eax, arg2, edi, eax)
int32_t* var_1c = arg3
return sub_66f9b0(eax_1, arg5, esi, eax_1)
