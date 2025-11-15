// 函数: ?write_string@?$stream_output_adapter@D@__crt_stdio_output@@QBEXQBDHQAH1@Z
// 地址: 0x705c05
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_8 = arg1
int32_t* var_c = arg1
int32_t* result

if (((*(*arg1 + 0xc) u>> 0xc).b & 1) == 0 || *(*arg1 + 4) != 0)
    int32_t edi
    int32_t var_18_1 = edi
    char* edi_1 = arg2
    result = arg3 + edi_1
    int32_t* result_1 = result
    int32_t ecx_1 = *arg5
    *arg5 = 0
    
    if (edi_1 != result)
        result = arg4
        
        do
            __crt_stdio_output::stream_output_adapter<char>::write_character(arg1, *edi_1, result)
            result = arg4
            
            if (*result == 0xffffffff)
                if (*arg5 != 0x2a)
                    break
                
                __crt_stdio_output::stream_output_adapter<char>::write_character(arg1, 0x3f, result)
                result = arg4
            
            edi_1 = &edi_1[1]
        while (edi_1 != result_1)
    
    if (*arg5 == 0 && ecx_1 != 0)
        *arg5 = ecx_1
else
    result = arg3
    *arg4 += result

return result
