// 函数: sub_56adc0
// 地址: 0x56adc0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* ebx = arg2
void* result = arg3
void* result_1 = result
int32_t i = (ebx - result) s>> 2

if (i s> 0x20)
    int32_t edi_1 = arg4
    
    do
        if (edi_1 s<= 0)
            if (i s<= 0x20)
                break
            
            void* var_24_4 = arg3
            sub_56b030(result, ebx)
            return sub_56b080(result_1, ebx)
        
        void* var_24_1 = arg3
        int32_t* var_10
        sub_56aeb0(result, result, &var_10, ebx)
        int32_t eax_1
        int32_t edx_1
        edx_1:eax_1 = sx.q(edi_1)
        int32_t edi_3 = (eax_1 - edx_1) s>> 1
        int32_t eax_4
        int32_t edx_2
        edx_2:eax_4 = sx.q(edi_3)
        edi_1 = edi_3 + ((eax_4 - edx_2) s>> 1)
        void* var_c
        
        if (((var_10 - result_1) & 0xfffffffc) s>= ((ebx - var_c) & 0xfffffffc))
            arg3 = sub_56adc0(edi_1, arg5)
            ebx = var_10
            result = result_1
        else
            sub_56adc0(edi_1, arg5)
            arg3 = var_c
            result = arg3
            result_1 = result
        
        i = (ebx - result) s>> 2
    while (i s> 0x20)

if (i s< 2)
    return result

void* var_24_3 = arg3
return sub_56b0d0(result, ebx)
