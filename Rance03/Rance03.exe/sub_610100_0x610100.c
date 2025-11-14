// 函数: sub_610100
// 地址: 0x610100
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cd3e8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_4c
int32_t eax_2 = __security_cookie ^ &var_4c
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void** ebx = arg3
int32_t* ebp = arg4
*(arg1 + 8) = *(arg1 + 4)
bool cond:0 = *(arg1 + 0x24) u< 0x10
*(arg1 + 0x20) = 0
char* eax_6

if (cond:0)
    eax_6 = arg1 + 0x10
else
    eax_6 = *(arg1 + 0x10)

*eax_6 = 0
HMODULE result

if (*arg2 == arg2[1])
    result.b = 0
else
    struct graphengine::CGetDLL::VTable* const var_34_1 = &graphengine::CGetDLL::`vftable'
    int32_t var_30_1 = 0
    int32_t var_4 = 0
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    char var_2c = 0
    sub_402110(&var_2c, "ShaderCompiler.dll", 0x12)
    char* lpModuleName = &var_2c
    
    if (var_18_1 u>= 0x10)
        lpModuleName = var_2c.d
    
    HMODULE hModule = GetModuleHandleA(lpModuleName)
    HMODULE hModule_1 = hModule
    result.b = hModule == 0
    char var_45_1 = result.b
    
    if (var_18_1 u>= 0x10)
        j__free(var_2c.d)
        result.b = var_45_1
    
    if (result.b != 0)
        result.b = 0
    else
        sub_401f60(&var_2c, "CreateInterface")
        
        if (hModule != 0)
            PSTR lpProcName = &var_2c
            
            if (var_18_1 u>= 0x10)
                lpProcName = var_2c.d
            
            hModule = GetProcAddress(hModule, lpProcName)
        
        if (var_18_1 u>= 0x10)
            j__free(var_2c.d)
        
        int32_t var_18_2 = 0xf
        int32_t var_1c_2 = 0
        var_2c = 0
        
        if (hModule == 0)
            result.b = 0
        else
            result = hModule("jrqG", eax_4)
            
            if (result == 0)
                result.b = 0
            else
                bool cond:5_1 = ebp[5] u< 0x10
                int32_t* var_44 = nullptr
                int32_t* var_40 = nullptr
                
                if (not(cond:5_1))
                    ebp = *ebp
                
                if (ebx[5] u>= 0x10)
                    ebx = *ebx
                
                int32_t edx_1 = *arg2
                
                if ((*(result->unused + 8))(edx_1, arg2[1] - edx_1, ebx, ebp, 0x8800, &var_44, 
                        &var_40) != 0)
                    int32_t* ecx_15 = var_40
                    
                    if (ecx_15 != 0)
                        (*(*ecx_15 + 4))()
                    
                    int32_t* ecx_16 = var_44
                    
                    if (ecx_16 == 0)
                        (*(result->unused + 4))()
                        result.b = 0
                    else if ((*(*ecx_16 + 0x14))() s<= 0)
                        (*(result->unused + 4))()
                        result.b = 0
                    else
                        sub_403540(arg1 + 4, (*(*var_44 + 0x14))())
                        sub_69d850(*(arg1 + 4), (*(*var_44 + 0x18))((*(*var_44 + 0x14))()))
                        (*(result->unused + 4))()
                        result.b = 1
                else
                    int32_t* ecx_7 = var_44
                    
                    if (ecx_7 != 0)
                        (*(*ecx_7 + 4))()
                    
                    int32_t* ecx_8 = var_40
                    
                    if (ecx_8 != 0)
                        sub_402670(arg1 + 0x10, (*(*ecx_8 + 0x18))())
                        (*(*var_40 + 4))()
                    
                    (*(result->unused + 4))()
                    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_4c)
return result
