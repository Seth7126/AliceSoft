// 函数: sub_4d0080
// 地址: 0x4d0080
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bf190
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct partsengine::CActivityData::VTable* var_50
int32_t eax_2 = __security_cookie ^ &var_50
int32_t __saved_edi
int32_t var_64 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
char* edx = *(arg2 + 4)
struct _EXCEPTION_REGISTRATION_RECORD** result

if (&edx[4] u> *(arg2 + 8))
    result.b = 0
else
    int32_t edi_7 = ((zx.d(edx[3]) << 8 | zx.d(edx[2])) << 8 | zx.d(edx[1])) << 8 | zx.d(*edx)
    *(arg2 + 4) = &edx[4]
    int32_t esi_1 = 0
    
    if (edi_7 s<= 0)
    label_4d017d:
        result.b = 1
    else
        while (true)
            int32_t var_14_1 = 0xf
            int32_t var_18_1 = 0
            char var_28 = 0
            int32_t var_4 = 0
            
            if (sub_468d00(arg2, &var_28).b == 0)
                if (var_14_1 u>= 0x10)
                    j__free(var_28.d)
                
                break
            
            sub_4c9680(&var_50)
            var_4.b = 1
            sub_4cfa10(sub_4d01c0(arg1 + 4, &var_28), &var_50)
            sub_4c9780(&var_50)
            int32_t var_4_1 = 0xffffffff
            
            if (var_14_1 u>= 0x10)
                j__free(var_28.d)
            
            esi_1 += 1
            
            if (esi_1 s>= edi_7)
                goto label_4d017d
        
        result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_50)
return result
