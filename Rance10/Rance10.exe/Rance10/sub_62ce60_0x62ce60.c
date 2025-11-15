// 函数: sub_62ce60
// 地址: 0x62ce60
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char* result = arg2
int32_t ebp = 0
void* edi_1 = arg3 - result

if (result u> arg3)
    edi_1 = nullptr

if (edi_1 != 0)
    uint32_t* ecx = arg1 + 0x18
    void* ebx_1 = arg4
    uint32_t* var_c_1 = ecx
    
    do
        arg3.b = *result
        int64_t var_8 = 0
        int32_t eax_1 = __Mbrtowc(&arg2, &arg3, 1, &var_8, ecx)
        int16_t ecx_1 = arg2.w
        ebx_1 += 2
        
        if (eax_1 s< 0)
            ecx_1 = -1
        
        ebp += 1
        *(ebx_1 - 2) = ecx_1
        result = &result[1]
        ecx = var_c_1
    while (ebp != edi_1)

return result
