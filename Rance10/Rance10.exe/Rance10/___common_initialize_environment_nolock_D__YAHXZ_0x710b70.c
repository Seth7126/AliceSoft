// 函数: ??$common_initialize_environment_nolock@D@@YAHXZ
// 地址: 0x710b70
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (data_7fc6d0 != 0)
    return 0

___acrt_initialize_multibyte()
PSTR eax_1 = ___dcrt_get_narrow_environment_from_os()
int32_t result

if (eax_1 != 0)
    void* eax_2 = create_environment<char>(eax_1)
    
    if (eax_2 != 0)
        data_7fc6dc = eax_2
        __crt_state_management::dual_state_global<struct __crt_locale_data*>::initialize(
            &data_7fc6d0, eax_2)
        result = 0
    else
        result = 0xffffffff
    
    __free_base(0)
else
    result = 0xffffffff

__free_base(eax_1)
return result
