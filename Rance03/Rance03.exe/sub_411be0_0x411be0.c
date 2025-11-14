// 函数: sub_411be0
// 地址: 0x411be0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b3b40
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct win32only::CFileMapping::VTable* var_50
int32_t eax_2 = __security_cookie ^ &var_50
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = *(arg1 + 0x10)

if (ecx != 0)
    int32_t __saved_edi
    result = (**ecx)(__security_cookie ^ &__saved_edi)
    struct _EXCEPTION_REGISTRATION_RECORD** hWnd = result
    
    if (hWnd != 0)
        int32_t esi_1 = data_74b430
        WPARAM wParam = data_75d4ac
        
        if (esi_1 s>= 0)
            int32_t eax_6
            int32_t edx_1
            edx_1:eax_6 = muls.dp.d(0x2aaaaaab, data_75d5c8 - data_75d5c4)
            int32_t edx_2 = edx_1 s>> 2
            result = (edx_2 u>> 0x1f) + edx_2
            
            if (esi_1 s< result)
                int32_t* var_40
                sub_420a40(&var_40, esi_1)
                int32_t var_4 = 0
                int32_t var_30
                
                if (var_30 != 0)
                    var_50 = &win32only::CFileMapping::`vftable'
                    int32_t var_4c_1 = 0
                    int32_t* var_48_1 = nullptr
                    int32_t var_44_1 = 0
                    var_4.b = 1
                    void var_28
                    sub_401f60(&var_28, "Sys4xOpenSourceFile")
                    int32_t ebx
                    ebx.b = sub_697e00(&var_50, &var_28, var_30 + 1) == 0
                    sub_401fb0(&var_28)
                    
                    if (ebx.b == 0)
                        int32_t* eax_11 = &var_40
                        int32_t var_2c
                        
                        if (var_2c u>= 0x10)
                            eax_11 = var_40
                        
                        sub_69d850(var_48_1, eax_11, var_30 + 1)
                        SendMessageA(hWnd, 0x401, wParam, 0)
                    
                    sub_697dc0(&var_50)
                
                result = sub_401fb0(&var_40)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_50)
return result
