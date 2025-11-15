// 函数: ?type_case_c_tchar@?$output_processor@DV?$console_output_adapter@D@__crt_stdio_output@@V?$standard_base@DV?$console_output_adapter@D@__crt_stdio_output@@@2@@__crt_stdio_output@@AAE_ND@Z
// 地址: 0x705660
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi
int32_t var_8 = edi
int32_t __saved_ebx = arg1[0xb]
uint32_t var_10 = zx.d(*(arg1 + 0x31))
void* result_1 = &arg1[0x10]

if (__crt_stdio_output::is_wide_character_specifier<char>((*arg1).b, arg1[1]) == 0)
    void* result_2 = *(result_1 + 0x404)
    
    if (result_2 == 0)
        result_2 = result_1
    
    arg1[5] += 4
    void* eax_7
    eax_7.b = *(arg1[5] - 4)
    *result_2 = eax_7.b
    arg1[0xe] = 1
else
    arg1[5] += 4
    void* result_3 = *(result_1 + 0x404)
    
    if (result_3 == 0)
        result_3 = result_1
    
    if (_wctomb_s(&arg1[0xe], result_3, 
            __crt_stdio_output::formatting_buffer::count<char>(result_1), zx.d(*(arg1[5] - 4))) != 0)
        arg1[0xc].b = 1

void* result = *(result_1 + 0x404)

if (result != 0)
    result_1 = result

arg1[0xd] = result_1
result.b = 1
return result
