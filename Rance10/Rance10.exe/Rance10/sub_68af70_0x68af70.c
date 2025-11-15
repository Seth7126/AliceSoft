// 函数: sub_68af70
// 地址: 0x68af70
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_747228
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void** ebx = arg3
int32_t* var_40 = arg4
*(arg1 + 8) = *(arg1 + 4)
bool cond:0 = *(arg1 + 0x24) u< 0x10
*(arg1 + 0x20) = 0
char* eax_5

if (cond:0)
    eax_5 = arg1 + 0x10
else
    eax_5 = *(arg1 + 0x10)

*eax_5 = 0
char* result

if (*arg2 == arg2[1])
    result.b = 0
else
    struct win32only::CGetDLL::VTable* const var_50_1 = &win32only::CGetDLL::`vftable'
    int32_t var_4c_1 = 0
    int32_t var_8_1 = 0
    char* var_1c_1 = 0xf
    int32_t var_20_1 = 0
    char var_30 = 0
    sub_403490(&var_30, "ShaderCompiler.dll", 0x12)
    char* lpModuleName = &var_30
    
    if (var_1c_1 u>= 0x10)
        lpModuleName = var_30.d
    
    HMODULE hModule = GetModuleHandleA(lpModuleName)
    HMODULE hModule_1 = hModule
    
    if (var_1c_1 u>= 0x10)
        sub_403160(var_30.d, &var_1c_1[1], 1)
    
    if (hModule == 0)
        result.b = 0
    else
        sub_403360(&var_30, "CreateInterface")
        
        if (hModule != 0)
            char* lpProcName = &var_30
            
            if (var_1c_1 u>= 0x10)
                lpProcName = var_30.d
            
            hModule = GetProcAddress(hModule, lpProcName)
        
        if (var_1c_1 u>= 0x10)
            sub_403160(var_30.d, &var_1c_1[1], 1)
        
        int32_t var_1c_2 = 0xf
        int32_t var_20_2 = 0
        var_30 = 0
        
        if (hModule == 0)
            result.b = 0
        else
            result = hModule("jrqG", eax_2)
            
            if (result == 0)
                result.b = 0
            else
                int32_t* var_38 = nullptr
                int32_t* var_3c = nullptr
                
                if (var_40[5] u>= 0x10)
                    var_40 = *var_40
                
                if (ebx[5] u>= 0x10)
                    ebx = *ebx
                
                int32_t edx_1 = *arg2
                
                if ((*(*result + 8))(edx_1, arg2[1] - edx_1, ebx, var_40, 0x8800, &var_38, &var_3c)
                        != 0)
                    int32_t* ecx_16 = var_3c
                    
                    if (ecx_16 != 0)
                        (*(*ecx_16 + 4))()
                    
                    int32_t* ecx_17 = var_38
                    
                    if (ecx_17 == 0)
                        (*(*result + 4))()
                        result.b = 0
                    else if ((*(*ecx_17 + 0x14))() s<= 0)
                        (*(*result + 4))()
                        result.b = 0
                    else
                        sub_405950(arg1 + 4, (*(*var_38 + 0x14))())
                        sub_700660(*(arg1 + 4), (*(*var_38 + 0x18))((*(*var_38 + 0x14))()))
                        (*(*result + 4))()
                        result.b = 1
                else
                    int32_t* ecx_8 = var_38
                    
                    if (ecx_8 != 0)
                        (*(*ecx_8 + 4))()
                    
                    int32_t* ecx_9 = var_3c
                    
                    if (ecx_9 != 0)
                        sub_403450((*(*ecx_9 + 0x18))())
                        (*(*var_3c + 4))()
                    
                    (*(*result + 4))()
                    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
