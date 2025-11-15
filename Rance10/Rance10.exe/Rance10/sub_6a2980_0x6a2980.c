// 函数: sub_6a2980
// 地址: 0x6a2980
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void var_24
int32_t eax_1 = __security_cookie ^ &var_24
int32_t edi = 0
uint32_t result

for (int32_t i = 1; i s<= 0xf; i += 1)
    void var_22
    result = zx.d(*(&var_24 + arg4 - &var_22 + (i << 1)))
    edi = (edi + result) * 2
    *(&var_24 + (i << 1)) = edi.w

int32_t edi_2 = 0

if (arg2 s>= 0)
    do
        uint32_t i_1 = zx.d(*(arg3 + (edi_2 << 2) + 2))
        
        if (i_1 != 0)
            uint32_t eax_3 = zx.d(*(&var_24 + (i_1 << 1)))
            uint32_t esi = eax_3
            *(&var_24 + (i_1 << 1)) = eax_3.w + 1
            int32_t eax_5 = 0
            
            do
                i_1 -= 1
                int32_t ecx_3 = esi & 1
                esi u>>= 1
                eax_5 = (eax_5 | ecx_3) * 2
            while (i_1 s> 0)
            
            result = eax_5 u>> 1
            *(arg3 + (edi_2 << 2)) = result.w
        
        edi_2 += 1
    while (edi_2 s<= arg2)

@__security_check_cookie@4(eax_1 ^ &var_24)
return result
