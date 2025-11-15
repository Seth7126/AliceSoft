// 函数: ?setmbcp_internal@@YAHH_N@Z
// 地址: 0x71b49d
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_8 = sub_714cce()
___acrt_update_thread_multibyte_data()
uint32_t eax_1 = getSystemCP(arg1)
void* ecx = var_8
uint32_t var_10 = eax_1

if (eax_1 == *(*(ecx + 0x48) + 4))
    return 0

int32_t edi
int32_t var_1c_1 = edi
int32_t* eax_3 = __malloc_base(0x220)
int32_t* edi_1 = eax_3
int32_t result

if (edi_1 == 0)
    result = 0xffffffff
else
    __builtin_memcpy(edi_1, *(var_8 + 0x48), 0x220)
    edi_1 = eax_3
    uint32_t var_24_1 = var_10
    *edi_1 = 0
    result = __setmbcp_nolock(var_24_1, edi_1)
    
    if (result != 0xffffffff)
        if (arg2 == 0)
            sub_711751()
        
        int32_t* eax_7 = *(var_8 + 0x48)
        int32_t ebx_1 = *eax_7
        *eax_7 -= 1
        
        if (ebx_1 == 1)
            void* eax_8 = var_8
            
            if (*(eax_8 + 0x48) != 0x7e1b10)
                __free_base(*(eax_8 + 0x48))
        
        *edi_1 = 1
        int32_t* ecx_6 = edi_1
        edi_1 = nullptr
        *(var_8 + 0x48) = ecx_6
        
        if ((*(var_8 + 0x350) & 2) == 0 && (data_7e180c.b & 1) == 0)
            var_10 = &var_8
            __acrt_lock_and_call<class <lambda_ad1ced32f4ac17aa236e5ef05d6b3b7c> >(5, &var_10)
            
            if (arg2 != 0)
                data_7e17fc = data_7e1d30
    else
        *__errno() = 0x16
        result = 0xffffffff

__free_base(edi_1)
return result
