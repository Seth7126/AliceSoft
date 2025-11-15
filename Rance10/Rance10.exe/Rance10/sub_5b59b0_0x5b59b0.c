// 函数: sub_5b59b0
// 地址: 0x5b59b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void var_18
int32_t var_4 = __security_cookie ^ &var_18
int32_t edx = *(arg1 + 0x38)

for (int32_t* i = *(arg1 + 0x34); i != edx; i = &i[0x1b])
    int32_t esi_1 = *(arg1 + 0x1c)
    int32_t ecx_2 = i[1]
    int32_t var_10 = *(esi_1 + *i * 0x18 + 4)
    int32_t ecx_4 = i[2]
    int32_t var_c = *(esi_1 + ecx_2 * 0x18 + 4)
    int32_t* j_1 = &var_10
    int32_t var_8_1 = *(esi_1 + ecx_4 * 0x18 + 4)
    int32_t* j = &var_c
    
    do
        if (*j_1 f> *j)
            j_1 = j
        
        j = &j[1]
    while (j != &var_4)
    
    i[0x1a] = *j_1

char* ecx_7 = *(arg1 + 0x34)
void* edx_2 = *(arg1 + 0x38) - ecx_7
char var_14 = 0
int32_t eax_5 = edx_2 s/ 0x6c
char* result = sub_5b5a80(eax_5, *(arg1 + 0x38), ecx_7, eax_5, &var_14)
@__security_check_cookie@4(var_4 ^ &var_18)
return result
