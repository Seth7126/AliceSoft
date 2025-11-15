// 函数: ??$write_buffer_nolock@D@@YA_NDV__crt_stdio_stream@@@Z
// 地址: 0x717679
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi
int32_t var_c = edi
int32_t eax = __fileno(arg1)
char arg_4

if (((arg1[3]).b & 0xc0) == 0)
    int32_t eax_15 = common_lseek<long>(eax, &arg_4, ENABLE_PROCESSED_INPUT) - 1
    int32_t eax_16 = neg.d(eax_15)
    return sbb.d(eax_16, eax_16, eax_15 != 0) + 1

int32_t edi_1 = 0
int32_t eax_1 = arg1[1]
enum CONSOLE_MODE esi_2 = *arg1 - eax_1
*arg1 = eax_1 + 1
arg1[2] = arg1[6] - 1
void* result

if (esi_2 s<= 0)
    void* eax_10
    
    if (eax == 0xffffffff || eax == 0xfffffffe)
        eax_10 = &data_7e1668
    else
        eax_10 = (eax & 0x3f) * 0x30 + (&data_7fc718)[eax s>> 6]
    
    if ((*(eax_10 + 0x28) & 0x20) == 0)
        goto label_7176cf
    
    int32_t eax_11
    int32_t edx_1
    eax_11, edx_1 = __lseeki64(eax, 0, 0, FILE_END)
    
    if ((eax_11 & edx_1) != 0xffffffff)
        goto label_7176cf
    
    arg1[3] |= 0x10
    result.b = 1
else
    edi_1 = common_lseek<long>(eax, arg1[1], esi_2)
label_7176cf:
    int32_t* eax_6
    eax_6.b = arg_4
    *arg1[1] = eax_6.b
    result.b = edi_1 == esi_2

return result
