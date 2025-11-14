// 函数: sub_4cae60
// 地址: 0x4cae60
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

uint32_t esi = arg2
char* edx = *(esi + 4)
char* eax

if (&edx[4] u> *(esi + 8))
label_4caf09:
    eax.b = 0
    return eax

int32_t ebp_1 = 0
uint32_t edi_7 = ((zx.d(edx[3]) << 8 | zx.d(edx[2])) << 8 | zx.d(edx[1])) << 8 | zx.d(*edx)
*(esi + 4) = &edx[4]

if (edi_7 s> 0)
    do
        eax = *(esi + 4)
        
        if (&eax[4] u> *(esi + 8))
            goto label_4caf09
        
        uint32_t ecx_2 = zx.d(eax[1])
        uint32_t eax_4 = zx.d(*eax)
        uint32_t edx_5 = (zx.d(eax[3]) << 8 | zx.d(eax[2])) << 8 | ecx_2
        *(esi + 4) = &eax[4]
        uint32_t var_24_1 = zx.d(data_75dd2a)
        arg2 = edx_5 << 8 | eax_4
        uint32_t* var_28_1 = &arg2
        int32_t** var_8
        sub_4ce350(arg1 + 0x20, &var_8, ecx_2)
        ebp_1 += 1
    while (ebp_1 s< edi_7)

uint32_t eax_3
eax_3.b = 1
return eax_3
