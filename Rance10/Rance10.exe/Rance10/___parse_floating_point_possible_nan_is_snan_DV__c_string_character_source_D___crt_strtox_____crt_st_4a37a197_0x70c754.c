// 函数: ??$parse_floating_point_possible_nan_is_snan@DV?$c_string_character_source@D@__crt_strtox@@@__crt_strtox@@YA_NAADAAV?$c_string_character_source@D@0@@Z
// 地址: 0x70c754
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char ebx = 0
int32_t edi
int32_t var_10 = edi
int32_t edx = 0
void* result

while (true)
    result.b = *arg1
    
    if (result.b != (*"SNAN)")[edx] && result.b != (*"snan)")[edx])
        break
    
    char* eax = *arg2
    char ecx = *eax
    edx += 1
    *arg2 = &eax[1]
    *arg1 = ecx
    
    if (edx == 5)
        ebx = 1
        break

result.b = ebx
return result
