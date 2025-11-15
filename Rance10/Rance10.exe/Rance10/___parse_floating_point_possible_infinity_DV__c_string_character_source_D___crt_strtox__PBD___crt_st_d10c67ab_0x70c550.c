// 函数: ??$parse_floating_point_possible_infinity@DV?$c_string_character_source@D@__crt_strtox@@PBD@__crt_strtox@@YA?AW4floating_point_parse_result@0@AADAAV?$c_string_character_source@D@0@PBD@Z
// 地址: 0x70c550
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi
int32_t var_1c = edi
int32_t i_1 = 0
int32_t** var_10 = arg2
char* var_c = arg1
int32_t i = 0
int32_t* arg_c
int32_t* var_8 = &arg_c
char edx

do
    int32_t* eax
    eax.b = *arg1
    
    if (eax.b != *(i + &data_754f40) && eax.b != *(i + &data_754f44))
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

do
    void* eax_3
    eax_3.b = *arg1
    
    if (eax_3.b != (*"INITY")[i_1] && eax_3.b != (*"inity")[i_1])
        int32_t ecx_5
        ecx_5.b = <lambda_3a2f1c4b88a94fdfdc7bccff06592946>::operator()(&var_10) == 0
        return (ecx_5 << 2) + 3
    
    char* eax_4 = *arg2
    ecx_1 = *eax_4
    i_1 += 1
    *arg2 = &eax_4[1]
    *arg1 = ecx_1
while (i_1 != 5)

__crt_strtox::c_string_character_source<char>::unget(arg2, ecx_1)
return 3
