// 函数: sub_5ba100
// 地址: 0x5ba100
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_dc
int32_t eax_1 = __security_cookie ^ &var_dc
int32_t edx = arg4
void* esi = arg1
void* var_b4 = esi
int32_t result

if (edx s< 0 || edx s>= (*(arg3 + 0x18) - *(arg3 + 0x14)) s>> 2)
    result.b = 0
else
    void* ecx_1 = *(*(arg3 + 0x14) + (edx << 2))
    result = *(ecx_1 + 0x38)
    int32_t* edi_1 = *(ecx_1 + 0x34)
    int32_t* var_b8_1 = edi_1
    
    if (edi_1 != result)
        int32_t ebx_1 = arg5
        int32_t* eax_5 = esi + 0x78
        
        do
            int32_t var_c4
            
            if (arg6 != 0)
                var_c4 = edi_1[0x19]
            else
                var_c4 = 0
            
            int32_t var_84
            sub_5ba510(&var_84)
            void* ebp_1 = &edi_1[0x16]
            int32_t i_1 = 3
            var_84 = edi_1[2] + ebx_1
            int32_t var_5c_1 = edi_1[1] + ebx_1
            int32_t var_34_1 = *edi_1 + ebx_1
            void var_80
            void* ebx_2 = &var_80
            int32_t i
            
            do
                int32_t result_1 = result
                int32_t var_9c_1 = *(ebp_1 + 8)
                int32_t var_98_1 = *(ebx_2 - 4)
                int32_t var_94_1 = edx
                int32_t edx_1 = *(esi + 0x7c)
                int32_t* esi_1 = *eax_5
                int32_t var_90_1 = var_c4
                int64_t var_a4 = *ebp_1
                int32_t* eax_17 = sub_5bee30(&var_a4, edx_1, esi_1, &var_a4)
                
                if (eax_17 == edx_1)
                    int32_t eax_22
                    int32_t edx_4
                    edx_4:eax_22 = muls.dp.d(0x2aaaaaab, eax_5[1] - esi_1)
                    int32_t edx_5 = edx_4 s>> 2
                    sub_5bc8b0(eax_5, &var_a4)
                    *ebx_2 = (edx_5 u>> 0x1f) + edx_5
                else
                    *ebx_2 = (eax_17 - esi_1) s/ 0x18
                
                edx = arg4
                ebp_1 -= 0xc
                esi = var_b4
                ebx_2 += 0x28
                i = i_1
                i_1 -= 1
            while (i != 1)
            int32_t eax_23 = var_b8_1[5]
            int32_t ebp_3 = *(ecx_1 + 0x28)
            int32_t ecx_9 = var_b8_1[8]
            int32_t edx_6 = var_b8_1[0xb]
            int32_t esi_5 = var_b8_1[4]
            var_dc = *(ebp_3 + (eax_23 << 3))
            int32_t var_78_1 = var_dc
            int32_t ebx_3 = var_b8_1[7]
            float var_74_1 = *(ebp_3 + (eax_23 << 3) + 4) + 1f
            int32_t eax_26 = *(ecx_1 + 0x28)
            int32_t ecx_10 = *(ecx_1 + 0x28)
            int32_t ebp_5 = var_b8_1[0xa]
            int32_t var_70_1 = *(eax_26 + (ecx_9 << 3))
            float xmm0_10 = *(ecx_10 + (edx_6 << 3) + 4) + 1f
            float var_6c_1 = *(eax_26 + (ecx_9 << 3) + 4) + 1f
            int32_t var_68_1 = *(ecx_10 + (edx_6 << 3))
            var_dc = *(ecx_10 + (esi_5 << 3))
            float var_64_1 = xmm0_10
            int32_t var_50_1 = var_dc
            float var_4c_1 = *(ecx_10 + (esi_5 << 3) + 4) + 1f
            int32_t var_48_1 = *(ecx_10 + (ebx_3 << 3))
            float var_44_1 = *(ecx_10 + (ebx_3 << 3) + 4) + 1f
            int32_t var_40_1 = *(ecx_10 + (ebp_5 << 3))
            float var_3c_1 = *(ecx_10 + (ebp_5 << 3) + 4) + 1f
            int32_t eax_37 = var_b8_1[3]
            var_dc = *(ecx_10 + (eax_37 << 3))
            int32_t var_28_1 = var_dc
            float var_24_1 = *(ecx_10 + (eax_37 << 3) + 4) + 1f
            int32_t eax_40 = var_b8_1[6]
            int32_t var_20_1 = *(ecx_10 + (eax_40 << 3))
            float var_1c_1 = *(ecx_10 + (eax_40 << 3) + 4) + 1f
            int32_t eax_43 = var_b8_1[9]
            int32_t var_18_1 = *(ecx_10 + (eax_43 << 3))
            float var_14_1 = *(ecx_10 + (eax_43 << 3) + 4) + 1f
            int32_t var_7c_1 = var_b8_1[0xe]
            int32_t var_54_1 = var_b8_1[0xd]
            int32_t var_2c_1 = var_b8_1[0xc]
            uint32_t var_60_1 = zx.d(*(var_b8_1 + 0x3e))
            uint32_t var_38_1 = zx.d(*(var_b8_1 + 0x3d))
            uint32_t var_10_1 = zx.d(var_b8_1[0xf].b)
            void* var_8c
            sub_5beaa0(arg2, &var_8c, &var_c4)
            sub_5bc680(var_8c + 0x14, &var_84)
            edx = arg4
            edi_1 = &var_b8_1[0x1b]
            esi = var_b4
            ebx_1 = arg5
            var_b8_1 = edi_1
        while (edi_1 != result)
    
    result.b = 1

@__security_check_cookie@4(eax_1 ^ &var_dc)
return result
