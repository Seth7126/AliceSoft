// 函数: sub_60b890
// 地址: 0x60b890
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_742e40
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_9c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result = 0xf
int32_t var_6c = 0
int32_t result_1 = 0xf
char var_7c = 0
int32_t var_8_1 = 0
int32_t ebx = *(arg1 + 0x68)
int32_t* lpModuleName_1 = *(arg1 + 0x64)
int32_t var_8c = ebx

if (lpModuleName_1 == ebx)
    ebx.b = 1
else
    int32_t* lpModuleName_3
    char var_44
    int32_t var_30
    char var_2c
    
    do
        struct hllbinder::CHLLBinder::VTable* const var_64 = &hllbinder::CHLLBinder::`vftable'
        int32_t var_4c_1 = 0xf
        int32_t var_50_1 = 0
        char var_60 = 0
        int32_t* (* hModule_2)(int32_t* arg1, int32_t arg2, int32_t* arg3) = nullptr
        var_8_1.b = 1
        
        if (&var_60 != lpModuleName_1)
            sub_403590(&var_60, lpModuleName_1, 0, 0xffffffff)
        
        int32_t* (* eax_3)(int32_t* arg1, int32_t arg2, int32_t* arg3)
        int32_t* (* hModule)(int32_t* arg1, int32_t arg2, int32_t* arg3)
        
        if (sub_47bac0(&var_64) == 0)
            PSTR lpModuleName
            
            if (lpModuleName_1[5] u< 0x10)
                lpModuleName = lpModuleName_1
            else
                lpModuleName = *lpModuleName_1
            
            hModule = GetModuleHandleA(lpModuleName)
            hModule_2 = hModule
            eax_3.b = hModule != 0
        else
            hModule = hModule_2
            eax_3.b = 1
        
        int32_t* (* hModule_1)(int32_t* arg1, int32_t arg2, int32_t* arg3)
        
        if (eax_3.b == 0)
            int32_t* (* eax_4)(int32_t* arg1, int32_t arg2, int32_t* arg3)
            
            if (lpModuleName_1[5] u< 0x10)
                eax_4 = lpModuleName_1
            else
                eax_4 = *lpModuleName_1
            
            hModule_1 = eax_4
            int32_t var_18_1 = 0xf
            int32_t var_1c_1 = 0
            var_2c = 0
            sub_403490(&var_2c, "%s\n", 3)
            var_8_1.b = 2
            var_8_1.b = 3
            sub_4055a0(&var_7c, sub_409240(&hModule_1, &var_2c, &var_44, &hModule_1), 0, 0xffffffff)
            
            if (var_30 u>= 0x10)
                sub_403160(var_44.d, var_30 + 1, 1)
            
            var_30 = 0xf
            int32_t var_34_1 = 0
            var_44 = 0
            
            if (var_18_1 u>= 0x10)
                sub_403160(var_2c.d, var_18_1 + 1, 1)
        else if (hModule == 0)
            lpModuleName_1[9] = sub_47bac0(&var_64)
        else
            void* edi_1 = lpModuleName_1[6]
            int32_t ebx_1 = lpModuleName_1[7]
            
            if (edi_1 != ebx_1)
                void** lpProcName = edi_1 + 4
                void** lpProcName_1 = lpProcName
                
                while (true)
                    if (hModule != 0)
                        if (lpProcName[5] u>= 0x10)
                            lpProcName = *lpProcName
                        
                        hModule_1 = GetProcAddress(hModule, lpProcName)
                        lpProcName = lpProcName_1
                        hModule = hModule_1
                    else
                        hModule_1 = hModule
                    
                    if (hModule == 0)
                        int32_t* lpModuleName_2
                        
                        if (lpModuleName_1[5] u< 0x10)
                            lpModuleName_2 = lpModuleName_1
                        else
                            lpModuleName_2 = *lpModuleName_1
                        
                        lpModuleName_3 = lpModuleName_2
                        int32_t var_18_2 = 0xf
                        int32_t var_1c_2 = 0
                        var_2c = 0
                        sub_403490(&var_2c, "%s.%s()\n", 8)
                        void** lpProcName_2 = lpProcName_1
                        var_8_1.b = 4
                        
                        if (lpProcName_2[5] u>= 0x10)
                            lpProcName_2 = *lpProcName_2
                        
                        var_8_1.b = 5
                        sub_4055a0(&var_7c, 
                            sub_461a30(&lpModuleName_3, &var_2c, &var_44, &lpModuleName_3, 
                                lpProcName_2), 
                            0, 0xffffffff)
                        
                        if (var_30 u>= 0x10)
                            sub_403160(var_44.d, var_30 + 1, 1)
                        
                        var_8_1.b = 1
                        var_30 = 0xf
                        int32_t var_34_2 = 0
                        var_44 = 0
                        
                        if (var_18_2 u>= 0x10)
                            sub_403160(var_2c.d, var_18_2 + 1, 1)
                        
                        hModule = hModule_1
                        lpProcName = lpProcName_1
                    
                    lpProcName[0xa] = hModule
                    edi_1 += 0x30
                    lpProcName = &lpProcName[0xc]
                    lpProcName_1 = lpProcName
                    
                    if (edi_1 == ebx_1)
                        break
                    
                    hModule = hModule_2
            
            ebx = var_8c
        var_8_1.b = 0
        var_64 = &hllbinder::CHLLBinder::`vftable'
        
        if (var_4c_1 u>= 0x10)
            sub_403160(var_60.d, var_4c_1 + 1, 1)
        
        lpModuleName_1 = &lpModuleName_1[0xa]
    while (lpModuleName_1 != ebx)
    
    if (var_6c == 0)
        result = result_1
        ebx.b = 1
    else
        char* lpModuleName_4 = &var_7c
        
        if (result_1 u>= 0x10)
            lpModuleName_4 = var_7c.d
        
        lpModuleName_3 = lpModuleName_4
        int32_t var_18_3 = 0xf
        int32_t var_1c_3 = 0
        var_2c = 0
        sub_403490(&var_2c, 0x76b0b8, 0x2b)
        var_8_1.b = 6
        var_8_1.b = 7
        ebx.b = sub_6c52e0(sub_409240(&lpModuleName_3, &var_2c, &var_44, &lpModuleName_3))
        
        if (var_30 u>= 0x10)
            sub_403160(var_44.d, var_30 + 1, 1)
        
        int32_t var_30_1 = 0xf
        int32_t var_34_3 = 0
        var_44 = 0
        
        if (var_18_3 u>= 0x10)
            sub_403160(var_2c.d, var_18_3 + 1, 1)
        
        result = result_1

if (result u>= 0x10)
    sub_403160(var_7c.d, result + 1, 1)

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
