// 函数: sub_5bbac0
// 地址: 0x5bbac0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b4408
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_2c
int32_t eax_2 = __security_cookie ^ &var_2c
int32_t __saved_edi
int32_t var_38 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
char* edi = *(arg2 + 4)
void* result

if (&edi[4] u> *(arg2 + 8))
    result.b = 0
else
    *arg1 = ((zx.d(edi[3]) << 8 | zx.d(edi[2])) << 8 | zx.d(edi[1])) << 8 | zx.d(*edi)
    *(arg2 + 4) += 4
    char* edi_1 = *(arg2 + 4)
    
    if (&edi_1[4] u> *(arg2 + 8))
        result.b = 0
    else
        arg1[1] = ((zx.d(edi_1[3]) << 8 | zx.d(edi_1[2])) << 8 | zx.d(edi_1[1])) << 8 | zx.d(*edi_1)
        *(arg2 + 4) += 4
        int32_t ecx_14 = arg1[1]
        
        if (ecx_14 - 0xa u> 0x2a)
        label_5bbbf6:
            int32_t var_3c_4 = ecx_14
            sub_64b530(0x6e5f2c)
            result.b = 0
        else
            switch (ecx_14 + &jump_table_5bbc28[1]:2)
                case &lookup_table_5bbc38, &lookup_table_5bbc38[8], &lookup_table_5bbc38[9], 
                        &lookup_table_5bbc38[0xa], &lookup_table_5bbc38[0xb], 
                        &lookup_table_5bbc38[0xc], &lookup_table_5bbc38[0xd], 
                        &lookup_table_5bbc38[0xe], &lookup_table_5bbc38[0xf], 
                        &lookup_table_5bbc38[0x11], &lookup_table_5bbc38[0x16], 
                        &lookup_table_5bbc38[0x25], &lookup_table_5bbc38[0x29], 
                        &lookup_table_5bbc38[0x2a]
                    if (sub_468b20(arg2, &arg1[2]).b != 0)
                        result.b = 1
                    else
                        result.b = 0
                case &lookup_table_5bbc38[1]
                    if (sub_468bc0(arg2, &arg1[3]).b != 0)
                        result.b = 1
                    else
                        result.b = 0
                case &lookup_table_5bbc38[2]
                    int32_t var_18_1 = 0xf
                    int32_t var_1c_1 = 0
                    var_2c = 0
                    int32_t var_4 = 0
                    
                    if (sub_468d00(arg2, &var_2c) != 0)
                        if (&arg1[4] != &var_2c)
                            sub_401ff0(&arg1[4], &var_2c, 0, 0xffffffff)
                        
                        sub_401fb0(&var_2c)
                        result.b = 1
                    else
                        sub_401fb0(&var_2c)
                        result.b = 0
                case &lookup_table_5bbc38[3], &lookup_table_5bbc38[4], &lookup_table_5bbc38[5], 
                        &lookup_table_5bbc38[6], &lookup_table_5bbc38[7], 
                        &lookup_table_5bbc38[0x10], &lookup_table_5bbc38[0x12], 
                        &lookup_table_5bbc38[0x13], &lookup_table_5bbc38[0x14], 
                        &lookup_table_5bbc38[0x15], &lookup_table_5bbc38[0x17], 
                        &lookup_table_5bbc38[0x18], &lookup_table_5bbc38[0x19], 
                        &lookup_table_5bbc38[0x1a], &lookup_table_5bbc38[0x1b], 
                        &lookup_table_5bbc38[0x1c], &lookup_table_5bbc38[0x1d], 
                        &lookup_table_5bbc38[0x1e], &lookup_table_5bbc38[0x1f], 
                        &lookup_table_5bbc38[0x20], &lookup_table_5bbc38[0x21], 
                        &lookup_table_5bbc38[0x22], &lookup_table_5bbc38[0x23], 
                        &lookup_table_5bbc38[0x24], &lookup_table_5bbc38[0x26], 
                        &lookup_table_5bbc38[0x27], &lookup_table_5bbc38[0x28]
                    goto label_5bbbf6

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_2c)
return result
