// 函数: sub_55a410
// 地址: 0x55a410
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* result = arg2
int32_t* ebx = arg1
int32_t* result_2 = result
int32_t* var_c = ebx

if (ebx != result)
    int32_t* result_3 = &ebx[1]
    int32_t* result_5 = result_3
    
    if (result_3 != result)
        void* esi_1 = 4 - ebx
        void* var_8_1 = esi_1
        
        do
            void* ebp_1 = *result_3
            int32_t* result_1 = result_3
            
            if (sub_5594e0(ebp_1, *ebx) == 0)
                void* ebx_1 = result_3[-1]
                void** result_6 = &result_3[-1]
                
                if (sub_5594e0(ebp_1, ebx_1) != 0)
                    void** result_4 = result_1
                    char i
                    
                    do
                        *result_4 = ebx_1
                        ebx_1 = result_6[-1]
                        result_4 = result_6
                        result_6 -= 4
                        i = sub_5594e0(ebp_1, ebx_1)
                    while (i != 0)
                    result_1 = result_4
                    result_3 = result_5
                
                result = result_1
                ebx = var_c
                esi_1 = var_8_1
                *result = ebp_1
            else
                int32_t ecx_1 = (&result_3[-1] + esi_1) s>> 2 << 2
                result = _memcpy(result_3 - ecx_1 + 4, ebx, ecx_1)
                *ebx = ebp_1
            
            result_3 = &result_3[1]
            result_5 = result_3
        while (result_3 != result_2)

return result
