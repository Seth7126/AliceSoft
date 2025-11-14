// 函数: sub_5bf560
// 地址: 0x5bf560
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c9890
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_78
int32_t eax_2 = __security_cookie ^ &var_78
HMODULE hModule
HMODULE hModule_1 = hModule
int32_t __saved_edi
int32_t var_8c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_64 = arg1
uint32_t* (* result)(int32_t arg1, int32_t* arg2, uint32_t* arg3)
int32_t edx_2
edx_2:result = muls.dp.d(0x66666667, *(arg1 + 0x88) - *(arg1 + 0x84))
int32_t var_2c = 0xf
int32_t edx_3 = edx_2 s>> 4
int32_t var_30 = 0
int32_t i_1 = (edx_3 u>> 0x1f) + edx_3
char var_40 = 0
int32_t i_2 = i_1
int32_t var_4 = 0

if (i_1 s<= 0)
    hModule.b = 1
else
    int32_t ebp_1 = 0
    int32_t var_68_1 = 0
    int32_t i
    
    do
        void** lpModuleName_1 = *(arg1 + 0x84) + ebp_1
        struct hllbinder::CHLLBinder::VTable* const var_60 = &hllbinder::CHLLBinder::`vftable'
        int32_t var_48_1 = 0xf
        int32_t var_4c_1 = 0
        char var_5c = 0
        HMODULE hModule_2 = nullptr
        var_4.b = 1
        
        if (&var_5c != lpModuleName_1)
            sub_401ff0(&var_5c, lpModuleName_1, 0, 0xffffffff)
        
        HMODULE eax_5
        
        if (sub_46c880(lpModuleName_1).b == 0)
            PSTR lpModuleName
            
            if (lpModuleName_1[5] u< 0x10)
                lpModuleName = lpModuleName_1
            else
                lpModuleName = *lpModuleName_1
            
            hModule = GetModuleHandleA(lpModuleName)
            hModule_2 = hModule
            eax_5.b = hModule != 0
        else
            hModule = hModule_2
            eax_5.b = 1
        
        int32_t var_28
        int32_t var_14
        
        if (eax_5.b == 0)
            if (lpModuleName_1[5] u>= 0x10)
                lpModuleName_1 = *lpModuleName_1
            
            void** lpModuleName_2 = lpModuleName_1
            var_4.b = 2
            sub_403110(&var_40, sub_4691f0(&var_28, 0x6e61bc), nullptr, 0xffffffff)
            
            if (var_14 u>= 0x10)
                j__free(var_28)
        else if (hModule == 0)
            lpModuleName_1[9] = sub_46c5f0(&var_60)
        else
            int32_t edx_4
            edx_4:result = muls.dp.d(0x2aaaaaab, lpModuleName_1[7] - lpModuleName_1[6])
            int32_t edx_5 = edx_4 s>> 3
            int32_t ecx_7 = (edx_5 u>> 0x1f) + edx_5
            int32_t var_70_1 = ecx_7
            
            if (ecx_7 s> 0)
                result = nullptr
                uint32_t* (* result_1)(int32_t arg1, int32_t* arg2, uint32_t* arg3) = nullptr
                
                while (true)
                    void* ebp_3 = lpModuleName_1[6] + result
                    PSTR* lpProcName_1 = ebp_3 + 4
                    
                    if (hModule != 0)
                        PSTR lpProcName
                        
                        if (lpProcName_1[5] u< 0x10)
                            lpProcName = lpProcName_1
                        else
                            lpProcName = *lpProcName_1
                        
                        ecx_7 = var_70_1
                        hModule = GetProcAddress(hModule, lpProcName)
                        result = result_1
                    
                    if (hModule == 0)
                        if (lpProcName_1[5] u>= 0x10)
                            lpProcName_1 = *lpProcName_1
                        
                        void** lpModuleName_3
                        
                        if (lpModuleName_1[5] u< 0x10)
                            lpModuleName_3 = lpModuleName_1
                        else
                            lpModuleName_3 = *lpModuleName_1
                        
                        PSTR* lpProcName_2 = lpProcName_1
                        void** lpModuleName_4 = lpModuleName_3
                        var_4.b = 3
                        sub_403110(&var_40, sub_4691f0(&var_28, "%s.%s()\n"), nullptr, 0xffffffff)
                        var_4.b = 1
                        
                        if (var_14 u>= 0x10)
                            j__free(var_28)
                        
                        ecx_7 = var_70_1
                        result = result_1
                    
                    result += 0x30
                    *(ebp_3 + 0x2c) = hModule
                    int32_t temp1_1 = ecx_7
                    ecx_7 -= 1
                    result_1 = result
                    var_70_1 = ecx_7
                    
                    if (temp1_1 == 1)
                        break
                    
                    hModule = hModule_2
                
                ebp_1 = var_68_1
                i_1 = i_2
        var_4.b = 0
        var_60 = &hllbinder::CHLLBinder::`vftable'
        
        if (var_48_1 u>= 0x10)
            j__free(var_5c.d)
        
        arg1 = var_64
        ebp_1 += 0x28
        i = i_1
        i_1 -= 1
        var_68_1 = ebp_1
        i_2 = i_1
    while (i != 1)
    
    if (var_30 == 0)
        hModule.b = 1
    else
        char* eax_9 = &var_40
        
        if (var_2c u>= 0x10)
            eax_9 = var_40.d
        
        char* var_90_6 = eax_9
        sub_64b530(0x6e61c4)
        hModule.b = 0

if (var_2c u>= 0x10)
    j__free(var_40.d)

result.b = hModule.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_78)
return result
