// 函数: sub_618680
// 地址: 0x618680
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6bc5d8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
sub_6187a0(arg1)
int32_t* esi = nullptr
int32_t* var_24 = nullptr
int32_t var_20 = 0
int32_t var_1c = 0
int32_t var_c_1 = 0
HRSRC result = FindResourceA(arg2, 0x90, &data_6ec378)
HMODULE ebx

if (result == 0)
    ebx.b = 0
else
    ebx = SizeofResource(arg2, result)
    
    if (ebx == 0)
        ebx.b = 0
    else
        result = LoadResource(arg2, result)
        
        if (result == 0)
            ebx.b = 0
        else
            result = LockResource(result)
            
            if (result == 0)
                ebx.b = 0
            else
                sub_403540(&var_24, ebx)
                esi = var_24
                sub_69d850(esi, result, ebx, eax_2)
                
                if (esi == var_20)
                    ebx.b = 0
                else if (sub_608370(arg1 + 8, &var_24).b == 0)
                    ebx.b = 0
                else
                    *(arg1 + 4) = arg3
                    
                    if (sub_60a720(arg1 + 0x50, 0x10, arg3).b == 0)
                        ebx.b = 0
                    else if (sub_60a720(arg1 + 0x58, 0x40, arg3).b == 0)
                        ebx.b = 0
                    else
                        ebx.b = 1

if (esi != 0)
    j__free(esi)

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
return result
