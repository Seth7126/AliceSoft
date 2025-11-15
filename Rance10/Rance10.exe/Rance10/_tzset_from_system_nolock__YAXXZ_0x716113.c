// 函数: ?tzset_from_system_nolock@@YAXXZ
// 地址: 0x716113
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

PSTR* eax = sub_715b7d()
void* var_8 = nullptr
int32_t var_c = 0
int32_t var_10 = 0

if (__get_daylight(&var_8) == 0 && __get_fmode(&var_c) == 0
        && __get_stream_buffer_pointers(&var_10) == 0)
    __free_base(data_7fca08)
    data_7fca08 = 0
    
    if (GetTimeZoneInformation(&data_7fca18) != 0xffffffff)
        void* ecx_3 = data_7fca18 * 0x3c
        int32_t edx_1 = data_7fca6c
        int32_t edi
        int32_t var_20_4 = edi
        data_7fca10 = 1
        var_8 = ecx_3
        
        if (data_7fca5e != 0)
            ecx_3 += edx_1 * 0x3c
            var_8 = ecx_3
        
        int32_t eax_6
        
        if (data_7fcab2 != 0)
            eax_6 = data_7fcac0
        
        if (data_7fcab2 == 0 || eax_6 == 0)
            var_c = 0
            var_10 = 0
        else
            var_c = 1
            var_10 = (eax_6 - edx_1) * 0x3c
        
        uint32_t CodePage = ____lc_codepage_func(ecx_3)
        BOOL usedDefaultChar
        
        if (WideCharToMultiByte(CodePage, 0, &data_7fca1c, 0xffffffff, *eax, 0x3f, nullptr, 
                &usedDefaultChar) == 0 || usedDefaultChar != 0)
            **eax = 0
        else
            (*eax)[0x3f] = 0
        
        if (WideCharToMultiByte(CodePage, 0, &data_7fca70, 0xffffffff, eax[1], 0x3f, nullptr, 
                &usedDefaultChar) == 0 || usedDefaultChar != 0)
            *eax[1] = 0
        else
            eax[1][0x3f] = 0
    
    data_7fc9f8 = var_8
    data_7fc9fc = var_c
    data_7fca00 = var_10
    return &data_7fca00

int32_t var_30_3
__builtin_memset(&var_30_3, 0, 0x14)
__invoke_watson()
noreturn
