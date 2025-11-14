// 函数: sub_625af0
// 地址: 0x625af0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void var_24
int32_t eax_1 = __security_cookie ^ &var_24
int16_t edi = 0
void* result

for (int32_t i = 1; i s<= 0xf; i += 1)
    void var_22
    result.w = *(&var_24 + arg4 - &var_22 + (i << 1))
    result.w += edi
    result.w *= 2
    edi = result.w
    *(&var_24 + (i << 1)) = edi

int32_t edi_1 = 0

if (arg2 s>= 0)
    do
        uint32_t i_1 = zx.d(*(arg3 + (edi_1 << 2) + 2))
        
        if (i_1 != 0)
            uint32_t eax_2 = zx.d(*(&var_24 + (i_1 << 1)))
            uint32_t esi = eax_2
            *(&var_24 + (i_1 << 1)) = eax_2.w + 1
            int32_t eax_4 = 0
            
            do
                i_1 -= 1
                int32_t ecx_3 = esi & 1
                esi u>>= 1
                eax_4 = (eax_4 | ecx_3) * 2
            while (i_1 s> 0)
            
            result = eax_4 u>> 1
            *(arg3 + (edi_1 << 2)) = result.w
        
        edi_1 += 1
    while (edi_1 s<= arg2)

sub_69a5bc(eax_1 ^ &var_24)
return result
