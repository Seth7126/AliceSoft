// 函数: ??$common_configure_argv@D@@YAHW4_crt_argv_mode@@@Z
// 地址: 0x710848
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg1 != 2 && arg1 != 1)
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    return 0x16

int32_t edi
int32_t var_1c_1 = edi
___acrt_initialize_multibyte()
GetModuleFileNameA(nullptr, &data_7fc5c8, 0x104)
char* ebx_1 = data_7fcb18
data_7fcb20 = &data_7fc5c8

if (ebx_1 == 0 || *ebx_1 == 0)
    ebx_1 = &data_7fc5c8

int32_t var_8 = 0
int32_t var_10 = 0
parse_command_line<char>(ebx_1, nullptr, nullptr, &var_8, &var_10)
int32_t* esi_1 = ___acrt_allocate_buffer_for_argv(var_8, var_10, 1)
int32_t result

if (esi_1 != 0)
    parse_command_line<char>(ebx_1, esi_1, &esi_1[var_8], &var_8, &var_10)
    
    if (arg1 != 1)
        int32_t* var_c = nullptr
        int32_t* var_20_3 = &var_c
        int32_t* var_24_3 = esi_1
        result = sub_71b0b9()
        int32_t* eax_10
        
        if (result == 0)
            int32_t* edx_1 = var_c
            int32_t ecx_2 = 0
            int32_t* eax_11 = edx_1
            
            if (*edx_1 != 0)
                do
                    eax_11 = &eax_11[1]
                    ecx_2 += 1
                while (*eax_11 != 0)
            
            eax_10 = nullptr
            data_7fcb0c = ecx_2
            var_c = nullptr
            result = 0
            data_7fcb10 = edx_1
        else
            eax_10 = var_c
        
        __free_base(eax_10)
        var_c = nullptr
    else
        data_7fcb0c = var_8 - 1
        int32_t* eax_8 = esi_1
        esi_1 = nullptr
        data_7fcb10 = eax_8
        result = 0
else
    *__errno() = 0xc
    result = 0xc

__free_base(esi_1)
return result
