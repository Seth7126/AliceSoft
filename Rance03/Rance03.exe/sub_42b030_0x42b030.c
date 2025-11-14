// 函数: sub_42b030
// 地址: 0x42b030
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* eax_1 = (*(*(arg1 + 0x84) + 0x10))()
int32_t edx = *(arg1 + 0x84)
int32_t* var_4 = eax_1
int32_t* result = (*(edx + 0x14))()
int32_t* result_1 = result

if (eax_1 s<= 0 || result s<= 0)
    return result

int32_t eax_3 = sub_420d50(
    sub_420d50(result, 0, arg1 + 0x84, 0, eax_1, result, (*(arg1 + 0x164)).b, (*(arg1 + 0x168)).b, 
        (*(arg1 + 0x16c)).b), 
    0, arg1 + 0x84, 0, eax_1, 1, 0, 0, 0)
int32_t eax_5 = sub_420d50(
    sub_420d50(eax_3, 0, arg1 + 0x84, result - 1, eax_1, 1, (*(arg1 + 0x17c)).b, 
        (*(arg1 + 0x180)).b, (*(arg1 + 0x184)).b), 
    0, arg1 + 0x84, 0, 1, result - 1, 0, 0, 0)
sub_420d50(eax_5, eax_1 - 1, arg1 + 0x84, 0, 1, result - 1, (*(arg1 + 0x17c)).b, 
    (*(arg1 + 0x180)).b, (*(arg1 + 0x184)).b)
sub_420d50(result_1 - 2, 0, arg1 + 0x84, result_1 - 2, eax_1, 1, (*(arg1 + 0x17c)).b, 
    (*(arg1 + 0x180)).b, (*(arg1 + 0x184)).b)
int32_t* result_2 = (*(*(arg1 + 0xb4) + 0x10))()
int32_t edx_2 = *(arg1 + 0xb4)
result_1 = result_2
int32_t eax_9
int32_t* ecx_10
eax_9, ecx_10 = (*(edx_2 + 0x14))()
int32_t var_1c_2 = eax_9
int32_t** edx_3 = &result_1

if (result_2 s>= eax_1)
    edx_3 = &var_4

int32_t* var_20_2 = *edx_3
return sub_420dc0(&var_4, edx_3, arg1 + 0x84, ecx_10, arg1 + 0xb4)
