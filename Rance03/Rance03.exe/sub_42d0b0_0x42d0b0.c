// 函数: sub_42d0b0
// 地址: 0x42d0b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b5336
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_160
int32_t eax_2 = __security_cookie ^ &var_160
int32_t __saved_edi
int32_t var_174 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_6 = (*(**(arg1 + 8) + 0x28))(arg2)
int32_t* ebx_1 = (*(**(arg1 + 8) + 0x24))(arg2)

if (ebx_1 != 0xffffffff)
    ebx_1 += 1

int32_t* result
char const* const var_178_2

if (eax_6 - 0xe u> 0x24)
    result.b = 0
else
    switch (eax_6 + &jump_table_42d254[3]:2)
        case &lookup_table_42d270
            var_178_2 = "array@int"
        label_42d1d0:
            sub_402670(arg3, var_178_2)
            goto label_42d1d5
        case &lookup_table_42d270[1]
            var_178_2 = "array@float"
            goto label_42d1d0
        case &lookup_table_42d270[2]
            var_178_2 = "array@string"
            goto label_42d1d0
        case &lookup_table_42d270[3]
            void var_140
            char* eax_7 = sub_42d3f0(arg1, &var_140, arg2)
            int32_t var_4 = 0
            void var_158
            void* eax_8 = sub_401f60(&var_158, "array@")
            var_4.b = 1
            void var_128
            sub_408340(arg3, sub_410a20(eax_8, eax_8, &var_128, eax_7))
            sub_401fb0(&var_128)
            sub_401fb0(&var_158)
            int32_t var_4_1 = 0xffffffff
            sub_401fb0(&var_140)
        label_42d1d5:
            
            switch (&lookup_table_42d270[0x22 + eax_6])
                case &lookup_table_42d2a0, &lookup_table_42d2a0[1], &lookup_table_42d2a0[2], 
                        &lookup_table_42d2a0[3], &lookup_table_42d2a0[0x10], 
                        &lookup_table_42d2a0[0x24]
                    if (ebx_1 s<= 1)
                        if (ebx_1 == 0xffffffff)
                            sub_405780(arg3, "@?")
                        
                        result.b = 1
                    else
                        int32_t* var_178_6 = ebx_1
                        char var_110[0x100]
                        __swprintf_c(&var_110, 0x100, 0x6daed0)
                        sub_405780(arg3, &var_110)
                        result.b = 1
                case &lookup_table_42d2a0[4], &lookup_table_42d2a0[5], &lookup_table_42d2a0[6], 
                        &lookup_table_42d2a0[7], &lookup_table_42d2a0[8], &lookup_table_42d2a0[9], 
                        &lookup_table_42d2a0[0xa], &lookup_table_42d2a0[0xb], 
                        &lookup_table_42d2a0[0xc], &lookup_table_42d2a0[0xd], 
                        &lookup_table_42d2a0[0xe], &lookup_table_42d2a0[0xf], 
                        &lookup_table_42d2a0[0x11], &lookup_table_42d2a0[0x12], 
                        &lookup_table_42d2a0[0x13], &lookup_table_42d2a0[0x14], 
                        &lookup_table_42d2a0[0x15], &lookup_table_42d2a0[0x16], 
                        &lookup_table_42d2a0[0x17], &lookup_table_42d2a0[0x18], 
                        &lookup_table_42d2a0[0x19], &lookup_table_42d2a0[0x1a], 
                        &lookup_table_42d2a0[0x1b], &lookup_table_42d2a0[0x1c], 
                        &lookup_table_42d2a0[0x1d], &lookup_table_42d2a0[0x1e], 
                        &lookup_table_42d2a0[0x1f], &lookup_table_42d2a0[0x20], 
                        &lookup_table_42d2a0[0x21], &lookup_table_42d2a0[0x22], 
                        &lookup_table_42d2a0[0x23]
                    result.b = 1
        case &lookup_table_42d270[4], &lookup_table_42d270[5], &lookup_table_42d270[6], 
                &lookup_table_42d270[7], &lookup_table_42d270[8], &lookup_table_42d270[9], 
                &lookup_table_42d270[0xa], &lookup_table_42d270[0xb], &lookup_table_42d270[0xc], 
                &lookup_table_42d270[0xd], &lookup_table_42d270[0xe], &lookup_table_42d270[0xf], 
                &lookup_table_42d270[0x11], &lookup_table_42d270[0x12], &lookup_table_42d270[0x13], 
                &lookup_table_42d270[0x14], &lookup_table_42d270[0x15], &lookup_table_42d270[0x16], 
                &lookup_table_42d270[0x17], &lookup_table_42d270[0x18], &lookup_table_42d270[0x19], 
                &lookup_table_42d270[0x1a], &lookup_table_42d270[0x1b], &lookup_table_42d270[0x1c], 
                &lookup_table_42d270[0x1d], &lookup_table_42d270[0x1e], &lookup_table_42d270[0x1f], 
                &lookup_table_42d270[0x20], &lookup_table_42d270[0x21], &lookup_table_42d270[0x22], 
                &lookup_table_42d270[0x23]
            result.b = 0
        case &lookup_table_42d270[0x10]
            var_178_2 = "array@functype"
            goto label_42d1d0
        case &lookup_table_42d270[0x24]
            var_178_2 = "array@bool"
            goto label_42d1d0
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_160)
return result
