// 函数: sub_533db0
// 地址: 0x533db0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_98
int32_t eax_1 = __security_cookie ^ &var_98
var_98 = arg3
int32_t i_4 = (arg2 - arg3) s/ 0x84
int32_t result
int32_t edx_3
edx_3:result = muls.dp.d(0x3e0f83e1, arg4 - arg3)
int32_t i_3 = i_4
int32_t i_6 = (arg4 - arg3) s/ 0x84
int32_t i_2 = i_6
int32_t i_5 = i_6

if (i_4 != 0)
    int32_t i
    
    do
        int32_t i_7 = i_5
        i_5 = i_3
        int32_t eax_3
        int32_t edx_5
        edx_5:eax_3 = sx.q(i_7)
        i = mods.dp.d(edx_5:eax_3, i_3)
        result = divs.dp.d(edx_5:eax_3, i_3)
        i_3 = i
    while (i != 0)
    i_2 = i_5

if (i_5 s< i_6 && i_5 s> 0)
    void* ecx_2 = var_98
    result = i_4 * 0x84
    int32_t result_1 = result
    void* edi_2 = i_5 * 0x84 + ecx_2
    int32_t i_1
    
    do
        void* esi_3 = edi_2 + result
        void* ebp = edi_2
        
        if (esi_3 == arg4)
            esi_3 = ecx_2
        
        do
            struct sealengine::CDetectPolygon::VTable* var_88
            sub_530900(&var_88, ebp)
            sub_533ef0(ebp, esi_3)
            sub_533ef0(esi_3, &var_88)
            ebp = esi_3
            int32_t ecx_10 = (arg4 - esi_3) s/ 0x84
            
            if (i_4 s>= ecx_10)
                ecx_2 = var_98
                result = result_1
                esi_3 = (i_4 - ecx_10) * 0x84 + ecx_2
            else
                result = result_1
                esi_3 += result
                ecx_2 = var_98
        while (esi_3 != edi_2)
        
        edi_2 -= 0x84
        i_1 = i_2 - 1
        i_2 = i_1
    while (i_1 s> 0)

sub_69a5bc(eax_1 ^ &var_98)
return result
