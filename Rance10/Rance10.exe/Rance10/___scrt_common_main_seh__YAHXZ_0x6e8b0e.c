// 函数: ?__scrt_common_main_seh@@YAHXZ
// 地址: 0x6e8b0e
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_4 = 0x14
int32_t var_8 = 0x7dcef0
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = __except_handler4
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ebp
var_4 = ebp
int32_t* ebp_1 = &var_4
int32_t ebx
int32_t var_2c = ebx
int32_t esi
int32_t var_30 = esi
int32_t edi
int32_t var_34 = edi
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_4 = 0x7dcef0 ^ __security_cookie_1
int32_t var_38 = __security_cookie_1 ^ &var_4
int32_t* var_1c = &var_38
void* const var_3c_1 = &data_6e8b1a
int32_t var_8_5 = 0xfffffffe
int32_t var_c_1 = var_8_4
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_3c = 1
int32_t* esp_1 = &var_38

if (___scrt_initialize_crt(1) != 0)
    goto label_6e8b2d

char eax_1
int32_t i

do
    *(esp_1 - 4) = 7
    esp_1 -= 4
    sub_6e911b()
label_6e8b2d:
    ebx.b = 0
    char var_1d_1 = 0
    int32_t var_8_1 = 0
    eax_1 = ___scrt_acquire_startup_lock()
    i = data_7fbef0
while (i == 1)

if (i != 0)
    ebx.b = 1
    char var_1d_2 = 1
else
    data_7fbef0 = 1
    *(esp_1 - 4) = 0x74e6c4
    *(esp_1 - 8) = 0x74e6a0
    int32_t eax_2 = __initterm_e()
    *(esp_1 - 4)
    
    if (eax_2 != 0)
        int32_t var_8_2 = 0xfffffffe
        return sub_6e8c70(ebp_1) __tailcall
    
    *(esp_1 - 4) = 0x74e69c
    *(esp_1 - 8) = 0x74e4d4
    __initterm()
    *(esp_1 - 4)
    data_7fbef0 = 2

*(esp_1 - 4) = eax_1.d
___scrt_release_startup_lock()
*(esp_1 - 4)
void* esp_10 = esp_1

if (data_7fd60c != 0)
    *(esp_10 - 4) = &data_7fd60c
    char eax_5 = ___scrt_is_nonwritable_in_current_image()
    *(esp_10 - 4)
    
    if (eax_5 != 0)
        *(esp_10 - 4) = 0
        *(esp_10 - 8) = 2
        *(esp_10 - 0xc) = 0
        int32_t esi_1 = data_7fd60c
        j_sub_4033e0()
        esi_1()

if (data_7fd608 != 0)
    *(esp_10 - 4) = &data_7fd608
    char eax_6 = ___scrt_is_nonwritable_in_current_image()
    *(esp_10 - 4)
    
    if (eax_6 != 0)
        *(esp_10 - 4) = data_7fd608
        __register_thread_local_exe_atexit_callback()
        *(esp_10 - 4)

*(esp_10 - 4) = zx.d(___scrt_get_show_window_mode())
*(esp_10 - 8) = common_wincmdln<char>()
*(esp_10 - 0xc) = 0
*(esp_10 - 0x10) = &__dos_header
int32_t eax_10 = sub_6d0230()

if (is_managed_app() == 0)
    *(esp_10 - 4) = eax_10
    _exit()
    noreturn

if (ebx.b == 0)
    __cexit()

*(esp_10 - 4) = 0
*(esp_10 - 8) = 1
___scrt_uninitialize_crt()
*(esp_10 - 4)
int32_t var_8_3 = 0xfffffffe
return sub_6e8c70(ebp_1) __tailcall
