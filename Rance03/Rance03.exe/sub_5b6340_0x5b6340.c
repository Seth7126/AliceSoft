// 函数: sub_5b6340
// 地址: 0x5b6340
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b5378
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t var_2c
int32_t eax_2 = __security_cookie ^ &var_2c
void* ebx
void* var_30 = ebx
int32_t __saved_edi
int32_t var_3c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*(arg1 + 0x30) = arg3
char* edx = *(arg2 + 4)
void* result

if (&edx[4] u> *(arg2 + 8))
    result.b = 0
else
    int32_t var_14_1 = 0xf
    *(arg1 + 4) = ((zx.d(edx[3]) << 8 | zx.d(edx[2])) << 8 | zx.d(edx[1])) << 8 | zx.d(*edx)
    *(arg2 + 4) += 4
    int32_t var_18_1 = 0
    char var_28 = 0
    int32_t var_4 = 0
    
    if (sub_468d00(arg2, &var_28).b == 0)
        ebx.b = 0
    else
        if (arg1 + 8 != &var_28)
            sub_401ff0(arg1 + 8, &var_28, 0, 0xffffffff)
        
        if (sub_468b20(arg2, &var_2c).b == 0)
            ebx.b = 0
        else
            *(arg1 + 0x34) = var_2c
            
            if (sub_468b20(arg2, &var_2c).b == 0)
                ebx.b = 0
            else
                *(arg1 + 0x20) = var_2c
                
                if (sub_468b20(arg2, arg1 + 0x24).b == 0)
                    ebx.b = 0
                else if (sub_468b20(arg2, arg1 + 0x28).b == 0)
                    ebx.b = 0
                else if (sub_468b20(arg2, arg1 + 0x2c).b == 0)
                    ebx.b = 0
                else if (sub_468b20(arg2, arg1 + 0x38).b == 0)
                    ebx.b = 0
                else if (sub_5dc4c0(arg1 + 0x3c, arg2, *(arg1 + 0x2c)).b == 0)
                    ebx.b = 0
                else
                    ebx.b = 1
    
    if (var_14_1 u>= 0x10)
        j__free(var_28.d)
    
    result.b = ebx.b

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_2c)
return result
