// 函数: sub_5da350
// 地址: 0x5da350
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

float var_10 = arg2
int32_t ebx = 0
int32_t eax
int32_t edx_2
edx_2:eax = muls.dp.d(0x4bda12f7, arg1[1] - *arg1)
int32_t edx_3 = edx_2 s>> 6
int32_t result = (edx_3 u>> 0x1f) + edx_3

if (result s> 0)
    int32_t edi_1 = 0
    
    do
        void* eax_4 = *arg1 + edi_1
        
        if (*(eax_4 + 0x7c) != 0)
            float var_c = *(eax_4 + 0xb8) * arg2
            float var_8_1 = *(eax_4 + 0xbc) * arg2
            float var_4_1 = *(eax_4 + 0xc0) * arg2
            sub_5da540(arg1, ebx, &var_c)
            arg2 = var_10
        
        ebx += 1
        int32_t eax_5
        int32_t edx_4
        edx_4:eax_5 = muls.dp.d(0x4bda12f7, arg1[1] - *arg1)
        edi_1 += 0xd8
        int32_t edx_5 = edx_4 s>> 6
        result = (edx_5 u>> 0x1f) + edx_5
    while (ebx s< result)

return result
