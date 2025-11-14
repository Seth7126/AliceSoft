// 函数: sub_583760
// 地址: 0x583760
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t i_2
int32_t eax_1 = __security_cookie ^ &i_2
int32_t ecx_1 = arg4 - arg3
int32_t i_4 = (arg2 - arg3) s/ 0xbc
int32_t result
int32_t edx_3
edx_3:result = muls.dp.d(0xae4c415d, ecx_1)
int32_t i_3 = i_4
int32_t i_6 = ecx_1 s/ 0xbc
i_2 = i_6
int32_t i_5 = i_6

if (i_4 != 0)
    int32_t i
    
    do
        int32_t i_7 = i_5
        i_5 = i_3
        int32_t eax_3
        int32_t edx_6
        edx_6:eax_3 = sx.q(i_7)
        i = mods.dp.d(edx_6:eax_3, i_3)
        result = divs.dp.d(edx_6:eax_3, i_3)
        i_3 = i
    while (i != 0)
    i_2 = i_5

if (i_5 s< i_6 && i_5 s> 0)
    int32_t eax_4 = i_4 * 0xbc
    result = arg3
    int32_t result_4 = i_5 * 0xbc + result
    int32_t i_1
    
    do
        int32_t result_3 = result_4
        int32_t result_2 = result_3
        int32_t result_1 = result_4 + eax_4
        
        if (result_1 == arg4)
            result_1 = result
        
        do
            int32_t (__fastcall* var_e8_1)(struct sealengine::CPolyVertex::VTable** arg1) =
                sub_5855a0
            struct sealengine::CPolyFace::VTable* const var_c0 = &sealengine::CPolyFace::`vftable'
            void var_bc
            sub_69b6c8(&var_bc, result_3 + 4, 0x3c, 3, sub_5800a0)
            char var_8_1 = *(result_2 + 0xb8)
            sub_5838f0(result_2, result_1)
            sub_5838f0(result_1, &var_c0)
            var_c0 = &sealengine::CPolyFace::`vftable'
            `eh vector vbase constructor iterator'(&var_bc, 0x3c, 3, sub_5855a0)
            result_2 = result_1
            int32_t ecx_8 = (arg4 - result_1) s/ 0xbc
            
            if (i_4 s>= ecx_8)
                result = arg3
                result_1 = (i_4 - ecx_8) * 0xbc + result
            else
                result = arg3
                result_1 += eax_4
            
            result_3 = result_2
        while (result_1 != result_4)
        
        result_4 -= 0xbc
        i_1 = i_2 - 1
        i_2 = i_1
    while (i_1 s> 0)

sub_69a5bc(eax_1 ^ &i_2)
return result
