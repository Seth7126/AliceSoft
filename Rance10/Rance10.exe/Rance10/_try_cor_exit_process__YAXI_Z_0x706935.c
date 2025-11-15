// 函数: ?try_cor_exit_process@@YAXI@Z
// 地址: 0x706935
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

HMODULE var_8 = arg3
HMODULE var_c = arg3
int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
var_c = nullptr
BOOL result = GetModuleHandleExW(0, u"mscoree.dll", &var_c)

if (result != 0)
    result = GetProcAddress(var_c, "CorExitProcess")
    
    if (result != 0)
        result = result(arg4)

if (var_c != 0)
    result = FreeLibrary(var_c)

@__security_check_cookie@4(eax_1 ^ &__saved_ebp)
return result
