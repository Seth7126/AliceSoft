// 函数: sub_67b1d0
// 地址: 0x67b1d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_230
int32_t eax_1 = __security_cookie ^ &var_230
int32_t ebp = arg2
void* edx = arg3
int32_t var_20c = ebp
void* var_208 = edx
void var_204
int32_t ecx
int32_t edi
edi, ecx = __memfill_u32(&var_204, 0x7fffffff, 0x80)
void* result = nullptr
void* result_1 = nullptr

if (arg6 s> 0)
    do
        int32_t* edx_1 = *(edx + 0x74)
        char* edi_1 = arg8
        int32_t var_220_1 = 3
        uint32_t ebx_1 = zx.d(*(result + arg7))
        int32_t esi_3 = (ebp - zx.d(*(ebx_1 + *edx_1))) * 2
        int32_t ecx_4 = (arg4 - zx.d(*(edx_1[1] + ebx_1))) * 3
        int32_t edx_3 = arg5 - zx.d(*(edx_1[2] + ebx_1))
        int32_t edx_5 = (edx_3 + 4) << 4
        int32_t var_21c_1 = edx_5
        int32_t ebp_4 = edx_3 * edx_3 + ecx_4 * ecx_4 + esi_3 * esi_3
        void* ecx_6 = &var_204
        int32_t var_228_1 = ebp_4
        int32_t var_224_1 = (esi_3 + 8) << 5
        int32_t temp2_1
        
        do
            int32_t eax_15 = ebp_4
            int32_t var_22c_1 = 7
            int32_t ebp_5 = (ecx_4 + 6) * 0x18
            var_230 = eax_15
            int32_t temp1_1
            
            do
                int32_t esi_6 = 3
                int32_t temp0_1
                
                do
                    if (eax_15 s< *ecx_6)
                        *ecx_6 = eax_15
                        *edi_1 = ebx_1.b
                    
                    eax_15 += edx_5
                    ecx_6 += 4
                    edx_5 -= 0xffffff80
                    edi_1 = &edi_1[1]
                    temp0_1 = esi_6
                    esi_6 -= 1
                while (temp0_1 - 1 s>= 0)
                edx_5 = var_21c_1
                eax_15 = var_230 + ebp_5
                ebp_5 += 0x120
                var_230 = eax_15
                temp1_1 = var_22c_1
                var_22c_1 -= 1
            while (temp1_1 - 1 s>= 0)
            ebp_4 = var_228_1 + var_224_1
            var_228_1 = ebp_4
            temp2_1 = var_220_1
            var_220_1 -= 1
            var_224_1 += 0x200
        while (temp2_1 - 1 s>= 0)
        ebp = var_20c
        result = result_1 + 1
        edx = var_208
        result_1 = result
    while (result s< arg6)

@__security_check_cookie@4(eax_1 ^ &var_230)
return result
