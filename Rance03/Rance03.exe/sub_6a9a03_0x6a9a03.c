// 函数: sub_6a9a03
// 地址: 0x6a9a03
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t esi = arg3

if (esi == 0)
    return 0

int16_t* ecx_1 = arg2
int16_t* edi_2 = arg1 - ecx_1
arg3 = 0x5a
int16_t eax_4
int16_t edx_1

do
    int16_t eax_1 = *(edi_2 + ecx_1)
    
    if (eax_1 u< 0x41 || eax_1 u> 0x5a)
        edx_1 = eax_1
    else
        edx_1 = eax_1 + 0x20
    
    eax_4 = *ecx_1
    
    if (eax_4 u>= 0x41 && eax_4 u<= 0x5a)
        eax_4 += 0x20
    
    ecx_1 = &ecx_1[1]
    int32_t temp0_1 = esi
    esi -= 1
    
    if (temp0_1 == 1)
        break
    
    if (edx_1 == 0)
        break
while (edx_1 == eax_4)

return zx.d(edx_1) - zx.d(eax_4)
