// 函数: sub_441860
// 地址: 0x441860
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* eax = *(arg1 + 4)
void** i = *eax

if (i != eax)
    do
        int32_t* ecx_1 = i[2]
        
        if (ecx_1 != 0)
            (**ecx_1)(1)
        
        i = *i
    while (i != *(arg1 + 4))

int32_t* eax_2 = *(arg1 + 4)
int32_t* i_3 = *eax_2
*eax_2 = eax_2
void* result = *(arg1 + 4)
*(result + 4) = result
*(arg1 + 8) = 0

if (i_3 != *(arg1 + 4))
    int32_t* i_2 = i_3
    int32_t* i_1
    
    do
        i_1 = *i_2
        result = j__free(i_2)
        i_2 = i_1
    while (i_1 != *(arg1 + 4))

return result
