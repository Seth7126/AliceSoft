// 函数: ??$parse_floating_point_possible_nan@DV?$c_string_character_source@D@__crt_strtox@@PBD@__crt_strtox@@YA?AW4floating_point_parse_result@0@AADAAV?$c_string_character_source@D@0@PBD@Z
// 地址: 0x70c5fd
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi
int32_t var_18 = edi
int32_t i = 0
int32_t** var_10 = arg2
char* var_c = arg1
int32_t* arg_c
int32_t* var_8 = &arg_c
char edx

do
    int32_t* eax
    eax.b = *arg1
    
    if (eax.b != *(i + &data_754f58) && eax.b != *(i + &data_754f5c))
        <lambda_3a2f1c4b88a94fdfdc7bccff06592946>::operator()(&var_10)
        return 7
    
    int32_t* eax_1 = *arg2
    edx = *eax_1
    i += 1
    *arg2 = eax_1 + 1
    *arg1 = edx
while (i != 3)

__crt_strtox::c_string_character_source<char>::unget(arg2, edx)
int32_t* eax_2 = *arg2
arg_c = eax_2
char ecx_1 = *eax_2
*arg2 = eax_2 + 1
*arg1 = ecx_1

if (ecx_1 != 0x28)
    uint32_t eax_5 = zx.d(<lambda_3a2f1c4b88a94fdfdc7bccff06592946>::operator()(&var_10))
    int32_t eax_6 = neg.d(eax_5)
    return (sbb.d(eax_6, eax_6, eax_5 != 0) & 0xfffffffd) + 7

char* eax_10 = *arg2
ecx_1 = *eax_10
*arg2 = &eax_10[1]
*arg1 = ecx_1
int32_t result

if (__crt_strtox::parse_floating_point_possible_nan_is_snan<char,class __crt_strtox::c_string_character_source<char> >(
        arg1, arg2) == 0)
    if (__crt_strtox::parse_floating_point_possible_nan_is_ind<char,class __crt_strtox::c_string_character_source<char> >(
            arg1, arg2).b == 0)
        if (*arg1 != 0x29)
            while (true)
                int32_t* eax_13
                eax_13.b = *arg1
                
                if (eax_13.b == 0)
                label_70c6f2:
                    
                    if (*arg1 == 0x29)
                        break
                else
                    int32_t ecx_7 = sx.d(eax_13.b)
                    
                    if (ecx_7 - 0x30 u<= 9 || ecx_7 - 0x61 u<= 0x19 || ecx_7 - 0x41 u<= 0x19
                            || ecx_7 == 0x5f)
                        char* eax_17 = *arg2
                        ecx_7.b = *eax_17
                        *arg2 = &eax_17[1]
                        *arg1 = ecx_7.b
                        
                        if (ecx_7.b == 0x29)
                            goto label_70c6f2
                        
                        continue
                
                uint32_t eax_19 =
                    zx.d(<lambda_3a2f1c4b88a94fdfdc7bccff06592946>::operator()(&var_10))
                int32_t eax_20 = neg.d(eax_19)
                return (sbb.d(eax_20, eax_20, eax_19 != 0) & 0xfffffffd) + 7
        
        return 4
    
    result = 6
else
    result = 5

__crt_strtox::c_string_character_source<char>::unget(arg2, *arg1)
return result
